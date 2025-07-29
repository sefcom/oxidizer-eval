long long uu_tail::tail_file(char a0[77], unsigned long long a1, unsigned long long a2[4], unsigned long long a3, unsigned long long a4, char a5[143], void* a6)
{
    int v0;  // [bp-0x1b8], Other Possible Types: char *
    int v1;  // [bp-0x1b8]
    int v2;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v3;  // [bp-0x1b8]
    unsigned long long v4;  // [bp-0x1b0]
    char *v5;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v6;  // [bp-0x1a8]
    int v7;  // [bp-0x1a0], Other Possible Types: unsigned long long
    int v8;  // [bp-0x198]
    char *v10;  // [bp-0x190], Other Possible Types: unsigned long long
    int v11;  // [sp-0x188], Other Possible Types: char *, unsigned int, unsigned long long
    char *v12;  // [bp-0x188], Other Possible Types: int, unsigned int
    unsigned long long v13;  // [bp-0x180]
    char *v14;  // [sp-0x178], Other Possible Types: unsigned long long
    int v15;  // [sp-0x170]
    char *v16;  // [bp-0x160]
    char v17[77];  // [bp-0x150]
    char v18;  // [bp-0x150]
    char v19;  // [bp-0x150]
    int v20;  // [bp-0x148], Other Possible Types: char, unsigned long long
    int v21;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x140]
    int v23;  // [bp-0x138], Other Possible Types: char *
    unsigned long long v24;  // [bp-0x130]
    int v25;  // [bp-0x128], Other Possible Types: void*
    int v26;  // [bp-0x118]
    char v27;  // [bp-0x110]
    char *v28;  // [bp-0x108]
    unsigned long long v29;  // [bp-0x100]
    unsigned long long v30;  // [bp-0xf8]
    char *v31;  // [bp-0xf0], Other Possible Types: unsigned long long
    int v32;  // [bp-0x98]
    unsigned int v33;  // [bp-0x94]
    unsigned long long v34;  // [bp-0x90]
    char *v35;  // [bp-0x88]
    unsigned long long v36;  // [bp-0x78]
    unsigned long long v37;  // [bp-0x70]
    unsigned int v38;  // [bp-0x68], Other Possible Types: unsigned long long
    char v39;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x58]
    void* v41;  // [bp-0x50]
    char v42;  // [bp-0x48], Other Possible Types: unsigned long long
    char v43;  // [bp-0x38]
    unsigned long long v44;  // rdx
    int v45;  // xmm0
    int v46;  // xmm3
    unsigned long long v47;  // rdx
    int v48;  // xmm0
    int v49;  // xmm2
    int v50;  // xmm3
    void* v51;  // r13
    int v52;  // xmm0
    int v53;  // xmm2
    int v54;  // xmm3
    unsigned long long v55;  // rax
    unsigned long long v56;  // r14
    unsigned long long v57;  // r12
    unsigned long long v58;  // rax
    char *v59;  // rdi
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rax
    int v62;  // xmm0
    int v63;  // xmm1
    int v64;  // xmm0
    int v65;  // xmm1
    unsigned long long v66;  // rax
    char v67;  // al
    unsigned long long v68;  // r12
    unsigned long long v69;  // r15
    int v70;  // xmm0

    *((char *[77])&v17[0]) = a0;
    std::fs::metadata(&v20, a3, a4);
    ::0x4f2ce0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v20);
    if (*((int *)&v20) == 2)
    {
        uucore::mods::error::set_exit_code(1);
        v2 = uucore::util_name();
        v4 = v44;
        v12 = &v2;
        v13 = <&T as core::fmt::Display>::fmt;
        v20 = &g_6363a8;
        v22 = 2;
        v25 = 0;
        v23 = &v12;
        v24 = 1;
        std::io::stdio::_eprint(&v20);
        v2.to_vec("filesizei128", 4);
        v20.clone(a2);
        v14 = v5;
        *((int128_t *)&v11) = *((int128_t *)&v2);
        *((int128_t *)&v15) = *((int128_t *)&v20);
        v16 = v23;
        v20.to_vec("errormsgtail-no-such-file-or-directorytail-error-cannot-open-no-such-filetail-is-a-directorytail-error-reading-filetail-giving-up-on-this-nametail-error-cannot-follow-file-type", 5);
        v35 = v23;
        *((int128_t *)&v32) = *((int128_t *)&v20);
        uucore::mods::locale::get_message(&v20, "tail-no-such-file-or-directorytail-error-cannot-open-no-such-filetail-is-a-directorytail-error-reading-filetail-giving-up-on-this-nametail-error-cannot-follow-file-type", 30);
        v5 = v35;
        v45 = (int128_t)v32;
        v0 = v45;
        *((int128_t *)&v7) = *((int128_t *)&v20);
        v10 = v23;
        v46 = (int128_t)(&v15)[8];
        memcpy(&v20, &v12, 16);
        *((int128_t *)&v23) = *((int128_t *)&v14);
        v25 = v46;
        v30 = (long long)(&v7)[8];
        v31 = v10;
        v28 = v5;
        v29 = v7;
        v26 = v45;
        v2.from_iter(&v20);
        uucore::mods::locale::get_message_with_args(&v12, "tail-error-cannot-open-no-such-filetail-is-a-directorytail-error-reading-filetail-giving-up-on-this-nametail-error-cannot-follow-file-type", 35, &v2);
        v0 = &v12;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v20 = &g_636410;
        v22 = 2;
        v25 = 0;
        v23 = &v0;
        v24 = 1;
        std::io::stdio::_eprint(&v20);
        ::0x4f28a0::core::ptr::drop_in_place<alloc::string::String>(&v12);
        return a5.add_bad_path(a3, a4, a2[1], a2[2], 0);
    }
    if ((char)a3.is_dir(a4))
    {
        uucore::mods::error::set_exit_code(1);
        a1.print_input(a2);
        uucore::mods::locale::get_message(&v42, "tail-is-a-directorytail-error-reading-filetail-giving-up-on-this-nametail-error-cannot-follow-file-type", 19);
        *((long long *)&v2) = uucore::util_name();
        v4 = v47;
        v11 = &(unsigned long long)v2;
        v13 = <&T as core::fmt::Display>::fmt;
        v20 = &g_6363a8;
        v22 = 2;
        v25 = 0;
        v23 = &v11;
        v24 = 1;
        std::io::stdio::_eprint(&v20);
        v20.to_vec("filesizei128", 4);
        v37 = a4;
        v5 = v23;
        *((int128_t *)&v2) = *((int128_t *)&v20);
        v20.clone(a2);
        v38 = a3;
        v14 = v5;
        *((int128_t *)&v12) = (int128_t)v2;
        *((int128_t *)&v15) = *((int128_t *)&v20);
        v16 = v23;
        v20.to_vec("errormsgtail-no-such-file-or-directorytail-error-cannot-open-no-such-filetail-is-a-directorytail-error-reading-filetail-giving-up-on-this-nametail-error-cannot-follow-file-type", 5);
        v5 = v23;
        v48 = *((int128_t *)&v20);
        *((int128_t *)&v7) = *((int128_t *)&v42);
        v10 = *((long long *)&v43);
        v49 = *((int128_t *)&v14);
        v50 = (int128_t)(&v15)[8];
        *((int128_t *)&v21) = (int128_t)v12;
        v23 = v49;
        v25 = v50;
        v26 = v48;
        v28 = v5;
        v29 = v7;
        v30 = (long long)(&v7)[8];
        v31 = v10;
        (unsigned long long)v2.from_iter(&v20);
        uucore::mods::locale::get_message_with_args(&v11, "tail-error-reading-filetail-giving-up-on-this-nametail-error-cannot-follow-file-type", 23, &(unsigned long long)v2);
        v0 = &v11;
        v4 = <alloc::string::String as core::fmt::Display>::fmt;
        v20 = &g_636410;
        v22 = 2;
        v25 = 0;
        v23 = &v0;
        v24 = 1;
        std::io::stdio::_eprint(&v20);
        ::0x4f28a0::core::ptr::drop_in_place<alloc::string::String>(&v11);
        if (v17[76] != 2)
        {
            v19 = v17[72];
            if (v17[72])
            {
                v36 = 1;
                v51 = 0;
            }
            else
            {
                uucore::mods::locale::get_message(&v39, "tail-giving-up-on-this-nametail-error-cannot-follow-file-type", 27);
                v36 = v40;
                v51 = v41;
            }
            v2 = uucore::util_name();
            v4 = v47;
            v11 = &v2;
            v13 = <&T as core::fmt::Display>::fmt;
            v21 = &g_6363a8;
            v22 = 2;
            v25 = 0;
            v23 = &v11;
            v24 = 1;
            std::io::stdio::_eprint(&v21);
            v21.to_vec("filesizei128", 4);
            v5 = v23;
            *((int128_t *)&v3) = *((int128_t *)&v21);
            v21.clone(a2);
            v14 = v5;
            *((int128_t *)&v12) = (int128_t)v3;
            *((int128_t *)&v15) = *((int128_t *)&v21);
            v16 = v23;
            v21.to_vec("msgtail-no-such-file-or-directorytail-error-cannot-open-no-such-filetail-is-a-directorytail-error-reading-filetail-giving-up-on-this-nametail-error-cannot-follow-file-type", 3);
            v35 = v23;
            memcpy(&(char)v32, &v21, 16);
            v21.to_vec(v36, v51);
            v10 = v23;
            *((int128_t *)&v7) = *((int128_t *)&v21);
            v5 = v35;
            v52 = (int128_t)v32;
            v0 = v52;
            v53 = *((int128_t *)&v14);
            v54 = (int128_t)(&v15)[8];
            *((int128_t *)&v20) = (int128_t)v12;
            v23 = v53;
            v25 = v54;
            v30 = (long long)(&v7)[8];
            v31 = v10;
            v28 = v5;
            v29 = v7;
            v26 = v52;
            v2.from_iter(&v21);
            uucore::mods::locale::get_message_with_args(&v11, "tail-error-cannot-follow-file-type", 34, &v2);
            v0 = &v11;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v20 = &g_636410;
            v22 = 2;
            v25 = 0;
            v23 = &v0;
            v24 = 1;
            std::io::stdio::_eprint(&v20);
            ::0x4f28a0::core::ptr::drop_in_place<alloc::string::String>(&v11);
            if (!v18)
                ::0x4f28a0::core::ptr::drop_in_place<alloc::string::String>(&v39);
        }
        if ((a5[142] & 1) && a5[140] == 1)
        {
            v55 = uu_tail::follow::watch::Observer::add_bad_path();
            goto LABEL_4f4100;
        }
    }
    else
    {
        (char)v32.open(a3, a4);
        v56 = a3;
        if ((int)v32)
        {
            v57 = v34;
            if ((char)v57.kind() == 1)
            {
                v42 = v57;
                v58 = a5.add_bad_path(v56, a4, a2[1], a2[2], 0);
                if (v58)
                {
                    ::0x4f28b0::core::ptr::drop_in_place<std::io::error::Error>(&v42);
                    return v58;
                }
                v39 = v57.map_err_context(a2);
                uucore::mods::error::set_exit_code(1);
                v11 = uucore::util_name();
                v13 = v60;
                v0 = &v11;
                v4 = <&T as core::fmt::Display>::fmt;
                v5 = &v39;
                v7 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v20 = &g_6363c8;
                v22 = 3;
                v25 = 0;
                v23 = &v0;
                v24 = 2;
                std::io::stdio::_eprint(&v20);
                core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v39);
            }
            else
            {
                v20 = v57;
                v58 = a5.add_bad_path(v56, a4, a2[1], a2[2], 0);
                if (!v58)
                    return v57.map_err_context(a2);
                v59 = &v20;
                ::0x4f28b0::core::ptr::drop_in_place<std::io::error::Error>(v59);
                return v58;
            }
        }
        else
        {
            v38 = (int)v32;
            v37 = a4;
            v11 = v33;
            v20.metadata(&v11);
            if (*((int *)&v20) == 2)
            {
                v61 = v22.from();
                ::0x4f2870::core::ptr::drop_in_place<std::fs::File>(v12);
                return v61;
            }
            v36 = v30;
            if (v31 - 1 >= 0x20000000)
                v31 = 0x200;
            a1.print_input(a2);
            if (!v17[75])
            {
                if (!((char)(((0 ^ a2[3]) & (0 ^ -(a2[3]))) >> 63)))
                    a6 = 0;
                if (!(char)v11.is_seekable(a6) || ((short)*((int *)&v27) & 0xf000) == 0x8000 && v36 <= v31)
                    goto LABEL_4f3e0d;
                uu_tail::bounded_tail(&v11, v17);
                v20.with_capacity(0x2000, v12);
                v62 = (int128_t)v20;
                v63 = (int128_t)v23;
                v8 = v25;
                v6 = v63;
                v1 = v62;
            }
            else
            {
LABEL_4f3e0d:
                v20.with_capacity(0x2000, v12);
                v64 = (int128_t)v20;
                v65 = (int128_t)v23;
                v8 = v25;
                v6 = v65;
                v1 = v64;
                v66 = (unsigned long long)uu_tail::unbounded_tail(&(char)v1, v17);
                if (v66)
                {
                    ::0x4f2c90::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&(char)v1);
                    return v66;
                }
            }
            v67 = a2.is_tailable();
            v68 = a2[1];
            v69 = a2[2];
            if (v67)
            {
                v70 = (int128_t)v1;
                memcpy(&v25, &(char)v8, 16);
                *((int128_t *)&v23) = (int128_t)v6;
                v20 = v70;
                v55 = a5.add_path(v56, v37, v68, v69, v20.new(), &g_636430, 1);
LABEL_4f4100:
                if (v55)
                    return v55;
            }
            else
            {
                v66 = a5.add_bad_path(v56, v37, v68, v69, 0);
                if (v66)
                {
                    ::0x4f2c90::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&(char)v1);
                    return v66;
                }
                ::0x4f2c90::core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&(char)v1);
            }
        }
    }
    return 0;
}
