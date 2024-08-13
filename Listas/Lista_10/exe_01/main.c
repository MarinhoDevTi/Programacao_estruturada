#include <stdio.h>

typedef struct {
    unsigned char r, g, b;
} Pixel;

void colorToGray(Pixel **image, int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            unsigned char gray = (image[i][j].r + image[i][j].g + image[i][j].b) / 3;
            image[i][j].r = image[i][j].g = image[i][j].b = gray;
        }
    }
}

int main() {
    FILE *inputFile = fopen("imagem.ppm", "rb");
    FILE *outputFile = fopen("gray_imagem.ppm", "wb");

    if (inputFile == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    char format[3];
    int width, height, maxval;
    fscanf(inputFile, "%s", format);
    fscanf(inputFile, "%d %d", &width, &height);
    fscanf(inputFile, "%d", &maxval);

    Pixel **image = (Pixel **)malloc(height * sizeof(Pixel *));
    for (int i = 0; i < height; i++) {
        image[i] = (Pixel *)malloc(width * sizeof(Pixel));
        fread(image[i], sizeof(Pixel), width, inputFile);
    }

    colorToGray(image, width, height);

    fprintf(outputFile, "%s\n%d %d\n%d\n", format, width, height, maxval);
    for (int i = 0; i < height; i++) {
        fwrite(image[i], sizeof(Pixel), width, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}