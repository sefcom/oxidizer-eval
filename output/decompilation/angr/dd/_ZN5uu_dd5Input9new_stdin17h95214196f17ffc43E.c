long long uu_dd::Input::new_stdin(struct_1 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x130]
    unsigned int v1;  // [bp-0x12c]
    int v2;  // [bp-0x128], Other Possible Types: char
    unsigned long long v3;  // [bp-0x118]
    int v4;  // [bp-0x110], Other Possible Types: char
    unsigned long long v5;  // [bp-0x100]
    int v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xe8]
    char v8;  // [bp-0xe0]
    unsigned long long v9;  // [bp-0xd0]
    int v10;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v11;  // [bp-0xc0]
    unsigned long long v12;  // [bp-0xb8]
    unsigned int v13;  // [bp-0xb0]
    char v14;  // [bp-0x90]
    unsigned long long v16;  // rax
    struct_0 *v17;  // rdx
    unsigned long long v18;  // rdx

    uu_dd::Source::stdin_as_file();
    v0 = 1;
    if (a1->field_42)
    {
        v10.metadata(&(char)v0);
        if (*((int *)&v10) == 2)
        {
            v16 = v11.from();
        }
        else
        {
            if ((0xf000 & *((int *)&v14)) == 0x4000)
                goto LABEL_4cd86f;
            v10.to_vec("filesizeratei128", 4);
            v3 = v12;
            memcpy(&v2, &v10, 16);
            v10.to_vec("standard input\nsrc/uu/dd/src/dd.rs", 14);
            v9 = v12;
            memcpy(&v8, &v10, 16);
            v6 = v2;
            v7 = v3;
            v10.from_iter(&v6);
            uucore::mods::locale::get_message_with_args(&v4, "dd-error-not-directorychunk size must be non-zero", 22, &v10);
            v13 = 1;
            v10 = v4;
            v12 = v5;
            v16 = v10.new();
            v17 = &g_5deac0.padding_0[0];
        }
    }
    else
    {
LABEL_4cd86f:
        if (!(a1->field_80 && (char)v0.skip(a1->field_80)))
        {
            a0->field_8 = v0;
            a0->field_10 = a1;
            a0->field_0 = 0;
            return a0;
        }
        v16 = v18.from();
    }
    a0->field_8 = v16;
    a0->field_10 = v17;
    a0->field_0 = 1;
    core::ptr::drop_in_place<uu_dd::Source>(v1);
    return a0;
}
