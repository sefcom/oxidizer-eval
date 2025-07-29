long long uu_head::uu_head(struct_1 *a0)
{
    char v0;  // [bp-0xe9]
    char v1;  // [bp-0xe8], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0xe4]
    char *v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    char *v6;  // [bp-0xc0], Other Possible Types: unsigned long long
    int v7;  // [bp-0xb8]
    int v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb8]
    void* v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa0]
    void* v12;  // [bp-0x98]
    char *v13;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x88]
    char *v15;  // [bp-0x80], Other Possible Types: struct struct_0[8]
    struct struct_0 v16[8];  // [bp-0x80]
    unsigned long long v17;  // [bp-0x78]
    char *v18;  // [bp-0x70]
    unsigned long long v19;  // [bp-0x68]
    unsigned long v20;  // [bp-0x60]
    unsigned long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    unsigned long long v23;  // [bp-0x48]
    unsigned int v24;  // [bp-0x40]
    unsigned int v25;  // [bp-0x3c]
    char v26;  // [bp-0x38]
    unsigned long long v28;  // rdx
    unsigned long long v29[3];  // rax
    unsigned int v30;  // ecx
    char *v31;  // rbx
    char *v32;  // r12
    unsigned long v33;  // r14
    unsigned long v34;  // rbx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // r14
    unsigned int v38;  // edi

    v22 = a0->padding_0[16].into_iter();
    v23 = v28;
    if (!v22.next())
        return 0;
    v0 = (a0->field_28 ^ 1) & 2 <= a0->field_20 | a0->field_29;
    v2 = v30 & 0xffffff00 | 1;
    v31 = &v15;
    v3 = &v1;
    while (true)
    {
        v32 = v31;
        v33 = v29[1];
        v34 = v29[2];
        if (!(char)v33.equal(v34, "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1))
        {
            v20 = v33;
            v21 = v34;
            v24.open(v33, v34);
            if (((char)v24 & 1))
            {
                v11 = *((long long *)&v26).map_err_context(v20, v21);
                uucore::mods::error::set_exit_code(1);
                v31 = v32;
                v13 = uucore::util_name();
                v14 = v28;
                v15 = &v13;
                v17 = <&T as core::fmt::Display>::fmt;
                v18 = &v11;
                v19 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v4 = &g_5934b8;
                v5 = 3;
                v10 = 0;
                v6 = v31;
                v9 = 2;
                std::io::stdio::_eprint(&v4);
                core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v11);
                v29 = v22.next();
                if (!v29)
                    break;
                continue;
            }
            else
            {
                v1 = v25;
                v31 = v32;
                if ((v0 & 1))
                {
                    if (!((char)v2 & 1))
                    {
                        v4 = &g_593488;
                        v5 = 1;
                        v6 = 8;
                        *((uint128_t *)&v7) = 0;
                        std::io::stdio::_print(&v4);
                    }
                    v15 = &v20;
                    v17 = <&T as core::fmt::Display>::fmt;
                    v4 = &g_5934e8;
                    v5 = 2;
                    v10 = 0;
                    v6 = v31;
                    v9 = 1;
                    std::io::stdio::_print(&v4);
                }
                if ((unsigned long long)uu_head::head_file(&v1, a0))
                {
                    v37 = v28.from();
                    core::ptr::drop_in_place<std::fs::File>(v38);
                    return v37;
                }
                v12 = 0;
                core::ptr::drop_in_place<std::fs::File>(v1);
            }
        }
        else
        {
            v31 = v32;
            if ((v0 & 1))
            {
                if (!((char)v2 & 1))
                {
                    v4 = &g_593488;
                    v5 = 1;
                    v6 = 8;
                    *((uint128_t *)&v8) = 0;
                    std::io::stdio::_print(&v4);
                }
                uucore::mods::locale::get_message(v31, "head-header-stdinhead-error-reading-filehead-error-parse-errorhead-error-bad-encodinghead-error-num-too-largehead-error-clap", 17);
                v13 = v31;
                v14 = <alloc::string::String as core::fmt::Display>::fmt;
                v4 = &g_593498;
                v5 = 2;
                v10 = 0;
                v6 = &v13;
                v9 = 1;
                std::io::stdio::_print(&v4);
                ::0x4ac0f0::core::ptr::drop_in_place<alloc::string::String>(v31);
            }
            std::io::stdio::stdin();
            *((unsigned int *)&v15[0]) = 0;
            v4 = v31.seek(2, 0);
            v5 = v28;
            if (v4)
            {
                v35 = (unsigned long long)uu_head::head_file(v31, a0);
            }
            else
            {
                if (!(!(unsigned long long)uu_head::head_file(v31, a0)))
                    goto LABEL_4aedce;
                v35 = v31.seek(0, v28 + v28);
            }
            if (v35)
            {
LABEL_4aedce:
                v37 = v36.from();
                ::0x4ac9f0::core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v4);
                core::ptr::drop_in_place<std::fs::File>(v16);
                return v37;
            }
            ::0x4ac9f0::core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v4);
            core::ptr::drop_in_place<std::fs::File>(v16);
            v12 = 0;
        }
        ::0x4aca60::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v12);
        v29 = v22.next();
        v2 = 0;
        if (!v29)
            break;
    }
    return 0;
}
