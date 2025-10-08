long long starship::modules::bun::get_bun_version(unsigned long long *a0, void* a1)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    char v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v4[6];  // [bp-0x38]

    v4.exec_cmd(a1, "buncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcha", 3, &g_11f24f0, 1);
    if (!((char)(((0 ^ v4[0]) & (0 ^ -(v4[0]))) >> 63)))
    {
        starship::utils::get_command_string_output(&v0, &v4);
        memcpy(&v3, &v1, 16);
        v2 = v0;
        return (unsigned long long)starship::modules::bun::get_bun_version::{{closure}}(a0, &v2);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
