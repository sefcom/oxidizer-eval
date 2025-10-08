long long uu_touch::touch_file(unsigned long long a0, unsigned long long a1, unsigned int a2, struct_0 *a3, unsigned long long a4, unsigned int a5, unsigned long long a6, unsigned int a7)
{
    void* v0;  // [bp-0x1a8]
    unsigned long long v1;  // [bp-0x1a0]
    int v2;  // [bp-0x198], Other Possible Types: unsigned long long
    int v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x190]
    char *v5;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    unsigned int v6;  // [bp-0x180], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x178]
    void* v8;  // [bp-0x160], Other Possible Types: char *, unsigned long long
    int v9;  // [bp-0x158], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x150], Other Possible Types: unsigned long long
    char v11;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x140]
    unsigned int v13;  // [bp-0x138], Other Possible Types: unsigned long long
    void* v14;  // [bp-0x130]
    char *v15;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x120]
    char v17;  // [bp-0x118]
    unsigned long long v18;  // [bp-0x110]
    unsigned long long v19;  // [bp-0x108]
    unsigned long v20;  // [bp-0x100]
    int v21;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v22;  // [bp-0xe8]
    unsigned long long v23;  // [bp-0xe0]
    unsigned long long v24;  // [bp-0xd8]
    unsigned long v26;  // r13
    unsigned long v27;  // rbp
    unsigned long long v28;  // rbp
    unsigned long long v30;  // rdx
    char v31;  // al
    unsigned int v32;  // edx
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    void* v35;  // rbx

    v13 = a4;
    if (a2)
    {
        v17.to_vec("-setting times of : No such file or directory: \n", 1);
        v26 = a3->field_31;
        if ((v26 & 255))
            goto LABEL_539fdf;
LABEL_539f9b:
        std::fs::metadata(&v23, a0, a1);
    }
    else
    {
        v23 = a0;
        v24 = a1;
        v17.spec_to_string(&v23);
        v26 = a3->field_31;
        if (!(v26 & 255))
            goto LABEL_539f9b;
LABEL_539fdf:
        std::fs::symlink_metadata(&v23, a0, a1);
    }
    v27 = a5;
    if ((int)v23 != 2)
    {
        v35 = uu_touch::update_times(a0, a1, a2, v26 & 4294967295, a3->field_33, v13, v27, a6, a7);
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        return v35;
    }
    v28 = v24;
    if ((char)v28.kind())
    {
        v35 = v28.map_err_context(v18, v19);
        core::ptr::drop_in_place<alloc::string::String>(&v17);
        return v35;
    }
    v12 = v28;
    if (!a3->field_30)
    {
        if ((char)v26)
        {
            v8 = 0;
            *((int128_t *)&v9) = *((int128_t *)&v18);
            v11 = 1;
            v15 = &v8;
            v16 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v3) = &g_679d28;
            v4 = 2;
            v7 = 0;
            v5 = &v15;
            v6 = 1;
            v21.map_or_else(&(unsigned long long)v3);
            v6 = 1;
            v3 = v21;
            v5 = v22;
            v35 = (unsigned long long)v3.new();
            if (a3->field_32)
            {
                core::ptr::drop_in_place<std::io::error::Error>(v12);
                core::ptr::drop_in_place<alloc::string::String>(&v17);
                return v35;
            }
            v0 = v35;
            v1 = &g_679e10;
            uucore::mods::error::set_exit_code((unsigned int)v35.code());
            v15 = uucore::util_name();
            v16 = v30;
            v8 = &v15;
            v9 = <&T as core::fmt::Display>::fmt;
            v10 = &v0;
            v11 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v2 = &g_679d48;
            v4 = 3;
            v7 = 0;
            v5 = &v8;
            v6 = 2;
            std::io::stdio::_eprint(&v2);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_679e10);
        }
        else
        {
            (char)v0.create(a0, a1);
            if ((int)v0 == 1)
            {
                v13 = (int)v0;
                (char)v2.from_utf8_lossy(a0, a1);
                v8 = v4;
                v9 = v5 + v4;
                v31 = core::str::validations::next_code_point_reverse(&v8);
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v2);
                if ((v32 != 0x110000 & v31) == 1 && v32 == 47)
                {
                    v8.to_vec("No such file or directorycannot touch failed to get attributes of invalid date ts format invalid date format ", 25);
                    v5 = v10;
                    *((int128_t *)&v2) = *((int128_t *)&v8);
                    v33 = (char)v2.new();
                    40._new(v33, &g_679d98).map_err_context(v18, v19);
                    core::ptr::drop_in_place<std::io::error::Error>(v1);
                }
                else
                {
                    v35 = v1.map_err_context(a0, a1);
                    if (!a3->field_32)
                    {
                        v14 = v35;
                        uucore::mods::error::set_exit_code(1);
                        v15 = uucore::util_name();
                        v16 = v34;
                        v8 = &v15;
                        v9 = <&T as core::fmt::Display>::fmt;
                        v10 = &v14;
                        v11 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v2 = &g_679d48;
                        v4 = 3;
                        v7 = 0;
                        v5 = &v8;
                        v6 = 2;
                        std::io::stdio::_eprint(&v2);
                        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v14);
                    }
                }
                core::ptr::drop_in_place<std::io::error::Error>(v12);
                core::ptr::drop_in_place<alloc::string::String>(&v17);
                return v35;
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&(char)v0);
                if (!(char)a3->field_18.eq() || !((char)(((0 ^ a3->field_0) & (0 ^ -(a3->field_0))) >> 63)))
                {
                    core::ptr::drop_in_place<std::io::error::Error>(v12);
                    v27 = v20;
                    uu_touch::update_times(a0, a1, a2, v26 & 4294967295, a3->field_33, v13, v27, a6, a7);
                    core::ptr::drop_in_place<alloc::string::String>(&v17);
                    return v35;
                }
            }
        }
    }
    core::ptr::drop_in_place<std::io::error::Error>(v12);
    core::ptr::drop_in_place<alloc::string::String>(&v17);
    return v35;
}
