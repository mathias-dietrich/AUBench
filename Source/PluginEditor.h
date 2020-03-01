/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class FlipPluginAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    FlipPluginAudioProcessorEditor (FlipPluginAudioProcessor&);
    ~FlipPluginAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    FlipPluginAudioProcessor& processor;

    Slider gainSlider;
    Label gainLabel;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FlipPluginAudioProcessorEditor)
    
    void sliderValueChanged (Slider* slider)
    {
        

    }
};
