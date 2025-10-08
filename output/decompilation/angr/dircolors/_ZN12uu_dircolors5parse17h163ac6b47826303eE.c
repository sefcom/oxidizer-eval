void uu_dircolors::parse(unsigned long a0, unsigned long long a1, char *a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x238]
    unsigned int v1;  // [bp-0x220]
    unsigned int v2;  // [bp-0x21c]
    unsigned long long v3;  // [bp-0x218]
    unsigned long long v4;  // [bp-0x210]
    unsigned long long v5;  // [bp-0x208]
    unsigned long long v6;  // [bp-0x200]
    void* v7;  // [bp-0x1f0]
    unsigned long long v8;  // [bp-0x1e8]
    unsigned long long v9;  // [bp-0x1e0]
    unsigned long long v10;  // [bp-0x1d8]
    void* v11;  // [bp-0x1d0]
    unsigned long long v12;  // [bp-0x1c8]
    unsigned long long v13;  // [bp-0x1c0]
    unsigned long long v14;  // [bp-0x1b8]
    unsigned long long v15;  // [bp-0x1b0]
    int v16;  // [bp-0x1a8], Other Possible Types: char
    unsigned long long v17;  // [bp-0x1a0]
    unsigned long long v18;  // [bp-0x198]
    unsigned long long v19;  // [bp-0x190]
    void* v20;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x178]
    unsigned long long v22;  // [bp-0x170]
    char v23;  // [bp-0x168]
    char v24;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v25;  // [bp-0x158]
    unsigned long long v26;  // [bp-0x150]
    unsigned long long v27;  // [bp-0x148]
    unsigned long long v28;  // [bp-0x140]
    char v29;  // [bp-0x138]
    unsigned long long v30;  // [bp-0x128]
    unsigned long long v31;  // [bp-0x128]
    unsigned long long v32;  // [bp-0x120]
    char *v33;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v34;  // [bp-0x110]
    void* v35;  // [bp-0x108]
    unsigned long long v36;  // [bp-0xf8]
    unsigned long long v37;  // [bp-0xf0]
    unsigned long long v38;  // [bp-0xe8]
    unsigned long long v39;  // [bp-0xd0]
    unsigned long long v40;  // [bp-0xc8]
    char v41;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v42;  // [bp-0xb8]
    unsigned long long v43;  // [bp-0xb0]
    unsigned long v44;  // [bp-0xa8]
    unsigned long long v45;  // [bp-0xa0]
    unsigned long long v46;  // [bp-0x98]
    unsigned long long v47;  // [bp-0x90]
    unsigned long long v48;  // [bp-0x88]
    unsigned long long v49;  // [bp-0x80]
    unsigned long long v50;  // [bp-0x78]
    unsigned long long v51;  // [bp-0x70]
    char *v52;  // [bp-0x68]
    unsigned long long v53;  // [bp-0x60]
    char *v54;  // [bp-0x58]
    unsigned long long v55;  // [bp-0x50]
    int v56;  // [bp-0x48], Other Possible Types: char
    void* v57;  // [bp-0x38]
    unsigned long long v58;  // [bp-0x30]
    unsigned long long v60;  // rbx
    char *v61;  // r14
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    unsigned long long v64;  // r14
    unsigned long long v65;  // r12
    unsigned long long v66;  // r14
    unsigned int v67;  // r12d
    unsigned long v68;  // rcx
    unsigned int v69;  // r14d
    unsigned long long v70;  // rdi
    unsigned long long v71;  // rsi

    v58 = v60;
    v36 = a1;
    v6 = 1790.with_capacity_in(1, 1, &g_4f4f30);
    v7 = 0;
    uu_dircolors::get_colors_format_strings(&v24, a2);
    v13 = v24;
    v12 = v27;
    v40 = *((long long *)&v29);
    v14 = v25;
    v15 = v28;
    v6.spec_extend(v25, v26 + v25);
    std::env::var(&v24, "TERM.jartruehurdDOOR.asf.flisockmainFILE.alz.mpgchar", 4);
    if ((int)v24 == 1)
    {
        uu_dircolors::parse::{{closure}}(&v16, v25, v26);
    }
    else
    {
        v18 = v27;
        *((int128_t *)&v16) = *((int128_t *)&v25);
    }
    std::env::var(&v24, "COLORTERM?*", 9);
    v61 = &v24;
    v41.unwrap_or_default(&v24);
    (char)v31.into_iter(a1);
    v24.enumerate(&(char)v31);
    v5 = v42;
    v19 = v43;
    v3 = v17;
    v39 = v18;
    v1 = 0;
    v2 = 0;
    while (true)
    {
        v48.next(v61);
        if (v49 == 0x8000000000000000)
        {
            v24.drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>();
            if (*(a2) == 2)
                v6.pop();
            v6.spec_extend(v15, v40 + v15);
            *((unsigned long long *)&v11[24]) = 0;
            *((int128_t *)&v11[8]) = *((int128_t *)&v6);
            *((unsigned long long *)v11) = 0;
            core::ptr::drop_in_place<alloc::string::String>(v41, v5);
            core::ptr::drop_in_place<alloc::string::String>((long long)v16, v3);
            core::ptr::drop_in_place<alloc::string::String>(v12, v15);
            v70 = v13;
            v71 = v14;
            break;
        }
        v44 = v48 + 1;
        v63 = v50.borrow(v51).purify(v62);
        if (!v62)
        {
            core::ptr::drop_in_place<alloc::string::String>(v49, v50);
            continue;
        }
        uu_dircolors::escape(&v45, v63, a2);
        v10 = v46;
        (char)v31.split_two(v46, v47);
        if (!v34)
        {
            v20 = 0;
            v21 = a3;
            v22 = a4;
            v23 = 0;
            v52 = &v20;
            v53 = <os_display::Quoted as core::fmt::Display>::fmt;
            v54 = &v44;
            v55 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v30 = &g_4f4f00;
            v32 = 3;
            v35 = 0;
            v33 = &v52;
            v34 = 2;
            v56.map_or_else(&v30);
            *((void* *)&v11[24]) = v57;
            v11[8] = v56;
            *((unsigned long long *)v11) = 1;
            goto LABEL_45ee85;
        }
        v9 = v34;
        v8 = v33;
        v38 = v31;
        v37 = v32;
        alloc::str::<impl str>::to_lowercase(&v20, v31, v32);
        v4 = v21;
        if ((char)v4.equal(v22, "term.jpgexec) = .zst.bmp.yuv.bakZero", 4))
        {
            v64 = v4 & 0xffffffffffffff00 | 1;
            if (!(char)v3.fnmatch(v39, v8, v9))
            {
                v64 = (!(v2 & 255) ? 3 : v2);
                goto LABEL_45ec95;
            }
        }
        if ((char)v4.equal(v22, "colorterm/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 9))
        {
            v65 = v8;
            v66 = v9;
            if ((char)v65.equal(v66, "?*", 2))
            {
                v64 = v66 & 0xffffffffffffff00 | 1;
                v67 = (unsigned int)v65 & 0xffffff00 | 1;
                if (!v19)
                    goto LABEL_45ec1a;
            }
            else
            {
                v64 = v66 & 0xffffffffffffff00 | 1;
                v67 = (unsigned int)v65 & 0xffffff00 | 1;
                if (!(char)v5.fnmatch(v19, v65, v66))
                {
LABEL_45ec1a:
                    v68 = v1;
                    v64 = (((char)v68 & 1) ? v69 : ((v2 & 255) ? v2 : 3));
                    v67 = v68;
                }
            }
        }
        else
        {
            v64 = ((char)v2 == 1 ? 2 : v2);
            if ((char)v64 == 3)
            {
                v64 = v64 & 0xffffffffffffff00 | 3;
            }
            else
            {
                v0 = v9;
                uu_dircolors::append_entry(&(char)v31, &v6, a2, v38, v37, v4, v22, (unsigned int)v8);
                if (v31 != 0x8000000000000000)
                {
                    *((int128_t *)&v11[16]) = *((int128_t *)&v32);
                    *((unsigned long long *)&v11[8]) = v31;
                    *((unsigned long long *)v11) = 1;
                    core::ptr::drop_in_place<alloc::string::String>(v20, v4);
LABEL_45ee85:
                    core::ptr::drop_in_place<alloc::string::String>(v45, v10);
                    core::ptr::drop_in_place<alloc::string::String>(v49, v50);
                    v24.drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>();
                    core::ptr::drop_in_place<alloc::string::String>(v41, v5);
                    core::ptr::drop_in_place<alloc::string::String>((long long)v16, v3);
                    core::ptr::drop_in_place<alloc::string::String>(v12, v15);
                    core::ptr::drop_in_place<alloc::string::String>(v13, v14);
                    v70 = v6;
                    v71 = v62;
                    break;
                }
            }
LABEL_45ec95:
            v67 = v1;
        }
        core::ptr::drop_in_place<alloc::string::String>(v20, v4);
        core::ptr::drop_in_place<alloc::string::String>(v45, v10);
        core::ptr::drop_in_place<alloc::string::String>(v49, v50);
        v1 = v67;
        v2 = v64;
        v61 = &v24;
    }
    core::ptr::drop_in_place<alloc::string::String>(v70, v71);
    return;
}
