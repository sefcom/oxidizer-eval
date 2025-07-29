void uu_dircolors::parse(unsigned long a0, unsigned long long a1, char *a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x2d8]
    unsigned int v1;  // [bp-0x2bc]
    unsigned int v2;  // [bp-0x2b8]
    unsigned int v3;  // [bp-0x2b4]
    unsigned long long v4;  // [bp-0x2b0]
    unsigned long long v5;  // [bp-0x2a8]
    struct_0 *v6;  // [bp-0x2a0]
    int v7;  // [bp-0x298], Other Possible Types: char
    unsigned long long v8;  // [bp-0x290]
    unsigned long long v9;  // [bp-0x288]
    int v10;  // [bp-0x280]
    unsigned long long v11;  // [bp-0x278]
    unsigned long long v12;  // [bp-0x270]
    unsigned long long v13;  // [bp-0x260]
    unsigned long long v14;  // [bp-0x258]
    void* v15;  // [bp-0x250]
    int v16;  // [bp-0x248], Other Possible Types: char
    unsigned long long v17;  // [bp-0x240]
    int v18;  // [bp-0x238], Other Possible Types: char
    char v19;  // [bp-0x230], Other Possible Types: unsigned long long
    int v20;  // [bp-0x228]
    unsigned long long v21;  // [bp-0x220]
    int v22;  // [bp-0x218]
    unsigned long long v23;  // [bp-0x208]
    unsigned long long v24;  // [bp-0x200]
    unsigned long long v25;  // [bp-0x1f8]
    unsigned long long v26;  // [bp-0x1f0]
    int v27;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v28;  // [bp-0x1d0]
    unsigned long long v29;  // [bp-0x1c8]
    int v30;  // [bp-0x1b8]
    unsigned long long v31;  // [bp-0x1b0]
    unsigned long long v32;  // [bp-0x1a8]
    char v33;  // [bp-0x198]
    unsigned long long v34;  // [bp-0x190]
    unsigned long long v35;  // [bp-0x188]
    char v36;  // [bp-0x180]
    unsigned long long v37;  // [bp-0x178]
    unsigned long long v38;  // [bp-0x170]
    int v39;  // [bp-0x168]
    unsigned long long v40;  // [bp-0x160]
    unsigned long long v41;  // [bp-0x158]
    unsigned long long v42;  // [bp-0x148]
    unsigned long long v43;  // [bp-0x140]
    unsigned long v44;  // [bp-0x128]
    unsigned long long v45;  // [bp-0x120]
    unsigned long long v46;  // [bp-0x118]
    unsigned long long v47;  // [bp-0x110]
    int v48;  // [bp-0x108], Other Possible Types: char
    unsigned long long v49;  // [bp-0xf8]
    int v50;  // [bp-0xe8]
    unsigned long long v51;  // [bp-0xe0]
    unsigned long long v52;  // [bp-0xd8]
    int v53;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v54;  // [bp-0x98]
    int v55;  // [bp-0x90]
    unsigned long long v56;  // [bp-0x80]
    void* v57;  // [bp-0x70]
    unsigned long long v58;  // [bp-0x68]
    unsigned long long v59;  // [bp-0x60]
    char v60;  // [bp-0x58]
    unsigned long long v61;  // [bp-0x50]
    int v62;  // [bp-0x48]
    char v63;  // [bp-0x38]
    unsigned long long v65;  // rdx
    unsigned int v66;  // eax
    char *v67;  // r14
    unsigned long long v68;  // rsi
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // r14
    unsigned long long v72;  // rbp
    unsigned int v73;  // r14d
    unsigned long v74;  // rcx
    unsigned long long v75;  // rax
    char *v76;  // rdi
    int v77;  // xmm2
    int v78;  // xmm3

    v13 = 1790.with_capacity_in(&g_589638);
    v14 = v65;
    v15 = 0;
    uu_dircolors::get_colors_format_strings(&v16, a2);
    v41 = *((long long *)&v18);
    *((int128_t *)&v39) = *((int128_t *)&v16);
    v35 = v21;
    memcpy(&v33, &v19, 16);
    v13.append_elements(v40, a2, &g_589650);
    std::env::var(&v16, "TERMLANG.jartrue.ftlhurdDOOR.asf.flisockmainFILE.alz.mpgchar", 4);
    v66 = (unsigned int)&v16;
    if ((v16 & 1))
    {
        v52 = v19;
        *((int128_t *)&v50) = *((int128_t *)&(&v16)[8]);
        v66 = (unsigned long long)uu_dircolors::parse::{{closure}}(&v27, &(char)v50);
    }
    else
    {
        v29 = v19;
        *((int128_t *)&v27) = *((int128_t *)&(&v16)[8]);
    }
    v2 = v66 & 0xffffff00 | 1;
    std::env::var(&v16, "COLORTERMdircolors-error-invalid-line-missing-token?*", 9);
    v36.unwrap_or_default(&v16);
    v16.into_iter(a1);
    (char)v50.enumerate(&v16);
    v1 = 0;
    v67 = &(char)v30;
    v3 = 0;
    while (true)
    {
        v61.next(&(char)v50);
        if ((long long)v62 == 0x8000000000000000)
        {
            (long long)v50.drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(v51);
            if (*(a2) == 2)
                v13.pop();
            v13.append_elements(v34, v35, &g_589650);
            v6[1].field_0 = 0;
            *((int128_t *)&v6->field_8) = *((int128_t *)&v13);
            v6->field_0 = 0;
            v2 = 0;
            ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v36);
            ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v27);
            ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v33);
            v76 = &(char)v39;
            break;
        }
        v68 = *((long long *)&v63);
        v32 = *((long long *)&v63);
        v30 = v62;
        v44 = v61 + 1;
        v69 = v31.borrow(v68).purify(v65);
        if (!v65)
        {
            ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(v67);
            continue;
        }
        uu_dircolors::escape(&v45, v69, a2);
        v16.split_two(v46, v47);
        v5 = v19;
        if (!v19)
        {
            v16.to_vec("fileEDOM.ogmsize.tzo.bz2.war.pgm.emf.wavsuidsgidi128", 4);
            v9 = *((long long *)&v18);
            *((int128_t *)&v7) = *((int128_t *)&v16);
            v57 = 0;
            v58 = a3;
            v59 = a4;
            v60 = 0;
            v16.spec_to_string(&v57);
            v54 = v9;
            memcpy(&v53, &v7, 16);
            *((int128_t *)&v55) = *((int128_t *)&v16);
            v56 = *((long long *)&v18);
            v16.to_vec("lineNone.rar.zooshim.arj.mng.mov.aac", 4);
            v49 = *((long long *)&v18);
            memcpy(&v48, &v16, 16);
            v16.spec_to_string(&v44);
            v9 = v49;
            v7 = v48;
            *((int128_t *)&v10) = *((int128_t *)&v16);
            v12 = *((long long *)&v18);
            v77 = *((int128_t *)&v54);
            v78 = (int128_t)(&v55)[8];
            v16 = v53;
            v18 = v77;
            v20 = v78;
            v25 = v11;
            v26 = v12;
            v23 = v9;
            v24 = (long long)v10;
            v22 = v48;
            (char)v7.from_iter(&v16);
            uucore::mods::locale::get_message_with_args(&v16, "dircolors-error-invalid-line-missing-token?*", 42, &(char)v7);
            v6[1].field_0 = (long long)v18;
            *((int128_t *)&v6->field_8) = (int128_t)v16;
            v6->field_0 = 1;
            goto LABEL_4a381a;
        }
        v4 = *((long long *)&v18);
        v43 = *((long long *)&v16);
        v42 = v17;
        alloc::str::<impl str>::to_lowercase(&v7, *((long long *)&v16), v17);
        v70 = v8;
        v71 = v9;
        if ((char)v70.equal(v71, "termTerm.jpgexec) = many.zst.bmp.yuv.bakZero", 4))
        {
            v72 = v70 & 0xffffffffffffff00 | 1;
            if (!(char)v28.fnmatch(v29, v4, v5))
            {
                v72 = (!(v3 & 255) ? 3 : v3);
                goto LABEL_4a34d2;
            }
        }
        if (!(char)v70.equal(v71, "colorterm/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs", 9))
        {
            v72 = ((char)v3 == 1 ? 2 : v3);
            if ((char)v72 == 3)
            {
                v72 = v72 & 0xffffffffffffff00 | 3;
            }
            else
            {
                v0 = v5;
                uu_dircolors::append_entry(&v16, &v13, a2, v43, v42, v8, v9, (unsigned int)v4);
                v75 = *((long long *)&v16);
                if (v75 != 0x8000000000000000)
                {
                    *((int128_t *)&v6->field_10) = *((int128_t *)&v17);
                    *((unsigned long long *)&v6->field_8) = v75;
                    v6->field_0 = 1;
                    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v7);
LABEL_4a381a:
                    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v45);
                    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v30);
                    (long long)v50.drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map_while::MapWhile<std::io::Lines<std::io::buffered::bufreader::BufReader<std::io::stdio::Stdin>>,core::result::Result<alloc::string::String,std::io::error::Error>::ok>>>(v51);
                    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v36);
                    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v27);
                    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v33);
                    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v39);
                    v76 = &v13;
                    break;
                }
            }
LABEL_4a34d2:
            v73 = v1;
        }
        else if ((char)v4.equal(v5, "?*", 2))
        {
            v72 = v70 & 0xffffffffffffff00 | 1;
            v73 = (unsigned int)v71 & 0xffffff00 | 1;
            if (!v38)
                goto LABEL_4a353f;
        }
        else
        {
            v72 = v70 & 0xffffffffffffff00 | 1;
            v73 = (unsigned int)v71 & 0xffffff00 | 1;
            if (!(char)v37.fnmatch(v38, v4, v5))
            {
LABEL_4a353f:
                v74 = v1;
                v72 = (((char)v74 & 1) ? vvar_365{reg 56} : ((v3 & 255) ? v3 : 3));
                v73 = v74;
            }
        }
        ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v7);
        ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&v45);
        ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(&(char)v30);
        v1 = v73;
        v3 = v72;
        v67 = &(char)v30;
    }
    ::0x4a56b0::core::ptr::drop_in_place<alloc::string::String>(v76);
    return;
}
