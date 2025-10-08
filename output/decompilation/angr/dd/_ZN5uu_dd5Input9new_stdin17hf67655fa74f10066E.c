long long uu_dd::Input::new_stdin(struct_2 *a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0xe8]
    unsigned int v1;  // [bp-0xe4]
    int v2;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v3;  // [bp-0xd0]
    int v4;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    unsigned int v7;  // [bp-0xb0]
    char v8;  // [bp-0x90]
    unsigned long long v10;  // rax
    struct_0 *v11;  // rdx
    unsigned long long v12;  // rdx

    uu_dd::Source::stdin_as_file();
    v0 = 1;
    if (a1->field_42)
    {
        (char)v4.metadata(&(char)v0);
        if (*((int *)&v4) == 2)
        {
            v10 = v5.from();
        }
        else
        {
            if ((0xf000 & *((int *)&v8)) == 0x4000)
                goto LABEL_48fa6b;
            v2.to_vec("setting flags for 'standard input': Not a directoryfailed to open 'standard output': cannot seek: Invalid argument\n", 51);
            v6 = v3;
            v4 = v2;
            v7 = 1;
            v10 = (char)v4.new();
            v11 = &g_53dcd8.padding_0[0];
        }
    }
    else
    {
LABEL_48fa6b:
        if (!a1->field_80 || !((char)(char)v0.skip(a1->field_80) & 1))
        {
            a0->field_8 = v0;
            a0->field_10 = a1;
            a0->field_0 = 0;
            return a0;
        }
        v10 = v12.from();
    }
    a0->field_8 = v10;
    a0->field_10 = v11;
    a0->field_0 = 1;
    core::ptr::drop_in_place<uu_dd::Source>(v1);
    return a0;
}
