long long uu_rm::handle_writable_directory(unsigned long long a0, unsigned long long a1, char a2, char a3, unsigned int a4)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    char *v2;  // [bp-0x90], Other Possible Types: unsigned long long
    int v3;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    char *v7;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x48]
    char *v11;  // [bp-0x40], Other Possible Types: unsigned long long
    char v12;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax

    v14 = a4;
    if (a2 == 2 || !(a2 & 1))
    {
        v0 = std::io::stdio::stdin();
        v15 = std::sys::pal::unix::io::is_terminal();
        v16 = v15 & 0xffffffffffffff00 | 1;
        if ((((char)v15 ^ 1) & a3 == 3))
            return v15 & 0xffffffffffffff00 | 1;
    }
    if (!((unsigned short)v14 & 0x100))
    {
        if ((char)v14 >= 0)
        {
            v9 = uucore::util_name();
            v10 = v17;
            v7 = &v9;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = 1;
            v10 = a0;
            v11 = a1;
            v12 = 1;
            v7 = &v9;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_57d840;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_57d780;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
            v18 = v0.flush();
            if (v18)
            {
                v19 = uu_rm::prompt_file::{{closure}}(v18);
                if (v19)
                {
                    v5 = v19;
                    v6 = &g_57d910;
                    uucore::mods::error::set_exit_code((unsigned int)v19.code());
                    v7 = uucore::util_name();
                    v8 = v17;
                    v9 = &v7;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = &v5;
                    v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_57d790;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
                    goto LABEL_4a3e90;
                }
            }
        }
        else
        {
            if (a3 != 2)
                return v16 & 0xffffffffffffff00 | 1;
            v9 = uucore::util_name();
            v10 = v21;
            v7 = &v9;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = 1;
            v10 = a0;
            v11 = a1;
            v12 = 1;
            v7 = &v9;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_57d840;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_57d780;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
            v22 = v0.flush();
            if (v22)
            {
                v23 = uu_rm::prompt_file::{{closure}}(v22);
                if (v23)
                {
                    v5 = v23;
                    v6 = &g_57d910;
                    uucore::mods::error::set_exit_code((unsigned int)v23.code());
                    v7 = uucore::util_name();
                    v8 = v21;
                    v9 = &v7;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = &v5;
                    v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_57d790;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
                    goto LABEL_4a3e90;
                }
            }
        }
    }
    else
    {
        if ((char)v14 >= 0)
        {
            v9 = uucore::util_name();
            v10 = v25;
            v7 = &v9;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = 1;
            v10 = a0;
            v11 = a1;
            v12 = 1;
            v7 = &v9;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_57d860;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_57d780;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
            v26 = v0.flush();
            if (v26)
            {
                v27 = uu_rm::prompt_file::{{closure}}(v26);
                if (v27)
                {
                    v5 = v27;
                    v6 = &g_57d910;
                    uucore::mods::error::set_exit_code((unsigned int)v27.code());
                    v7 = uucore::util_name();
                    v8 = v25;
                    v9 = &v7;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = &v5;
                    v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_57d790;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
                    goto LABEL_4a3e90;
                }
            }
        }
        else
        {
            if (a3 != 2)
                return v16 & 0xffffffffffffff00 | 1;
            v9 = uucore::util_name();
            v10 = v29;
            v7 = &v9;
            v8 = <&T as core::fmt::Display>::fmt;
            v0 = &g_57d6d0;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v9 = 1;
            v10 = a0;
            v11 = a1;
            v12 = 1;
            v7 = &v9;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v0 = &g_57d880;
            v1 = 2;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            std::io::stdio::_eprint(&v0);
            v0 = &g_57d780;
            v1 = 1;
            v2 = 8;
            *((uint128_t *)&v3) = 0;
            std::io::stdio::_eprint(&v0);
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
            v30 = v0.flush();
            if (v30)
            {
                v31 = uu_rm::prompt_file::{{closure}}(v30);
                if (v31)
                {
                    v5 = v31;
                    v6 = &g_57d910;
                    uucore::mods::error::set_exit_code((unsigned int)v31.code());
                    v7 = uucore::util_name();
                    v8 = v29;
                    v9 = &v7;
                    v10 = <&T as core::fmt::Display>::fmt;
                    v11 = &v5;
                    v12 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v0 = &g_57d790;
                    v1 = 3;
                    v4 = 0;
                    v2 = &v9;
                    v3 = 2;
                    std::io::stdio::_eprint(&v0);
LABEL_4a3e90:
                    ::0x49f290::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v5, &g_57d910);
                }
            }
        }
    }
    return uucore::read_yes();
}
