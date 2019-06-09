#include <cstdio>
#include <string.h>
#include <iostream>
#include <Magick++.h> 

using namespace std;
using namespace Magick;

int main(int argc, char** argv) {
    InitializeMagick(*argv);

    try {
        if(argc == 2){
            Image image( "3200x3200", "white");
            Image original("photo.jpg");
            Image cropped = original;

            if(strcmp(argv[1], "w") == 0){                
                cropped.resize("3000x2000");
                image.composite(cropped, 100, 600, CopyCompositeOp);
            }
            else {
                cropped.resize("2000x3000");
                image.composite(cropped, 600, 100, CopyCompositeOp);
            }
            image.write( "photo-2.jpg"); 
        }
    }
    catch(Exception &error_) {
        cout << "Caught exception: " << error_.what() << endl; 
        return 1;
    }
    return 0;
}