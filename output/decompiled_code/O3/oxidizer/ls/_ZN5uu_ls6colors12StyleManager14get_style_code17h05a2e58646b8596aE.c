fn uu_ls::colors::StyleManager::get_style_code(a0: u64, a1: u64, a2: u64) -> int {
    let v0: struct17;  // [sp-0x79], Other Possible Types: i136
    let v1: struct24;  // [sp-0x68], Other Possible Types: i192
    let v2: i64;  // [sp-0x50]
    let v3: i64;  // [sp-0x48]
    let v4: i64;  // [sp-0x40]
    let v5: i64;  // [sp-0x38]
    let v6: i136;  // [bp-0x20]
    let v8: i128;  // xmm0
    let v9: i128;  // xmm0

    *((a1 + 21) as &i64) = *((a2 + 13) as &i64);
    v8 = *(a2 as &i128);
    *((a1 + 8) as &i128) = v8;
    v0 = lscolors::style::Style::to_nu_ansi_term_style(a2);
    v0.field_8 = 0;
    v6 = v0;
    v2 = 0x8000000000000000;
    v3 = 1;
    v4 = 0;
    v5 = 9223372036854775810;
    v1 = <T as alloc::string::ToString>::to_string(&v2);
    alloc::string::String::truncate(&v1, *((&v1 as &char + 16) as &i64) - 4);
    v9 = v1;
    return struct24 {
        field_0: v9
        field_16: *((&v1 as &char + 16) as &i64)
    };
}
