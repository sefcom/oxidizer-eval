fn uu_od::prn_int::format_item_dec_u64(a0: u32, a1: u64) -> long long {
    let v0: u64;  // [bp-0x60]
    let v1: core::fmt::rt::Argument;  // [bp-0x58]
    let v2: struct16;  // [bp-0x58]
    let v3: core::fmt::rt::Argument;  // [bp-0x48]
    let v4: u128;  // [bp-0x48]
    let v5: core::fmt::Arguments;  // [bp-0x38]

    v0 = a1;
    v1 = core::fmt::rt::Argument {
        ty: &v0
    };
    v3 = core::fmt::rt::Argument {
        ty: 0
    };
    v5 = core::fmt::Arguments {
        pieces: [" "]
        args: [v2, v4]
        fmt: &g_41d228
    };
    core::option::Option<T>::map_or_else(a0, &v5);
    return a0;
}
