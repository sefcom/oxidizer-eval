fn uu_join::parse_field_number(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xa8]
    let v1: i8;  // [bp-0xa7]
    let v2: i8;  // [bp-0xa0]
    let v3: Argument;  // [bp-0x98]
    let v4: String;  // [sp-0x88], Other Possible Types: i192
    let v5: i32;  // [sp-0x70]
    let v6: i64;  // [sp-0x68]
    let v7: i64;  // [sp-0x60]
    let v8: i64;  // [sp-0x58]
    let v9: i8;  // [sp-0x50]
    let v10: Arguments;  // [bp-0x48]
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: i128;  // xmm0

    v12 = core::num::<impl core::str::traits::FromStr for usize>::from_str(&v0, a1, a2);
    if !v0 {
        v13 = v2;
        if v13 {
            v12 = v13 - 1;
            *((a0 + 8) as &i64) = v12;
            *(a0 as &i64) = 0;
            return v12;
        }
    } else if v1 == 2 {
        *((a0 + 8) as &i64) = -1;
        *(a0 as &i64) = 0;
        return v12;
    }
    v6 = 0;
    v7 = a1;
    v8 = a2;
    v9 = 1;
    v3 = Argument {
        value: &v6
        formatter: <os_display::Quoted as core::fmt::Display>::fmt
    };
    v10 = Arguments {
        pieces: ["invalid field number: "]
        args: [&v3]
        fmt: None
    };
    v4 = alloc::fmt::format::format_inner(&v10);
    v5 = 1;
    v14 = __rust_alloc(32, 8);
    v15 = v4;
    *((v14 + 16) as &i192) = v4;
    *(v14 as &i128) = v15;
    *(a0 as &i64) = v14;
    *((a0 + 8) as &&i64) = &g_4fdb88;
    return &g_4fdb88;
}
