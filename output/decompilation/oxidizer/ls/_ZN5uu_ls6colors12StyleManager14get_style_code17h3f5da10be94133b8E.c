fn uu_ls::colors::StyleManager::get_style_code(a0: &struct24, a1: &struct24, a2: &struct16) -> int {
    let v0: struct17;  // [sp-0x79]
    let v1: i8;  // [sp-0x71]
    let v2: struct24;  // [sp-0x68]
    let v3: struct32;  // [bp-0x50]
    let v4: struct17;  // [sp-0x20]
    let v7: iNone;  // xmm0

    *((a1 + 21) as &i64) = *((a2 + 13) as &i64);
    *((a1 + 8) as &i128) = *(a2 as &i128);
    v0 = lscolors::style::Style::to_nu_ansi_term_style(a2);
    v1 = 0;
    v4 = v0;
    v3 = struct32 {
        field_0: 0x8000000000000000
        field_8: 1
        field_16: 0
        field_24: 9223372036854775810
    };
    v2 = <T as alloc::string::ToString>::to_string(&v3);
    alloc::string::String::truncate(&v2, v2.field_16 - 4);
    v7 = v2.field_0;
    return struct24 {
        field_0: v7
        field_16: v2.field_16
    };
}
