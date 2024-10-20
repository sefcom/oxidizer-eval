fn uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(a0: &struct_1, a1: &u64, a2: u32, a3: i64, a4: u64, a5: u64) -> u64 {
    let v0: u8;  // [bp-0x30]
    let v1: i8;  // [bp-0x28]
    let v2: u8;  // [bp-0x20]
    let v4: &u32;  // rdx
    let v5: &u32;  // rax
    let v6: u64;  // rcx
    let v7: &struct_0;  // r15
    let v8: u64;  // rdi

    v4 = a2 - 34;
    switch (v4 as u32) {
    case 0:
        v7 = &g_421070.padding_0[0];
        break;
    case 1:
        v7 = &g_421060.padding_0[0];
        break;
    case 2:
        v7 = &g_421068.padding_0[0];
        break;
    case 61:
        v7 = &g_421058.padding_0[0];
        break;
    case 68:
        v7 = &g_421048.padding_0[0];
        break;
    case 76:
        v7 = &g_421038.padding_0[0];
        break;
    case 80:
        v7 = &g_421030.padding_0[0];
        break;
    case 82:
        v7 = &g_421040.padding_0[0];
        break;
    case 84:
        v7 = &g_421050.padding_0[0];
        break;
    default:
        a0->field_4 = 0;
        a0->field_0 = 8;
        return v5;
    }
    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v0, a1 + 3, v4, v6 + &g_420a58, a4, a5);
    v8 = v1;
    if *(&v0 as &i64) != 0x8000000000000000 {
        v5 = uu_env::string_expander::StringExpander::put_one_char(a1, v7->field_4);
        a0->field_4 = 1;
        a0->field_0 = 8;
        return v5;
    }
    v5 = v2;
    a0->field_0 = 5;
    a0->field_8 = v8;
    a0->field_10 = v8;
    a0->field_18 = v5 as u8;
    return v5;
}
