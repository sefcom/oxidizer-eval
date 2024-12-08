fn uu_sort::KeySettings::check_compatibility(a0: &struct24, a1: &u32, a2: u8, a3: u8) -> u64 {
    let v0: u32;  // [sp-0x54]
    let v1: Argument;  // [bp-0x50]
    let v2: Argument;  // [bp-0x40]
    let v3: Arguments;  // [bp-0x30]

    if (a1 & 255) > 3 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if a3 {
        v0 = (&g_424a80)[a1 & 4294967295];
    } else if a2 {
        v0 = (&g_424a80)[a1 & 4294967295];
    } else {
        a0->field_0 = 0x8000000000000000;
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v1 = Argument {
        value: v5
        formatter: <char as core::fmt::Display>::fmt
    };
    v2 = Argument {
        value: &v0
        formatter: <char as core::fmt::Display>::fmt
    };
    v3 = Arguments {
        pieces: ["options '-", "", "' are incompatible"]
        args: [&v1, &v2]
        fmt: 0
    };
    return core::option::Option<T>::map_or_else(a0, &v3);
}
