fn uu_sort::GlobalSettings::parse_byte_count(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x78], Other Possible Types: Arguments
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: void*;  // [bp-0x58]
    let v5: u256;  // [sp-0x48], Other Possible Types: struct32, Argument
    let v6: u64;  // [sp-0x28]
    let v7: u64;  // [sp-0x20]
    let v9: u64;  // rdx
    let v10: u64;  // rax
    let v11: u128;  // xmm0
    let v12: u64;  // rcx
    let v13: u64;  // rax

    v0 = "b";
    v1 = 13;
    v2 = &g_429148;
    v3 = 1;
    v5 = uucore::parser::parse_size::Parser::parse(&v0, core::str::<impl str>::trim_matches(a1, a2), v9);
    v10 = v5;
    if v10 != 3 {
        v11 = *((&v5 as &char + 8) as &i128);
        v12 = *((&v5 as &char + 24) as &i64);
        *(a0) = v10;
        a0[1] = v11;
        a0[3] = v12;
        return a0;
    }
    v7 = *((&v5 as &char + 24) as &i64);
    v6 = *((&v5 as &char + 16) as &i64);
    if !v7 {
        a0[1] = v6;
        v13 = 3;
    } else {
        v5 = Argument {
            value: &v6
            formatter: core::fmt::num::<impl core::fmt::Display for u128>::fmt
        };
        v0 = Arguments {
            pieces: ["Buffer size ", " does not fit in address space"]
            args: [&v5]
            fmt: None
        };
        v4 = 0;
        alloc::fmt::format::format_inner(a0 + 1, &v0);
        v13 = 2;
    }
    *(a0) = v13;
    return a0;
}
