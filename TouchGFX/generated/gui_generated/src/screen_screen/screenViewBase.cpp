/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <videos/VideoDatabase.hpp>

screenViewBase::screenViewBase()
{

    __background.setPosition(0, 0, 216, 216);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    video1.setPosition(0, 0, 216, 216);
    video1.setRepeat(true);
    video1.setVideoData(video_SampleVideo2_216x216_bin_start, video_SampleVideo2_216x216_bin_length);
    video1.play();

    add(__background);
    add(video1);
}

void screenViewBase::setupScreen()
{

}
