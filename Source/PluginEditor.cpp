/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
FlipPluginAudioProcessorEditor::FlipPluginAudioProcessorEditor (FlipPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (1200, 600);
    
   
    gainSlider.setRange (0, 1.0);          // [1]
    gainSlider.setTextValueSuffix (" Db");     // [2]

    gainSlider.onValueChange = [this] {  processor.levelScale = gainSlider.getValue();};
    
    
    addAndMakeVisible (gainLabel);
    gainLabel.setText ("Level", dontSendNotification);
    gainLabel.attachToComponent (&gainSlider, true);// [3]
    
    gainSlider.setValue (0.1); // [5]
     addAndMakeVisible (gainSlider);
}

FlipPluginAudioProcessorEditor::~FlipPluginAudioProcessorEditor()
{
}

//==============================================================================
void FlipPluginAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("FlipFlop Plugin - v2", getLocalBounds(), Justification::centred, 1);
}

void FlipPluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    auto sliderLeft = 120;
    gainSlider.setBounds (sliderLeft, 20, getWidth() - sliderLeft - 10, 20);
}


