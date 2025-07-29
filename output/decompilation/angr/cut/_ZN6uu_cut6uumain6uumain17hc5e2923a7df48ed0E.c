long long uu_cut::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x4f9]
    char v1;  // [bp-0x4f8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x4f0]
    unsigned long long v3;  // [bp-0x4e8]
    unsigned long long v4;  // [bp-0x4e0]
    unsigned long long v5;  // [bp-0x4d8]
    char v6;  // [bp-0x4d0]
    char v7;  // [bp-0x4c8]
    char v8;  // [bp-0x4c0]
    char v9;  // [bp-0x4b8]
    unsigned long long v10;  // [bp-0x4b0]
    int v11;  // [bp-0x4a8], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [bp-0x4a0]
    int v13;  // [bp-0x4a0]
    int v14;  // [bp-0x498], Other Possible Types: char, unsigned long long
    unsigned long long v15;  // [bp-0x498]
    unsigned long long v16;  // [bp-0x490]
    int v17;  // [bp-0x488], Other Possible Types: char
    int v18;  // [bp-0x478], Other Possible Types: char
    int v19;  // [bp-0x468], Other Possible Types: char
    unsigned long long v20;  // [bp-0x450]
    unsigned long long v21;  // [bp-0x448]
    unsigned long long v22;  // [bp-0x440]
    unsigned long long v23;  // [bp-0x438]
    char v24;  // [bp-0x430]
    char v25;  // [bp-0x420]
    unsigned long long v26;  // [bp-0x410]
    int v27;  // [bp-0x408], Other Possible Types: char
    unsigned long long v28;  // [bp-0x400]
    unsigned long long v29;  // [sp-0x3f8]
    int v30;  // [bp-0x3e8]
    unsigned long long v31;  // [bp-0x3d8]
    void* v32;  // [bp-0x3d0]
    unsigned long long v33;  // [bp-0x3c8]
    int v34;  // [bp-0x3c0], Other Possible Types: char
    unsigned long long v35;  // [bp-0x3b0]
    char v36;  // [bp-0x3a8]
    unsigned long long v37;  // [bp-0x398]
    void* v38;  // [bp-0x390]
    unsigned long long v39;  // [bp-0x388]
    int v40;  // [bp-0x380]
    unsigned long long v41;  // [bp-0x370]
    unsigned long long v42;  // [bp-0x368]
    unsigned long long v43;  // [bp-0x360]
    unsigned long long v44;  // [bp-0x358]
    char v45;  // [bp-0x350]
    unsigned long long v46;  // [bp-0x340]
    unsigned long long v47;  // [bp-0x338]
    unsigned long long v48;  // [bp-0x330]
    int v49;  // [bp-0x328]
    int v50;  // [bp-0x318]
    unsigned long long v51;  // [bp-0x308]
    unsigned long long v52;  // [bp-0x300]
    int v53;  // [sp-0x2f8], Other Possible Types: char
    unsigned long long v54;  // [bp-0x2f0]
    int v55;  // [bp-0x2e8], Other Possible Types: unsigned long long
    int v56;  // [bp-0x2e8]
    int v57;  // [bp-0x2e0], Other Possible Types: char, unsigned int
    int v58;  // [bp-0x2d8], Other Possible Types: char
    unsigned long long v59;  // [bp-0x2d0]
    int v60;  // [sp-0x2c8], Other Possible Types: char
    unsigned long long v61;  // [bp-0x2b8]
    unsigned long long v64;  // rdx
    unsigned int v65;  // ebp
    char v67;  // r14b
    int v68;  // xmm0
    unsigned long long v69;  // r15
    unsigned long long v70[3];  // r12
    unsigned long long v71[3];  // r13
    unsigned long long v72[3];  // rax
    int v73;  // xmm1
    int v74;  // xmm2
    int v75;  // xmm3
    char v76;  // al
    int v77;  // xmm0
    char v78;  // bpl
    unsigned long long v79;  // rax
    unsigned long long v80;  // rcx
    uint128_t v81;  // xmm0
    void* v82;  // rdx
    void* v83;  // rbx
    int v84;  // xmm0
    int v85;  // xmm1

    v36.from_iter(a0.map(a1), v64, &g_58b9d0);
    uu_cut::uu_app(&(char)v53);
    v3 = v37;
    memcpy(&v1, &v36, 16);
    v11.try_get_matches_from(&(char)v53, &v1);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
        return v23.from();
    v26 = *((long long *)&v18);
    memcpy(&v25, &v17, 16);
    memcpy(&v24, &v14, 16);
    v22 = v11;
    v23 = v12;
    v65 = v22.get_flag("complementonly-delimitedzero-terminatedbytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-field", 10);
    v0 = v22.get_flag("only-delimitedzero-terminatedbytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleEr", 14);
    uu_cut::get_delimiters(&(char)v53, &v22);
    if ((v53 & 1))
    {
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v22);
        return v54;
    }
    v33 = v55;
    v20 = *((long long *)&v57);
    v21 = *((long long *)&v58);
    v67 = ((char)v22.get_flag("zero-terminatedbytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 15) ? 0 : 10);
    v27.indices_of(&v22, "bytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 5);
    v1.indices_of(&v22, "charactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 10);
    v11.indices_of(&v22, "fieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 6);
    v55 = v29;
    v68 = *((int128_t *)&v27);
    v53 = v68;
    *((int128_t *)&v57) = *((int128_t *)&v1);
    v59 = v3;
    memcpy(&v60, &v11, 16);
    v61 = v14;
    v40 = v68;
    memcpy(&v45, &v11, 16);
    v46 = v61;
    v41 = v55;
    v42 = (long long)v57;
    v43 = (long long)(&v57)[8];
    v44 = v59;
    v38 = 0;
    v39 = 3;
    v69 = v38.fold();
    (char)v53.try_get_one(&v22, "bytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 5);
    v70 = "bytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage".unwrap(5, &(char)v53);
    (char)v53.try_get_one(&v22, "charactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 10);
    v71 = "charactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage".unwrap(10, &(char)v53);
    (char)v53.try_get_one(&v22, "fieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 6);
    v72 = "fieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage".unwrap(6, &(char)v53);
    if (v69)
    {
        if (v69 != 1)
        {
            uucore::mods::locale::get_message(&(char)v53, "cut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 28);
            goto LABEL_4a7f28;
        }
        if (v70)
        {
            if (!(!v71 && !v72))
                goto LABEL_4a7f0e;
            uu_cut::list_to_ranges(&(char)v53, v70[1], v70[2], v65);
            if (!(!((char)v53 & 1)))
                goto LABEL_4a7e2c;
            v10 = (long long)v57;
            memcpy(&v8, &v54, 16);
            v2 = v20;
            v3 = v21;
            v6 = 2;
            v7 = v67;
            v1 = 0;
            if (!(0))
                goto LABEL_4a7e50;
        }
        else if (v71)
        {
            if (!(!v72))
                goto LABEL_4a7f0e;
            uu_cut::list_to_ranges(&(char)v53, v71[1], v71[2], v65);
            if (!(!((char)v53 & 1)))
                goto LABEL_4a7e2c;
            v10 = (long long)v57;
            memcpy(&v8, &v54, 16);
            v2 = v20;
            v3 = v21;
            v6 = 2;
            v7 = v67;
            v1 = 1;
            if (!(0))
                goto LABEL_4a7e50;
        }
        else
        {
            if (!v72)
                goto LABEL_4a7f0e;
            uu_cut::list_to_ranges(&(char)v53, v72[1], v72[2], v65);
            if ((v53 & 1))
            {
LABEL_4a7e2c:
                v4 = (long long)v57;
                memcpy(&v1, &v54, 16);
                v1 = 3;
                if (!(1))
                    goto LABEL_4a7e50;
            }
            else
            {
                v10 = (long long)v57;
                memcpy(&v8, &v54, 16);
                v2 = v20;
                v3 = v21;
                v4 = v54;
                v5 = v33;
                v6 = v0;
                v7 = v67;
                v1 = 2;
LABEL_4a7e50:
                v73 = *((int128_t *)&v3);
                v74 = *((int128_t *)&v5);
                v75 = *((int128_t *)&v7);
                *((int128_t *)&v53) = *((int128_t *)&v1);
                memcpy(&v61, &v9, 16);
                v60 = v75;
                v58 = v74;
                v56 = v73;
                if ((long long)v53)
                {
                    if (!((int)(long long)v53 == 1))
                        goto LABEL_4a82f0;
                    if (!(!(char)v22.contains_id("delimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 9)))
                        goto LABEL_4a81ca;
                    if (!(!(char)v22.get_flag("whitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 20)))
                        goto LABEL_4a826a;
                    v76 = v22.get_flag("only-delimitedzero-terminatedbytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleEr", 14);
                    goto LABEL_4a82a0;
                }
                if ((char)v22.contains_id("delimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 9))
                {
LABEL_4a81ca:
                    uucore::mods::locale::get_message(&v27, "cut-error-delimiter-only-with-fieldsUSimpleErrormessage", 36);
                    goto LABEL_4a82be;
                }
                if ((char)v22.get_flag("whitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 20))
                {
LABEL_4a826a:
                    uucore::mods::locale::get_message(&v27, "cut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 37);
                    goto LABEL_4a82be;
                }
                else
                {
                    v76 = v22.get_flag("only-delimitedzero-terminatedbytescharactersfieldscut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleEr", 14);
LABEL_4a82a0:
                    if (v76)
                    {
                        uucore::mods::locale::get_message(&v27, "cut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 41);
LABEL_4a82be:
                        v16 = v29;
                        *((int128_t *)&v13) = *((int128_t *)&v27);
                        v11 = 3;
                        core::ptr::drop_in_place<uu_cut::Mode>(&(char)v53);
                    }
                    else
                    {
LABEL_4a82f0:
                        memcpy(&v19, &v61, 16);
                        v77 = (int128_t)v53;
                        v73 = (int128_t)v56;
                        v18 = v60;
                        memcpy(&v17, &v58, 16);
                        v14 = v73;
                        v11 = v77;
                    }
                }
                v78 = 1;
                goto LABEL_4a7f9c;
            }
        }
    }
    else
    {
LABEL_4a7f0e:
        uucore::mods::locale::get_message(&(char)v53, "cut-error-missing-mode-argcut-error-multiple-mode-argsdelimiterwhitespace-delimitedcut-error-only-delimited-only-with-fieldscut-error-whitespace-only-with-fieldscut-error-delimiter-only-with-fieldsUSimpleErrormessage", 26);
LABEL_4a7f28:
        v4 = v55;
        memcpy(&v1, &(char)v53, 16);
        v1 = 3;
    }
    memcpy(&v19, &v9, 16);
    v73 = *((int128_t *)&v7);
    v18 = v73;
    memcpy(&v17, &v5, 16);
    v15 = v3;
    v16 = v4;
    v11 = v1;
    v12 = v2;
LABEL_4a7f9c:
    (char)v53.try_get_many(&v22, "filesizei128", 4);
    v27.unwrap("filesizei128", 4, &(char)v53);
    v79 = *((long long *)&v27);
    if (*((long long *)&v27))
    {
        v80 = v28;
        v73 = *((int128_t *)&v29);
        v81 = v30;
        v82 = v32;
    }
    else
    {
        v81 = 0;
        v80 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v79 = core::ops::function::FnOnce::call_once;
        v82 = 0;
    }
    v47 = v79;
    v48 = v80;
    v49 = v73;
    *((uint128_t *)&v50) = v81;
    v51 = v31;
    v52 = v82;
    v34.from_iter(&v47, &g_58b9d0);
    if ((int)v11 == 3)
    {
        v55 = v16;
        *((int128_t *)&v53) = *((int128_t *)&v12);
        v57 = 1;
        v83 = (char)v53.new();
        ::0x4a7200::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v34);
        if (!(!v78))
            goto LABEL_4a816d;
    }
    else
    {
        memcpy(&v61, &v19, 16);
        v84 = *((int128_t *)&v11);
        v85 = (int128_t)(&v13)[8];
        v60 = v18;
        v58 = v17;
        v55 = v85;
        v53 = v84;
        v29 = v35;
        v27 = v34;
        uu_cut::cut_files(&v27, &(char)v53);
        core::ptr::drop_in_place<uu_cut::Mode>(&(char)v53);
        v83 = 0;
        if (v78)
        {
LABEL_4a816d:
            if (v1 == 3)
                core::ptr::drop_in_place<core::result::Result<uu_cut::Mode,alloc::string::String>>(&v1);
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v22);
    return v83;
}
