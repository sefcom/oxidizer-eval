long long uu_du::read_files_from(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x248], Other Possible Types: int, unsigned long long
    int v1;  // [bp-0x248]
    unsigned long long v2;  // [bp-0x240]
    char *v3;  // [bp-0x238]
    unsigned long long v4;  // [bp-0x230]
    char v5;  // [bp-0x228]
    char *v6;  // [bp-0x220]
    int v7;  // [bp-0x218], Other Possible Types: char
    unsigned long long v8;  // [bp-0x218]
    int v9;  // [bp-0x218]
    unsigned long long v10;  // [bp-0x210]
    char *v11;  // [bp-0x208]
    int v12;  // [bp-0x208]
    unsigned long long v13;  // [bp-0x200]
    int v14;  // [bp-0x1f8], Other Possible Types: void*
    char v15;  // [bp-0x1e8]
    char *v16;  // [bp-0x1d8]
    unsigned long long v17;  // [bp-0x1d0]
    char v18;  // [bp-0x1c8]
    struct_0 *v19;  // [bp-0x1b0]
    unsigned long long v20;  // [bp-0x1a8]
    unsigned long long v21;  // [bp-0x1a0]
    char v22;  // [bp-0x198]
    void* v23;  // [bp-0x190]
    int v24;  // [bp-0x188], Other Possible Types: char
    char *v25;  // [bp-0x178]
    void* v26;  // [bp-0x170]
    unsigned long long v27;  // [bp-0x168]
    void* v28;  // [bp-0x160]
    unsigned long long v29;  // [bp-0x158]
    unsigned long long v30;  // [bp-0x150]
    int v31;  // [bp-0x148], Other Possible Types: char *
    int v32;  // [bp-0x148]
    unsigned long long v33;  // [bp-0x140]
    char *v34;  // [bp-0x138]
    int v35;  // [bp-0x130]
    char *v36;  // [bp-0x120]
    char v37;  // [bp-0x110]
    unsigned int v38;  // [bp-0x110]
    unsigned int v39;  // [bp-0x10c]
    unsigned long long v40;  // [bp-0x108]
    unsigned long long v41;  // [bp-0x100]
    unsigned long long v42;  // [bp-0xf8]
    unsigned long v43;  // [bp-0xf0]
    int v44;  // [bp-0xe8]
    char *v45;  // [bp-0xd8]
    unsigned long long v46;  // [bp-0xc8]
    unsigned long long v47;  // [bp-0xc0]
    unsigned long long v48;  // [bp-0xb8]
    int v49;  // [bp-0xb0]
    char *v50;  // [bp-0xa0]
    char v51;  // [bp-0x98]
    char *v52;  // [bp-0x88]
    char v53;  // [bp-0x80]
    char *v54;  // [bp-0x70]
    char v55;  // [bp-0x68]
    char *v56;  // [bp-0x58]
    char v57;  // [bp-0x50]
    char *v58;  // [bp-0x40]
    unsigned long long v61;  // rax
    unsigned long long v62;  // rcx
    unsigned long long v63;  // rdx
    int v64;  // xmm1
    int v65;  // xmm2

    if ((char)a1.equal(a2, "-", 1))
    {
        v29 = a1;
        v30 = a2;
        v19 = a0;
        v7.with_capacity(0x2000, std::io::stdio::stdin());
        v61 = v7.new();
        v62 = &g_5e4d18;
        goto LABEL_4ddf5b;
    }
    v7.to_owned(a1, a2);
    v34 = v11;
    *((int128_t *)&v31) = *((int128_t *)&v7);
    if ((char)v33.is_dir(v11))
    {
        v7.to_vec("fileEDOMsizei128", 4);
        v3 = v11;
        *((int128_t *)&v0) = *((int128_t *)&v7);
        v7.to_vec(a1, a2);
        v54 = v11;
        memcpy(&v53, &v7, 16);
        memcpy(&v51, &v0, 16);
        v52 = v3;
        v7.from_iter(&v51);
        uucore::mods::locale::get_message_with_args(&(char)v0, "du-error-read-error-is-directory", 32, &v7);
        v11 = v3;
        *((int128_t *)&v7) = (int128_t)v0;
        *((long long *)&a0->padding_1[7]) = 40._new(v7.new(), &g_5e4cc0);
        goto LABEL_4de4d7;
    }
    else
    {
        v37.open(a1, a2);
        if (!v38)
        {
            v7.with_capacity(0x2000, v39);
            v61 = v7.new();
            v29 = a1;
            v30 = a2;
            v19 = a0;
            ::0x4d9e10::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v31);
            v62 = &g_5e4c18;
LABEL_4ddf5b:
            v26 = 0;
            v27 = 8;
            v28 = 0;
            v20 = v61;
            v21 = v62;
            v22 = 0;
            v23 = 0;
            while (true)
            {
                v38.next(&v20);
                if (v40 == 9223372036854775809)
                {
                    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(v20, v21);
                    v19->field_10 = v28;
                    *((int128_t *)&v19->field_0) = *((int128_t *)&v26);
                    return v19;
                }
                else if (v40 != 0x8000000000000000)
                {
                    v46 = v40;
                    v47 = v41;
                    v48 = v42;
                    if (v42)
                    {
                        v7.from_utf8_lossy(v41, v42);
                        v49.to_vec(v10, v11);
                        v3 = v50;
                        v1 = v49;
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v7);
                        if (v0.slice_contains(8, v28))
                        {
                            ::0x4d9e10::core::ptr::drop_in_place<std::path::PathBuf>(&v0);
                        }
                        else
                        {
                            v11 = v3;
                            *((int128_t *)&v7) = *((int128_t *)&v0);
                            v26.push(&v7);
                        }
                    }
                    else
                    {
                        v43 = *((long long *)&v38) + 1;
                        *((long long *)&v1) = uucore::util_name();
                        v2 = v63;
                        v31 = &(unsigned long long)v1;
                        v33 = <&T as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v9) = &g_5e4bf8;
                        v10 = 2;
                        v14 = 0;
                        v11 = &v31;
                        v13 = 1;
                        std::io::stdio::_eprint(&(unsigned long long)v9);
                        (unsigned long long)v1.to_vec("fileEDOMsizei128", 4);
                        v25 = v3;
                        memcpy(&v24, &v0, 16);
                        (unsigned long long)v1.to_vec(v29, v30);
                        v36 = v3;
                        *((int128_t *)&v35) = *((int128_t *)&v0);
                        v32 = v24;
                        v34 = v25;
                        v24.to_vec("lineshimname", 4);
                        v45 = v25;
                        memcpy(&v44, &v24, 16);
                        v24.spec_to_string(&v43);
                        v3 = v45;
                        v1 = v44;
                        v6 = v25;
                        memcpy(&v4, &v24, 16);
                        v64 = *((int128_t *)&v34);
                        v65 = (int128_t)(&v35)[8];
                        *((int128_t *)&v9) = (int128_t)v32;
                        v12 = v64;
                        v14 = v65;
                        memcpy(&v18, &v5, 16);
                        v16 = v3;
                        v17 = v4;
                        memcpy(&v15, &v0, 16);
                        (unsigned long long)v1.from_iter(&(unsigned long long)v9);
                        uucore::mods::locale::get_message_with_args(&v31, "du-error-invalid-zero-length-file-nameiso%Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %zatimectime(uutils coreutils) 0.1.0du-after-helpdu-help-print-helpalldu-help-allapparent-sizedu-help-apparent-sizedu-help-block-sizebbytesdu-help-bytesctotaldu-help-totaldmax-dept", 38, &(unsigned long long)v1);
                        v0 = &v31;
                        v2 = <alloc::string::String as core::fmt::Display>::fmt;
                        v8 = &g_5e49a0;
                        v10 = 2;
                        v14 = 0;
                        v11 = &v0;
                        v13 = 1;
                        std::io::stdio::_eprint(&v8);
                        ::0x4d9e40::core::ptr::drop_in_place<alloc::string::String>(&v31);
                        uucore::mods::error::set_exit_code(1);
                    }
                    ::0x4d9e70::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v46);
                }
                else
                {
                    *((unsigned long long *)&v19->padding_1[7]) = v41;
                    *((unsigned long long *)&v19->field_0) = 0x8000000000000000;
                    core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn std::io::BufRead>>>>(v20, v21);
                    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v26);
                    return v19;
                }
            }
        }
        if ((char)v40.kind())
        {
            *((unsigned long long *)&a0->padding_1[7]) = v40;
LABEL_4de4d7:
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
        }
        else
        {
            v20 = v40;
            v7.to_vec("fileEDOMsizei128", 4);
            v3 = v11;
            *((int128_t *)&v0) = *((int128_t *)&v7);
            v7.to_vec(a1, a2);
            v58 = v11;
            memcpy(&v57, &v7, 16);
            memcpy(&v55, &v0, 16);
            v56 = v3;
            v7.from_iter(&v55);
            uucore::mods::locale::get_message_with_args(&(char)v0, "du-error-cannot-open-for-readingdu-error-read-error-is-directory", 32, &v7);
            v11 = v3;
            *((int128_t *)&v7) = (int128_t)v0;
            *((long long *)&a0->padding_1[7]) = 40._new(v7.new(), &g_5e4cc0);
            *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
            ::0x4d9e50::core::ptr::drop_in_place<std::io::error::Error>(&v20);
        }
        ::0x4d9e10::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v31);
        return a0;
    }
}
