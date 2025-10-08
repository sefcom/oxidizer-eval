long long uu_ls::colors::StyleManager::get_style_code(struct_0 *a0, struct_1 *a1, struct_2 *a2)
{
    char v0;  // [bp-0x79], Other Possible Types: unsigned long long
    char v1;  // [bp-0x71]
    unsigned int v2;  // [bp-0x70]
    unsigned short v3;  // [bp-0x6c]
    char v4;  // [bp-0x6a]
    char v5;  // [bp-0x69]
    int v6;  // [bp-0x68], Other Possible Types: char
    unsigned long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    void* v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x20]
    char v13;  // [bp-0x18]
    unsigned int v14;  // [bp-0x17]
    unsigned short v15;  // [bp-0x13]
    char v16;  // [bp-0x11]
    char v17;  // [bp-0x10]

    *((long long *)&a1->field_8[13]) = *((long long *)&a2->field_0[13]);
    *((int128_t *)&a1->field_8[0]) = *((int128_t *)&a2->field_0[0]);
    v0.to_nu_ansi_term_style(a2);
    v1 = 0;
    v17 = v5;
    v12 = v0;
    v13 = 0;
    v14 = v2;
    v15 = v3;
    v16 = v4;
    v8 = 0x8000000000000000;
    v9 = 1;
    v10 = 0;
    v11 = 9223372036854775810;
    v6.spec_to_string(&v8);
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v8);
    v6.truncate(v7 - 4);
    a0->field_10 = v7;
    *((void*)&a0->field_0) = v6;
    return v7;
}
