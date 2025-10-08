long long starship::modules::typst::get_typst_config(unsigned long long *a0, void* a1)
{
    int v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    int v2;  // [bp-0x68]
    char v3;  // [bp-0x58]
    unsigned long long v4[2];  // [bp-0x40]
    int v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

    v4.exec_cmd(a1, "typstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsosshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a m", 5, &g_11f24f0, 1);
    if ((char)(((0 ^ v4[0]) & (0 ^ -(v4[0]))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return 0;
    }
    memcpy(&v3, &v6, 16);
    v2 = v5;
    *((unsigned long long [2])&v0) = v4;
    v9 = "typst Error: Unknown module . Use starship module --list to list out all supported modules.\nTook  to compute module src/modules/mod.rs".strip_prefix_of(6, core::str::<impl str>::trim_matches(v1, (long long)v2), v8);
    if (v9)
        starship::modules::buf::parse_buf_version(a0, v9, v8);
    else
        *(a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<starship::utils::CommandOutput>(&(char)v0);
}
