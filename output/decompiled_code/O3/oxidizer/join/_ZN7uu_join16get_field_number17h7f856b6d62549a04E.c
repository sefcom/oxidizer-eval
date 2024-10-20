fn uu_join::get_field_number(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u64) -> u64 {
    let v0: i64;  // [sp-0x88]
    let v1: i64;  // [sp-0x80]
    let v2: i192;  // [sp-0x78], Other Possible Types: String
    let v3: i32;  // [sp-0x60]
    let v4: Argument;  // [bp-0x58]
    let v5: Argument;  // [bp-0x50]
    let v6: i64;  // [sp-0x40]
    let v7: Arguments;  // [bp-0x38]
    let v9: i64;  // rax
    let v10: i128;  // xmm0
    let v11: i64;  // rax

    if a1 != 1 {
        *((a0 + 8) as &i64) = a4;
    } else {
        if a4 == 1 && a2 != a4 {
            v0 = a2 + 1;
            v1 = a4 + 1;
            v4 = Argument {
                value: &v0
                formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
            };
            v5 = Argument {
                value: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                formatter: &v1
            };
            v6 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v7 = Arguments {
                pieces: ["incompatible join fields ", ", "]
                args: [&v4, &v5]
                fmt: None
            };
            v2 = alloc::fmt::format::format_inner(&v7);
            v3 = 1;
            v9 = __rust_alloc(32, 8);
            v10 = v2;
            *((v9 + 16) as &i192) = v2;
            *(v9 as &i128) = v10;
            *(a0 as &i64) = v9;
            *((a0 + 8) as &&i64) = &g_4fdb88;
            return &g_4fdb88;
        }
        *((a0 + 8) as &i64) = a2;
    }
    *(a0 as &i64) = 0;
    return v11;
}
