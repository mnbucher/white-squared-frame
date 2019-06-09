# White Squared Frame

This little .cpp program adds a white frame to a photo. As the source code is super small, configurations have been put directly into it instead of holding global constants.

I'm using it for my Instagram profile (https://www.instagram.com/mnbucher/), but the usages could be much wider in the near future.

In order to use and work the .cpp file, the ImageMagick Library is necessary, which can be installed via HomeBrew in the following way:
```
brew install imagemagick
```

To compile the .cpp file on macOS 10.14, one needs to run the following command:

```
g++ `Magick++-config --cxxflags --cppflags` -O2 -o white-squared-frame white-squared-frame.cpp `Magick++-config --ldflags --libs`
```

To run the program in Portrait Mode:
```
./white-squared-frame
```

For Landscape/Wide Mode:
```
./white-squared-frame w
```
