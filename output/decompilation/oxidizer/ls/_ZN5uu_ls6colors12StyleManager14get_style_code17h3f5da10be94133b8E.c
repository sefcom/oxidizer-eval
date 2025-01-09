fn uu_ls::colors::StyleManager::get_style_code(a0: &struct24, a1: &struct24, a2: &struct16) -> int {
    let v0: struct17;  // [sp-0x79]
    let v1: i8;  // [sp-0x71]
    let v2: struct24;  // [sp-0x68], Other Possible Types: i192
    let v3: i64;  // [sp-0x50]
    let v4: i64;  // [sp-0x48]
    let v5: i64;  // [sp-0x40]
    let v6: i64;  // [sp-0x38]
    let v7: struct17;  // [sp-0x20]
    let v10: i128;  // xmm0

    *((a1 + 21) as &i64) = *((a2 + 13) as &i64);
    *((a1 + 8) as &i128) = *(a2 as &i128);
    v0 = lscolors::style::Style::to_nu_ansi_term_style(a2);
    v1 = 0;
    v7 = v0;
    v3 = 0x8000000000000000;
    v4 = 1;
    v5 = 0;
    v6 = 9223372036854775810;
    v2 = <T as alloc::string::ToString>::to_string(&v3);
    alloc::string::String::truncate(&v2, *((&v2 as &char + 16) as &i64) - 4);
    v10 = v2;
    return struct24 {
        field_0: v10
        field_16: *((&v2 as &char + 16) as &i64)
    };
}
