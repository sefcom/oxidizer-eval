fn uu_sort::KeySettings::set_sort_mode(a0: &String, a1: &u64, a2: u32) -> u64 {
    let v0: u32;  // [sp-0x78]
    let v1: u32;  // [sp-0x74]
    let v2: Arguments;  // [bp-0x70], Other Possible Types: Enum, u64
    let v3: u64;  // [sp-0x60]
    let v4: Argument;  // [bp-0x40]
    let v5: Argument;  // [bp-0x38]
    let v6: u64;  // [sp-0x28]
    let v8: &u32;  // rbx
    let v9: &u32;  // rax
    let v10: u64;  // rax

    v8 = a2;
    v9 = *((a1 as &char + 5) as &i8);
    if v9 != 6 && v9 as u8 != v8 as u8 {
        v0 = *((&g_429e08 + 0x4 * v9 as u64) as &i32);
        v1 = (&g_429e08)[v8 & 255];
        v4 = Argument {
            value: &v0
            formatter: <char as core::fmt::Display>::fmt
        };
        v5 = Argument {
            value: <char as core::fmt::Display>::fmt
            formatter: &v1
        };
        v6 = <char as core::fmt::Display>::fmt;
        v2 = Arguments {
            pieces: ["options '-", &g_5928d0, "' are incompatible"]
            args: [&v4, &v5]
            fmt: None
        };
        v10 = alloc::fmt::format::format_inner(a0, &v2);
        return v10;
    }
    v10 = uu_sort::KeySettings::check_compatibility(&v2, v8 & 4294967295, *((a1 as &char + 3) as &i8), *((a1 as &char + 2) as &i8));
    if v2 != 0x8000000000000000 {
        v10 = v3;
        a0->len = v10;
        *(&a0->ptr as &i128) = *(&v2 as &i128);
        return v10;
    }
    *((a1 as &char + 5) as &u8) = v8 as u8;
    a0->ptr = 0x8000000000000000;
    return v10;
}
