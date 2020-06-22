#include <cstdio>
#include <string.h>
#include <iostream>
#include <Magick++.h>

using namespace std;
using namespace Magick;

int main(int argc, char** argv) {
    InitializeMagick(*argv);

    try {
        Image image("3200x3200", "white");
        Image original("photo.jpg");
        Image cropped = original;

        printf("Resizing...\n");

        cropped.resize("3000x2000");
        image.composite(cropped, 100, 600, CopyCompositeOp);
        image.write("photo-framed.jpg");

        printf("Done!\n");
    }
    catch(Exception &error_) {
        cout << "Caught exception: " << error_.what() << endl;
        return 1;
    }
    return 0;
}