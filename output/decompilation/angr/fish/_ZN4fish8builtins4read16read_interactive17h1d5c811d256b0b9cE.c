long long fish::builtins::read::read_interactive(struct_0 *a0, struct_1 *a1, unsigned long a2, char a3, char a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9[3], unsigned int a10)
{
    int v0;  // [bp-0x108]
    unsigned long long v1;  // [bp-0xf8]
    char v2;  // [bp-0xe3]
    int v3;  // [bp-0xe0], Other Possible Types: char
    char v4;  // [bp-0xd0]
    int v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xa8]
    void* v7;  // [bp-0x98]
    int v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    int v11;  // [bp-0x88]
    int v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    void* v14;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x68]
    int v16;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned int v17;  // [bp-0x58]
    char v18;  // [bp-0x54]
    char v19;  // [bp-0x53]
    char v20;  // [bp-0x52]
    unsigned int v21;  // [bp-0x50]
    unsigned short v22;  // [bp-0x4f]
    char v23;  // [bp-0x4d]
    int v24;  // [bp-0x48], Other Possible Types: char
    char v25;  // [bp-0x38]
    unsigned long v26;  // r12
    unsigned long long v27;  // r12

    v7 = 0;
    v9 = 4;
    *((uint128_t *)&v11) = 0;
    v13 = 4;
    v14 = 0;
    v15 = 4;
    *((uint128_t *)&v16) = 0;
    v21 = 0;
    v18 = a3;
    v19 = a3;
    v20 = a3;
    v22 = 0x100;
    v23 = a4;
    v3.to_vec(a5, a6);
    v1 = *((long long *)&v4);
    v0 = v3;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
    v10 = v1;
    v8 = v0;
    v3.to_vec(a7, a8);
    v1 = *((long long *)&v4);
    v0 = v3;
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v11);
    v14 = v1;
    v12 = v0;
    v15 = "f";
    v16 = 9;
    v17 = a10;
    fish::reader::reader_push(a0, 4, 0, &v7);
    v26 = &a0->padding_0[64];
    if (a0->field_5b)
    {
        v0.scoped_mod(v26);
        if (!((char)(((0 ^ a9[0]) & (0 ^ -(a9[0]))) >> 63)))
            goto LABEL_1363ee6;
    }
    else
    {
        v2 = 3;
        if (!((char)(((0 ^ a9[0]) & (0 ^ -(a9[0]))) >> 63)))
        {
LABEL_1363ee6:
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v3, a9[1], a9[2]);
            v6 = *((long long *)&v4);
            v5 = v3;
            fish::reader::commandline_set_buffer(a0, &v5, 0, a3);
        }
    }
    v3.scoped_mod(v26);
    v5.new(fish::reader::reader_save_screen_state);
    v5.enable_tty_protocols();
    fish::reader::reader_readline(&v24, a0, a2);
    core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(&v5);
    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v3);
    v27 = *((long long *)&v24);
    if (v27 != 0x8000000000000000)
    {
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
        a1->field_10 = *((long long *)&v25);
        *((void*)&a1->field_0) = v24;
        if (a2 && a2 < a1->field_10)
            a1->field_10 = a2;
    }
    fish::reader::reader_pop();
    if (v27 != 0x8000000000000000)
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v24);
    core::ptr::drop_in_place<core::option::Option<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::complete::Completer::complete_from_args::{{closure}}>::{{closure}}>>>(&v0);
    return 4294967297;
}
