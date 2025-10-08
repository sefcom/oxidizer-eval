long long uu_comm::comm(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x1d1]
    unsigned long long v1;  // [bp-0x1d0]
    unsigned long long v2;  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c0]
    unsigned int v4;  // [bp-0x1ac]
    unsigned long long v5[3];  // [bp-0x1a8]
    unsigned long long v6;  // [bp-0x1a0]
    void* v7;  // [sp-0x198]
    unsigned long long v8[3];  // [bp-0x190]
    unsigned long long v9;  // [bp-0x188]
    void* v10;  // [sp-0x180]
    unsigned int v11;  // [bp-0x174]
    unsigned int v12;  // [bp-0x170]
    unsigned int v13;  // [bp-0x16c]
    unsigned int v14;  // [bp-0x168]
    unsigned int v15;  // [bp-0x164]
    char v16;  // [bp-0x160]
    char *v17;  // [bp-0x160]
    unsigned long long v18;  // [bp-0x158]
    int v20;  // [bp-0x148], Other Possible Types: char *, char, unsigned long
    unsigned long long v21;  // [bp-0x140]
    char *v22;  // [sp-0x138], Other Possible Types: unsigned long long
    int v23;  // [bp-0x130], Other Possible Types: unsigned int
    unsigned long long v24;  // [bp-0x130]
    char *v25;  // [sp-0x128], Other Possible Types: void*
    unsigned long long v26;  // [bp-0x120]
    char *v27;  // [bp-0x118]
    unsigned long long v28;  // [bp-0x110]
    char *v29;  // [bp-0x108]
    unsigned long long v30;  // [bp-0x100]
    char *v31;  // [bp-0xf8]
    unsigned long long v33;  // [bp-0xf0]
    unsigned long long v34;  // [bp-0xf0]
    char *v35;  // [bp-0xe8]
    unsigned long long v37;  // [sp-0xe0]
    unsigned long long v38;  // [bp-0xd8]
    unsigned long long v39;  // [bp-0xd0]
    void* v40;  // [bp-0xc0]
    unsigned long long v41;  // [bp-0xb8]
    void* v42;  // [bp-0xb0]
    char v43;  // [bp-0xa8]
    char v44;  // [bp-0xa7]
    char v45;  // [bp-0xa6]
    void* v46;  // [bp-0xa0]
    unsigned long long v47;  // [bp-0x98]
    void* v48;  // [bp-0x90]
    char v49;  // [bp-0x88]
    char v50;  // [bp-0x87]
    char v51;  // [bp-0x86]
    int v52;  // [bp-0x78]
    unsigned long long v53;  // [bp-0x70]
    unsigned long long v54;  // [bp-0x68]
    char v55;  // [bp-0x58], Other Possible Types: unsigned long long
    char v56;  // [bp-0x50]
    unsigned long long v57;  // [bp-0x40]
    unsigned long long v58;  // [bp-0x38]
    unsigned long long v60;  // r15
    char v61;  // al
    unsigned long long v62;  // rdx
    unsigned long long v63;  // r15
    unsigned long v64;  // rbp
    unsigned int v65;  // ebp
    unsigned long long v66[3];  // r12
    unsigned long long v67[3];  // r14
    char v68;  // bpl
    char v70;  // cl
    char v71;  // al
    unsigned int v72;  // ebp
    void* v73;  // r13
    unsigned long long v74;  // rax
    unsigned long long v75;  // rax
    unsigned long long v76;  // rax
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    void* v81;  // r12

    v57 = a2;
    v58 = a3;
    v60 = (char)a4.get_flag("12", 1) ^ 1;
    v61 = a4.get_flag("2", 1);
    alloc::slice::<impl [T]>::repeat(&v55, a2, a3, v60);
    alloc::slice::<impl [T]>::repeat(&(char)v20, a2, a3, (v61 ^ 1) + v60);
    v54 = v22;
    *((int128_t *)&v52) = *((int128_t *)&v20);
    *(v5) = 0;
    v6 = 1;
    v7 = 0;
    v2 = v62;
    v63 = a0.read_line(&v5);
    *(v8) = 0;
    v9 = 1;
    v10 = 0;
    v1 = a1.read_line(&v8);
    v3 = v62;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v0 = a4.get_flag("check-ordernocheck-orderFILE1FILE23totalzero-terminated", 11);
    v64 = (unsigned int)a4.get_flag("nocheck-orderFILE1FILE23totalzero-terminated", 13);
    if (v0 || (char)v64)
    {
        v65 = (unsigned int)v64 & 0xffffff00 | (char)v64 ^ 1;
    }
    else
    {
        (char)v20.try_get_one(a4, "FILE1FILE23totalzero-terminated");
        v66 = "FILE1FILE23totalzero-terminated".unwrap(&(char)v20);
        (char)v20.try_get_one(a4, "FILE23totalzero-terminated");
        v67 = "FILE23totalzero-terminated".unwrap(&(char)v20);
        v65 = (unsigned int)v64 & 0xffffff00 | 1;
        if (!!v67 && !!v66)
        {
            if ((char)uucore::features::fs::paths_refer_to_same_file(v66, v67))
            {
                v65 = 0;
            }
            else
            {
                uu_comm::are_files_identical(&(char)v20, v66[1], v66[2], v67[1], v67[2]);
                v68 = v20;
                if (v68 == 1)
                    core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v68, v21);
                v65 = v68 | (&v20)[1] ^ 1;
            }
        }
    }
    v4 = v65;
    v40 = 0;
    v41 = 1;
    v42 = 0;
    v43 = 0;
    v44 = v0;
    v45 = 0;
    v46 = 0;
    v47 = 1;
    v48 = 0;
    v49 = 1;
    v50 = v0;
    v51 = 0;
    v71 = !v1;
    v72 = 0;
    if ((!v63 | !v1) == 1)
    {
        v12 = 0;
        v11 = 0;
        v73 = 0;
        do
        {
            if (!(v70 & 1))
            {
                if (!(v71 & 1))
                    core::panicking::panic("internal error: entered unreachable codemid > len/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/impls.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 40, &g_4e0cb8); /* do not return */
LABEL_457c18:
                if (((char)v4 & 1) && !(char)v46.verify_order(v9, 0))
                    break;
                if (!(char)a4.get_flag("2", 1))
                {
                    v17.from_utf8_lossy(v9, 0);
                    v31 = &v55;
                    v34 = <alloc::string::String as core::fmt::Display>::fmt;
                    v35 = &v17;
                    v37 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v20 = &g_4190e8;
                    v21 = 2;
                    v25 = 0;
                    v22 = &v31;
                    v24 = 2;
                    std::io::stdio::_print(&(char)v20);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v17, v18);
                }
                v10 = 0;
                v78 = a1.read_line(&v8);
                core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v1, v3);
                v72 += 1;
                v14 = v72;
                v3 = v62;
                v1 = v78;
                if (v45)
                    goto LABEL_457d70;
                goto LABEL_457d66;
            }
            if ((v71 & 1))
            {
                if (!v2 && !v3)
                    break;
                if (!v2)
                    goto LABEL_457c18;
                if (!v3)
                    goto LABEL_457ad0;
                v74 = v6.cmp(0, v9, 0);
                if ((char)v74)
                {
                    if ((unsigned int)v74 == 1)
                        goto LABEL_457c18;
                    goto LABEL_457ad0;
                }
                else
                {
                    if (((char)v4 & 1) && (!(char)v40.verify_order(v6, 0) || !(char)v46.verify_order(v9, 0)))
                        break;
                    if (!(char)a4.get_flag("3totalzero-terminated", 1))
                    {
                        v17.from_utf8_lossy(v6, 0);
                        v31 = &(char)v52;
                        v34 = <alloc::string::String as core::fmt::Display>::fmt;
                        v35 = &v17;
                        v37 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                        v20 = &g_4190e8;
                        v21 = 2;
                        v25 = 0;
                        v22 = &v31;
                        v24 = 2;
                        std::io::stdio::_print(&(char)v20);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v17, v18);
                    }
                    v7 = 0;
                    v10 = 0;
                    v75 = a0.read_line(&v5);
                    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v63, v2);
                    v2 = v62;
                    v76 = a1.read_line(&v8);
                    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v1, v3);
                    v11 += 1;
                    v15 = v11;
                    v3 = v62;
                    v1 = v76;
                    v2 = v62;
                    v63 = v75;
                    if (v45)
                        goto LABEL_457d70;
LABEL_457d66:
                    if (v51 != 1)
                        continue;
LABEL_457d70:
                    v79 = v73 & 4294967295;
                    v73 = (v0 ? v79 & 4294967295 : (((char)v79 & 1) ? (unsigned int)v79 : 1));
                }
            }
            else
            {
LABEL_457ad0:
                if (((char)v4 & 1) && !(char)v40.verify_order(v6, 0))
                    break;
                if (!(char)a4.get_flag("12", 1))
                {
                    v31.from_utf8_lossy(v6, 0);
                    v17 = &v31;
                    v18 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v20 = &g_417ef0;
                    v21 = 1;
                    v25 = 0;
                    v22 = &v17;
                    v24 = 1;
                    std::io::stdio::_print(&(char)v20);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v31, v34);
                }
                v7 = 0;
                v77 = a0.read_line(&v5);
                core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v63, v2);
                v12 += 1;
                v13 = v12;
                v2 = v62;
                v63 = v77;
                if (v45)
                    goto LABEL_457d70;
                goto LABEL_457d66;
            }
            v71 = !v1;
            v70 = !v63;
        } while (!v63 || !v1);
    }
    else
    {
        v73 = 0;
    }
    if ((char)a4.get_flag("totalzero-terminated", 5))
    {
        *((int *)&v16) = ((char)a4.get_flag("zero-terminated", 15) ? 0 : 10);
        v20 = &v13;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v22 = &v57;
        v24 = <&T as core::fmt::Display>::fmt;
        v25 = &v14;
        v26 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v27 = &v15;
        v28 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v29 = &v16;
        v30 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v31 = &g_4e0cd0;
        v33 = 7;
        v38 = &g_419288;
        v39 = 7;
        v35 = &(char)v20;
        v37 = 5;
        std::io::stdio::_print(&v31);
    }
    if (((char)v4 & 1) && (v45 || v51 == 1))
    {
        if (((char)v73 & 1))
        {
            v20 = &g_4e0ca8;
            v21 = 1;
            v22 = 8;
            *((uint128_t *)&v23) = 0;
            std::io::stdio::_eprint(&(char)v20);
        }
        v31.to_vec(1, 0);
        v22 = v35;
        *((int128_t *)&v20) = *((int128_t *)&v31);
        v23 = 1;
        v81 = (char)v20.new();
    }
    else
    {
        v81 = 0;
    }
    core::ptr::drop_in_place<alloc::string::String>(v46, 1);
    core::ptr::drop_in_place<alloc::string::String>(v40, 1);
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v1, v3);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8, v9);
    core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v63, v2);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v6);
    core::ptr::drop_in_place<alloc::string::String>((long long)v52, v53);
    core::ptr::drop_in_place<alloc::string::String>(v55, *((long long *)&v56));
    return v81;
}
