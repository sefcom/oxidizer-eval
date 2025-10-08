void fish::history::expand_and_detect_paths(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x118]
    unsigned long long v1;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    void* v3;  // [bp-0x100]
    unsigned long long v4;  // [bp-0xf8]
    void* v5;  // [bp-0xf0]
    unsigned long long v6[3];  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe0]
    unsigned long long v8;  // [bp-0xd8]
    struct_0 *v9;  // [bp-0xd0]
    unsigned long long v10;  // [bp-0xc8]
    unsigned long long v11[3];  // [bp-0xc0]
    unsigned long long v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    char v14;  // [bp-0xa8]
    int v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x78]
    char v17;  // [bp-0x70]
    char *v19;  // rdi

    fish::threads::assert_is_background_thread();
    v0.get_pwd_slash(a2);
    v17.background(a2, &g_14da060, 0x200);
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v14.into_iter(a1);
    v11.next(&v14);
    if (!((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63)))
    {
        v10 = v1;
        do
        {
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v15, v12, v13);
            v8 = v16;
            *((void*)v6) = v15;
            if (!(char)fish::expand::expand_one(&(char)v6, 5, &v17, 0) || !(char)fish::path::path_is_valid(v7, v8, v10, v2))
            {
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v6);
                v19 = &v11;
            }
            else
            {
                v3.push(&v11, &g_14da168);
                v19 = &(char)v6;
            }
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v19);
            v11.next(&v14);
        } while (v11 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v14);
    v9->field_10 = 0;
    v9->field_0 = *((int128_t *)&v3);
    core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v17);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
