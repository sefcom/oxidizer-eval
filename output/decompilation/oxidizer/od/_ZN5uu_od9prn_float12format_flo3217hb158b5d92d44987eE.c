fn uu_od::prn_float::format_flo32(a0: i32) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x50]
    let v1: struct16;  // [bp-0x50]
    let v2: core::fmt::rt::Argument;  // [bp-0x40]
    let v3: u128;  // [bp-0x40]
    let v4: core::fmt::Arguments;  // [bp-0x30]
    let v6: u32;  // ymm0
    let v7: u32;  // ecx

    v7 = v6 & 2147483647;
    if (v6 & 8388607) && !(v6 & 2147483647) == 0x7f800000 && !(v6 & 0x7f800000) {
        v0 = core::fmt::rt::Argument {
            ty: &vvar_9{reg 224}
        };
        v2 = core::fmt::rt::Argument {
            ty: 0
        };
        v4 = core::fmt::Arguments {
            pieces: [&g_41a940]
            args: [v1, v3]
            fmt: &g_41d228
        };
        return core::option::Option<T>::map_or_else(a0, &v4);
    }
    return uu_od::prn_float::format_float(a0, 14, 8);
}
