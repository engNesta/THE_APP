#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 600);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    juce::Colour offBlack = juce::Colour::fromRGB(18, 18, 18);
    g.fillAll (offBlack);

    juce::Colour offWhite = juce::Colour::fromRGB(250, 249, 246);
    g.setColour(offWhite);

    g.drawLine(150, 0, 155, 600);
    g.drawLine(450, 0, 455, 600);


    //get my colour 250,249,246
    //draw 2 vertical lines on the left and right

}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
