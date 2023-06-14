#define CATCH_CONFIG_MAIN
#include "Catch2/src/catch2/catch_test_macros.hpp"
#include "../Source/MainComponent.h"
#include "../Source/MainComponent.cpp"
#include <juce_core/juce_core.h>
#include <juce_graphics/juce_graphics.h>

TEST_CASE("MainComponent paint test", "[MainComponent]")
{
    MainComponent mainComponent;

    SECTION("Paint method draws expected graphics")
    {
        juce::Image testImage(juce::Image::RGB, 100, 100, true);
        juce::Graphics testGraphics(testImage);

        mainComponent.paint(testGraphics);
        juce::Colour testColour =  juce::Colour::fromRGB(18, 18, 18);

        // Add assertions to check the expected graphics are drawn
        // For example:
        REQUIRE(testImage.getPixelAt(50, 50) == testColour);
        REQUIRE(testImage.getWidth() == 100);
        REQUIRE(testImage.getHeight() == 100);
    }
}

TEST_CASE("MainComponent resized test", "[MainComponent]")
{
    MainComponent mainComponent;

    SECTION("Resized method adjusts component size")
    {
        const int newWidth = 600;
        const int newHeight = 600;

        mainComponent.setSize(newWidth, newHeight);

        REQUIRE(mainComponent.getWidth() == newWidth);
        REQUIRE(mainComponent.getHeight() == newHeight);
    }
}
