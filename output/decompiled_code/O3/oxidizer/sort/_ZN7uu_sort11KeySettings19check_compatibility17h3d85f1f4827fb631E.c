fn uu_sort::KeySettings::check_compatibility(a0: &String, a1: &u32, a2: u8, a3: u8) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: Argument;  // [bp-0x50]
    let v2: Argument;  // [bp-0x48]
    let v3: u64;  // [sp-0x38]
    let v4: Arguments;  // [bp-0x30]

    if (a1 & 255) > 3 {
        a0->ptr = 0x8000000000000000;
        return 0x8000000000000000;
    }
    if a3 {
        v0 = (&g_41efd0)[a1 & 4294967295];
    } else if a2 {
        v0 = (&g_41efd0)[a1 & 4294967295];
    } else {
        a0->ptr = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v1 = Argument {
        value: v6
        formatter: <char as core::fmt::Display>::fmt
    };
    v2 = Argument {
        value: <char as core::fmt::Display>::fmt
        formatter: &v0
    };
    v3 = <char as core::fmt::Display>::fmt;
    v4 = Arguments {
        pieces: ["options '-", &g_5928d0, "' are incompatible"]
        args: [&v1, &v2]
        fmt: None
    };
    return alloc::fmt::format::format_inner(a0, &v4);
}
