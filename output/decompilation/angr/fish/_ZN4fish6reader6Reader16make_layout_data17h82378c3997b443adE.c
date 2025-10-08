long long fish::reader::Reader::make_layout_data(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x120]
    int v2;  // [bp-0x118], Other Possible Types: char
    unsigned long long v3;  // [bp-0x108]
    void* v4;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0xf0]
    int v6;  // [bp-0xe8], Other Possible Types: void*
    int v7;  // [bp-0xd8]
    int v8;  // [bp-0xc8], Other Possible Types: void*
    unsigned long long v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    int v11;  // [bp-0xb8]
    int v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0xa8]
    unsigned long long v14;  // [bp-0xa0]
    int v15;  // [bp-0xa0]
    int v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x90]
    int v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x88]
    int v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x78]
    int v22;  // [bp-0x70]
    unsigned long long v23;  // [bp-0x70]
    int v24;  // [bp-0x68]
    unsigned long long v25;  // [bp-0x60]
    int v26;  // [bp-0x58]
    unsigned long long v27;  // [bp-0x58]
    unsigned long long v28;  // [bp-0x48]
    int v29;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long v30;  // [bp-0x38]
    unsigned int v31;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned int v32;  // [bp-0x28]
    char v34;  // bpl
    unsigned long v35;  // rax
    unsigned long long v36;  // rcx

    v8 = 0;
    v9 = 4;
    *((uint128_t *)&v11) = 0;
    v13 = 1;
    v4 = 0;
    v6 = 0;
    *((uint128_t *)&v15) = 0;
    v17 = 4;
    v31 = 0;
    *((uint128_t *)&v18) = 0;
    v21 = 4;
    *((uint128_t *)&v22) = 0;
    v25 = 4;
    *((uint128_t *)&v26) = 0;
    v28 = 4;
    *((uint128_t *)&v29) = 0;
    if ((a1->field_160 & 1) || a1->field_478)
        v34 = a1->field_271;
    else
        v34 = 0;
    v0.to_vec(a1->field_28, a1->field_30);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
    v10 = v3;
    v8 = v2;
    v0.to_vec(a1->field_40, a1->field_48);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(0, 1);
    v14 = v1;
    *((int128_t *)&v12) = *((int128_t *)&v0);
    if (v10 != v14)
        core::panicking::panic("assertion failed: result.text.len() == result.colors.len()", 58, &g_14dfee0); /* do not return */
    v35 = a1->field_78;
    v30 = a1->field_78;
    if (v34)
    {
        v35 = a1->field_160.cursor_position();
        v36 = 1;
    }
    else
    {
        v36 = 0;
    }
    v4 = v36;
    v5 = v35;
    *((uint128_t *)&v7) = a1->field_4a0;
    *((uint128_t *)&v6) = a1->field_490;
    v0.search_range_if_active(&a1->padding_518[208]);
    v32 = *((int *)&(&v0)[8]);
    v31 = v0;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a1->field_508, a1->field_510);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v15);
    v19 = v3;
    v16 = v2;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a1->field_718, a1->field_720);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v18);
    v23 = v3;
    v20 = v2;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a1->field_730, a1->field_738);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v22);
    v27 = v3;
    v24 = v2;
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a1->field_748, a1->field_750);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v26);
    v29 = v3;
    memcpy(&(char)v26, &v2, 16);
    return memcpy(a0, &v4, 216);
}
