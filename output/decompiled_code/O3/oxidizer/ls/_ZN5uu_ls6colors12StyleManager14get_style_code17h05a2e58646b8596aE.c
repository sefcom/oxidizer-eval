fn uu_ls::colors::StyleManager::get_style_code(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct17;  // [sp-0x79], Other Possible Types: i136
    let v1: i192;  // [sp-0x68], Other Possible Types: struct24
    let v2: struct32;  // [bp-0x50]
    let v3: i64;  // [sp-0x20]
    let v4: i8;  // [sp-0x18]
    let v5: i32;  // [sp-0x17]
    let v6: i16;  // [sp-0x13]
    let v7: i8;  // [sp-0x11]
    let v8: i8;  // [sp-0x10]
    let v10: i128;  // xmm0
    let v11: i128;  // xmm0

    *((a1 + 21) as &i64) = *((a2 + 13) as &i64);
    v10 = *(a2 as &i128);
    *((a1 + 8) as &i128) = v10;
    v0 = lscolors::style::Style::to_nu_ansi_term_style(a2);
    v0.field_8 = 0;
    v8 = *((&v0 as &char + 16) as &i8);
    v3 = v0;
    v4 = v0.field_8;
    v5 = *((&v0 as &char + 9) as &i32);
    v6 = *((&v0 as &char + 13) as &i16);
    v7 = *((&v0 as &char + 15) as &i8);
    v2 = struct32 {
        field_0: 0x8000000000000000
        field_8: 1
        field_16: 0
        field_24: 9223372036854775810
    };
    v1 = <T as alloc::string::ToString>::to_string(&v2);
    alloc::string::String::truncate(&v1, *((&v1 as &char + 16) as &i64) - 4);
    v11 = v1;
    return struct24 {
        field_0: v11
        field_16: *((&v1 as &char + 16) as &i64)
    };
}
