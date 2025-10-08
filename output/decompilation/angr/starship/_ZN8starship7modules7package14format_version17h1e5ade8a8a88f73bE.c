void starship::modules::package::format_version(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rdx

    alloc::str::<impl str>::replace(&v3, a1, a2, 34, 1, 0);
    v6.to_vec(core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_matches(v4, v5), v9), a2);
    v2 = *((long long *)&v7);
    memcpy(&v0, &v6, 16);
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    a0.format_module_version("packagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsoss", 7, v1, v2, a3, a4);
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return;
}
