long long starship::modules::opa::get_opa_version(unsigned long long *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x68]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50], Other Possible Types: unsigned long long
    char v4;  // [bp-0x48]
    unsigned long long v5[6];  // [bp-0x38]

    v5.exec_cmd(a1, "opapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGi", 3, &g_11f4da0, 1);
    if (!((char)(((0 ^ v5[0]) & (0 ^ -(v5[0]))) >> 63)))
    {
        starship::utils::get_command_string_output(&v3, &v5);
        memcpy(&v1, &v4, 16);
        v0 = v3;
        starship::modules::opa::parse_opa_version(a0, v1, v2);
        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
