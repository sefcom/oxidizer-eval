long long uu_tail::tail_file(char a0[77], unsigned long long a1, unsigned long long a2[4], unsigned long long a3, unsigned long long a4, char a5[143], void* a6)
{
    unsigned long long v0;  // [bp-0x180]
    unsigned long v1;  // [bp-0x180]
    int v2;  // [bp-0x178]
    char *v3;  // [bp-0x178], Other Possible Types: unsigned long long [4], unsigned long long
    unsigned long long v4;  // [bp-0x170]
    int v5;  // [bp-0x168]
    char *v6;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x160]
    char v8;  // [bp-0x158]
    char v9[77];  // [sp-0x138]
    unsigned long v10;  // [bp-0x138]
    char *v11;  // [bp-0x130]
    unsigned int v12;  // [bp-0x12c]
    unsigned long long v13;  // [bp-0x128]
    char *v14;  // [bp-0x120], Other Possible Types: unsigned long long, unsigned int
    unsigned int v15;  // [bp-0x120]
    unsigned long long v16;  // [bp-0x118]
    unsigned long long v17;  // [bp-0x108], Other Possible Types: char
    unsigned long v18;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long v19;  // [bp-0xf8]
    unsigned long long v20;  // [bp-0xf0]
    int v21;  // [bp-0xe8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v22;  // [bp-0xe0]
    int v23;  // [bp-0xd8], Other Possible Types: char *
    unsigned long long v24;  // [bp-0xd0]
    void* v25;  // [bp-0xc8]
    char v26;  // [bp-0x88]
    unsigned long long v27;  // rdx
    unsigned long v28;  // rcx
    unsigned long v29;  // r8
    char v30[143];  // 4096
    unsigned long long v31[4];  // r12
    unsigned long v32;  // r13
    unsigned long long v33;  // rdx
    void* v34;  // rax
    void* v35;  // rbx
    unsigned long long v36[4];  // r12
    unsigned long long v37;  // r13
    unsigned long long v38;  // rax
    char *v39;  // rdi
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rbx
    int v42;  // xmm0
    int v43;  // xmm0
    int v44;  // xmm0
    unsigned long long v45;  // rax

    v0 = a1;
    *((char *[77])&v9[0]) = a0;
    std::fs::metadata(&(char)v21, a3, a4);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v21);
    if (*((int *)&v21) == 2)
    {
        uucore::mods::error::set_exit_code(1);
        v3 = uucore::util_name();
        v4 = v27;
        v14 = &v3;
        v16 = <&T as core::fmt::Display>::fmt;
        v21 = &g_5734a0;
        v22 = 2;
        v25 = 0;
        v23 = &v14;
        v24 = 1;
        std::io::stdio::_eprint(&v21);
        v3[0] = a2;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &g_573800;
        v7 = <&T as core::fmt::Display>::fmt;
        v21 = &g_573980;
        v22 = 3;
        v25 = 0;
        v23 = &v3;
        v24 = 2;
        std::io::stdio::_eprint(&v21);
        v28 = a2[1];
        v29 = a2[2];
        v30 = a5;
    }
    else
    {
        if ((char)a3.is_dir(a4))
        {
            v17 = a4;
            uucore::mods::error::set_exit_code(1);
            v31 = a2;
            v32 = a2[1];
            v1 = a2[2];
            v0.print_input(v32, a2[2]);
            (char)v14.to_vec("Is a directoryerror reading '': : cannot follow end of this type of file", 14);
            v3 = uucore::util_name();
            v4 = v33;
            v11 = &v3;
            v13 = <&T as core::fmt::Display>::fmt;
            v21 = &g_5734a0;
            v22 = 2;
            v25 = 0;
            v23 = &(char)v11;
            v24 = 1;
            std::io::stdio::_eprint(&v21);
            v3[0] = v31;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v6 = &(char)v14;
            v7 = <alloc::string::String as core::fmt::Display>::fmt;
            v21 = &g_5739b0;
            v22 = 3;
            v25 = 0;
            v23 = &v3;
            v24 = 2;
            std::io::stdio::_eprint(&v21);
            if (v9[76] != 2)
            {
                *((int *)&v18) = (!v9[72] ? "; giving up on this name' for reading" : 1);
                *((int *)&v19) = (v9[72] ? 0 : 24);
                v3 = uucore::util_name();
                v4 = v33;
                v11 = &v3;
                v13 = <&T as core::fmt::Display>::fmt;
                v21 = &g_5734a0;
                v22 = 2;
                v25 = 0;
                v23 = &(char)v11;
                v24 = 1;
                std::io::stdio::_eprint(&v21);
                v3[0] = v31;
                v4 = <alloc::string::String as core::fmt::Display>::fmt;
                v6 = &v18;
                v7 = <&T as core::fmt::Display>::fmt;
                v21 = &g_5739e0;
                v22 = 3;
                v25 = 0;
                v23 = &v3;
                v24 = 2;
                std::io::stdio::_eprint(&v21);
            }
            if (a5[142] != 2 && (a5[142] & 1) && a5[140] == 1)
            {
                v34 = a5.add_bad_path(a3, v17, v32, v1, a5);
                if (!v34)
                {
                    core::ptr::drop_in_place<alloc::string::String>(&(char)v14);
                    return 0;
                }
                v35 = v34;
            }
            else
            {
                v35 = 0;
            }
            core::ptr::drop_in_place<alloc::string::String>(&(char)v14);
            return v35;
        }
        v36 = a2;
        if ((char)a2.is_tailable())
        {
            std::fs::metadata(&(char)v21, a3, a4);
            if (v21 == 2)
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(char)v21);
            else
                v17 = !*((long long *)&v26);
            (char)v11.open(a3, a4);
            if ((int)v11 == 1)
            {
                v37 = v13;
                if ((char)v37.kind() == 1)
                {
                    v20 = v37;
                    v38 = a5.add_bad_path(a3, a4, v36[1], v36[2], a5);
                    if (!v38)
                    {
                        v18 = v37.map_err_context(v36);
                        uucore::mods::error::set_exit_code(1);
                        v14 = uucore::util_name();
                        v16 = v40;
                        v3 = &v14;
                        v4 = <&T as core::fmt::Display>::fmt;
                        v6 = &v18;
                        v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v21 = &g_5736e0;
                        v22 = 3;
                        v25 = 0;
                        v23 = &v3;
                        v24 = 2;
                        std::io::stdio::_eprint(&v21);
                        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v18);
                        return 0;
                    }
                    v39 = &v20;
                }
                else
                {
                    v21 = v37;
                    v38 = a5.add_bad_path(a3, a4, v36[1], v36[2], a5);
                    if (!v38)
                        return v37.map_err_context(v36);
                    v39 = &v21;
                }
                v41 = v38;
                core::ptr::drop_in_place<std::io::error::Error>(v39);
            }
            else
            {
                v15 = v12;
                v10 = v36[1];
                v1 = v36[2];
                v0.print_input(v36[1], v36[2]);
                if (!v9[75])
                {
                    if (!((char)(((0 ^ v36[3]) & (0 ^ -(v36[3]))) >> 63)))
                        a6 = 0;
                    if ((char)v15.is_seekable(a6))
                    {
                        if ((unsigned int)v21 == 2)
                            core::option::unwrap_failed(&g_573a10); /* do not return */
                        if (!(v17 & 1))
                        {
                            uu_tail::bounded_tail(&v15, v9);
                            (char)v21.with_capacity(v14);
                            v42 = *((int128_t *)&v21);
                            memcpy(&v8, &(char)v25, 16);
                            *((int128_t *)&v5) = *((int128_t *)&v23);
                            v2 = v42;
LABEL_4a7203:
                            v44 = (int128_t)v2;
                            memcpy(&(char)v25, &v8, 16);
                            *((int128_t *)&v23) = (int128_t)v5;
                            v21 = v44;
                            v45 = a5.add_path(a3, a4, v10, v1, (char)v21.new(), &g_573408, 1);
LABEL_4a6c2d:
                            return v45;
                        }
                    }
                }
                (char)v21.with_capacity(v14);
                v43 = *((int128_t *)&v21);
                memcpy(&v8, &(char)v25, 16);
                *((int128_t *)&v5) = *((int128_t *)&v23);
                v2 = v43;
                v41 = (unsigned long long)uu_tail::unbounded_tail(&(char)v2, v9);
                if (!v41)
                    goto LABEL_4a7203;
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&(char)v2);
            }
            return v41;
        }
        v28 = v36[1];
        v29 = v36[2];
        v30 = a5;
    }
    v45 = v30.add_bad_path(a3, a4, v28, v29, a5);
    goto LABEL_4a6c2d;
}
