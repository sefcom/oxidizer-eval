void bat::input::Input::open(void* a0, void* a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x3bc]
    int v1;  // [bp-0x3b8]
    unsigned long long v2;  // [bp-0x3b0]
    unsigned long v3;  // [bp-0x3a8]
    int v4;  // [bp-0x398], Other Possible Types: char
    unsigned int v5;  // [bp-0x394]
    unsigned long long v6;  // [bp-0x390]
    char v7;  // [bp-0x388]
    char v8;  // [bp-0x37b]
    unsigned short v9;  // [bp-0x37a]
    int v10;  // [sp-0x378], Other Possible Types: char *
    unsigned long long v11;  // [bp-0x378]
    unsigned int v12;  // [bp-0x370], Other Possible Types: unsigned long
    char v13;  // [bp-0x36b]
    int v14;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x348]
    int v16;  // [bp-0x338]
    int v17;  // [bp-0x328], Other Possible Types: unsigned long
    int v18;  // [bp-0x321]
    int v19;  // [bp-0x321]
    char v20;  // [bp-0x320], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x320]
    char v22;  // [bp-0x31c]
    int v23;  // [bp-0x318], Other Possible Types: char *, char
    unsigned long long v24;  // [bp-0x311]
    unsigned long long v25;  // [bp-0x310]
    char v26;  // [bp-0x30b]
    unsigned short v27;  // [bp-0x30a]
    void* v28;  // [bp-0x308], Other Possible Types: char
    char v29;  // [bp-0x2f0]
    int v30;  // [bp-0x278]
    char *v31;  // [bp-0x278]
    unsigned long v32;  // [bp-0x270]
    unsigned long long v33;  // [bp-0x268]
    int v34;  // [bp-0x258], Other Possible Types: char
    int v35;  // [bp-0x251]
    int v36;  // [bp-0x248]
    unsigned long long v37;  // [bp-0x241]
    char v38;  // [bp-0x23b]
    unsigned short v39;  // [bp-0x23a]
    char v40;  // [bp-0x238], Other Possible Types: unsigned long, unsigned long long
    int v41;  // [bp-0x230]
    char v42;  // [bp-0x228]
    int v43;  // [bp-0x220]
    char v44;  // [bp-0x218]
    int v45;  // [bp-0x210]
    int v46;  // [bp-0x200]
    int v47;  // [bp-0x1f0]
    int v48;  // [bp-0x1e0]
    int v49;  // [bp-0x1d0]
    int v50;  // [bp-0x1c0]
    char v51;  // [bp-0x1b0]
    int v52;  // [bp-0x1a0], Other Possible Types: char
    unsigned long long v53;  // [bp-0x190]
    int v54;  // [bp-0x188], Other Possible Types: char
    int v55;  // [bp-0x178]
    int v56;  // [bp-0x168]
    int v57;  // [bp-0x158]
    int v58;  // [bp-0x148]
    int v59;  // [bp-0x138], Other Possible Types: char
    int v60;  // [bp-0x128], Other Possible Types: char
    int v61;  // [bp-0x118], Other Possible Types: char
    unsigned long v62;  // [bp-0x108]
    int v63;  // [bp-0xf8]
    int v64;  // [bp-0xf8]
    int v66;  // [sp-0xe8]
    int v67;  // [bp-0xd8], Other Possible Types: unsigned long long, unsigned long
    int v68;  // [bp-0xc8]
    char v69;  // [bp-0xb8]
    int v70;  // [bp-0xa8]
    int v71;  // [bp-0x98], Other Possible Types: char
    unsigned long long v72;  // [bp-0x88]
    char v73;  // [bp-0x78]
    unsigned long long v74;  // [bp-0x68]
    int v75;  // [bp-0x60], Other Possible Types: char
    unsigned long long v76;  // [bp-0x50]
    int v77;  // [bp-0x48], Other Possible Types: char
    char v78;  // [bp-0x38]
    unsigned long v80;  // rbx
    unsigned long v81;  // rsi
    unsigned long long v82;  // rax
    unsigned long long v83;  // rax
    unsigned long long v84;  // rcx
    int v85;  // xmm0
    int v86;  // xmm1
    int v87;  // xmm2
    unsigned long long v88;  // rsi
    unsigned long v89;  // rdx
    int v90;  // xmm1
    int v91;  // xmm2
    unsigned long v92;  // rax
    unsigned long v93;  // rdx
    unsigned long long v94;  // rcx
    unsigned int v95;  // eax
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // rcx
    unsigned long v99;  // rsi
    unsigned long long v100;  // rax
    unsigned long long v101;  // rax
    unsigned long long v102;  // rcx
    unsigned long long v103;  // rax
    unsigned long long v104;  // rcx
    int v105;  // xmm0
    unsigned int v106;  // eax
    int v107;  // xmm1

    v80 = a1 + 40;
    v54.clone(v80);
    v81 = (long long)a1[136] + 9223372036854775809;
    if ((long long)a1[136] >= 9223372036854775810)
        v81 = 0;
    if (v81)
    {
        if (v81 != 1)
        {
            v88 = (long long)a1[144];
            v89 = (long long)a1[152];
            v14 = 9223372036854775809;
            v67 = (long long)a1[32];
            *((int128_t *)&v66) = (int128_t)a1[16];
            *((int128_t *)&v64) = *((int128_t *)a1);
            v34.with_capacity(v88, v89);
            (char)v17.new(&v34);
            memcpy(&v52, &v14, 16);
            v53 = v15;
            goto LABEL_83a17b;
        }
        if (!a2)
        {
LABEL_83a123:
            v14 = 0x8000000000000000;
            v67 = (long long)a1[32];
            *((int128_t *)&v66) = (int128_t)a1[16];
            *((int128_t *)&v64) = *((int128_t *)a1);
            (char)v17.new();
            v53 = v15;
            memcpy(&v52, &v14, 16);
LABEL_83a17b:
            memcpy(&v34, &(char)v64, 16);
            v36 = v66;
            v40 = v67;
            v90 = *((int128_t *)&v23);
            v91 = *((int128_t *)&v28);
            *((int128_t *)&v41) = (int128_t)v17;
            v43 = v90;
            v45 = v91;
            memcpy(&v51, &v59, 16);
            v50 = v58;
            v49 = v57;
            v48 = v56;
            v47 = v55;
            v46 = v54;
            ::libc.so.0::memcpy(a0, &v34, 208);
            core::ptr::drop_in_place<bat::input::InputDescription>(v80);
            return;
        }
        v34.try_from(0);
        if (v38 == 2)
        {
            bat::input::Input::open::{{closure}}(&v60, *((long long *)&v34), a2);
            v82 = *((long long *)&v61);
            v14 = v60;
            v15 = v82;
            v37 = v15;
            v35 = v60;
            *((char *)&a0[8]) = 11;
            v83 = (long long)(&v35)[8];
            v84 = v37;
            *((int128_t *)&a0[9]) = *((int128_t *)&v34);
            *((unsigned long long *)&a0[24]) = v83;
            *((unsigned long long *)&a0[32]) = v84;
            *((unsigned long long *)a0) = 2;
        }
        else
        {
            memcpy(&(char)v63, &(char)v35, 16);
            *((int128_t *)&v63) = *((int128_t *)&v34);
            *((int128_t *)&v14) = (int128_t)v63;
            memcpy(&(char)v14, &(char)v63, 16);
            *((int128_t *)&v17) = (int128_t)v14;
            memcpy(&(char)v17, &(char)v14, 16);
            v26 = v38;
            v27 = v39;
            if ((char)a2.surely_conflicts_with(&(char)v17))
            {
                v34.from("IO circle detected. The input from stdin is also an output. Aborting to avoid infinite loop.' is a directory.IO circle detected. The input from '' is also an output. Aborting to avoid infinite loop.", 92);
                *((int128_t *)&a0[72]) = *((int128_t *)&v44);
                v85 = *((int128_t *)&v34);
                v86 = (int128_t)v35;
                v87 = *((int128_t *)&v40);
                *((int128_t *)&a0[56]) = *((int128_t *)&v42);
                a0[40] = v87;
                a0[24] = v86;
                a0[8] = v85;
                *((unsigned long long *)a0) = 2;
                core::ptr::drop_in_place<clircle::Identifier>(&(char)v17);
            }
            else
            {
                core::ptr::drop_in_place<clircle::Identifier>(&(char)v17);
                goto LABEL_83a123;
            }
        }
        core::ptr::drop_in_place<bat::input::InputDescription>(&v54);
        core::ptr::drop_in_place<bat::input::InputMetadata>(a1);
        core::ptr::drop_in_place<bat::input::InputDescription>(v80);
        return;
    }
    v92 = a1 + 136;
    v93 = *((long long *)(v92 + 16));
    v3 = *((long long *)(v92 + 16));
    *((int128_t *)&v1) = *((int128_t *)v92);
    (char)v17.spec_to_string(v2, v93);
    v72 = *((long long *)&v23);
    memcpy(&v71, &(char)v17, 16);
    v70 = v59;
    memcpy(&v69, &v58, 16);
    v68 = v57;
    v67 = v56;
    v66 = v55;
    v63 = v54;
    v62 = (long long)a1[32];
    *((int128_t *)&v61) = (int128_t)a1[16];
    *((int128_t *)&v60) = *((int128_t *)a1);
    (char)v4.open(&(char)v1);
    if (*((int *)&v4) == 1)
    {
        bat::input::Input::open::{{closure}}(&(char)v17, v2, v3, v6);
        v94 = (long long)v17;
        v95 = *((int *)&v20);
        v11 = *((long long *)&v22);
        v12 = *((int *)&(&v23)[4]);
        if (v94 == 0x8000000000000000)
            goto LABEL_839df7;
        *((unsigned int *)&a0[36]) = v12;
        *((unsigned long long *)&a0[28]) = v11;
        *((char *)&a0[8]) = 11;
        *((unsigned long long *)&a0[16]) = v94;
        *((unsigned int *)&a0[24]) = v95;
        goto LABEL_839d6b;
    }
    v95 = v5;
LABEL_839df7:
    v0 = v95;
    (char)v17.metadata(&v0);
    if ((int)v17 == 2)
    {
        v96 = *((long long *)&v20);
        *((char *)&a0[8]) = 0;
        *((unsigned long long *)&a0[16]) = v96;
        goto LABEL_839f19;
    }
    else
    {
        if ((0xf000 & *((int *)&v29)) == 0x4000)
        {
            (char)v4.from_utf8_lossy(v2, v3);
            v10 = &(char)v4;
            v12 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
            v17 = &g_ace488;
            v21 = 2;
            v28 = 0;
            v23 = &v10;
            v25 = 1;
            v73.map_or_else(0, a2, &(char)v17);
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&(char)v4);
            memcpy(&(char)v17, &v73, 16);
            v24 = v74;
            *((char *)&a0[8]) = 11;
            v97 = *((long long *)((char *)&v21 + 7));
            v98 = v24;
            *((int128_t *)&a0[9]) = *((int128_t *)&v17);
            *((unsigned long long *)&a0[24]) = v97;
            *((unsigned long long *)&a0[32]) = v98;
LABEL_839f19:
            *((unsigned long long *)a0) = 2;
            core::ptr::drop_in_place<std::fs::File>(&v0);
        }
        else
        {
            v99 = v0;
            if (!a2)
            {
LABEL_83a40a:
                (char)v17.with_capacity(v99);
                (char)v14.new(&(char)v17);
                v52 = v71;
                v53 = v72;
                memcpy(&v34, &v60, 16);
                v36 = v61;
                v40 = v62;
                v107 = *((int128_t *)&v15);
                *((int128_t *)&v41) = (int128_t)v14;
                v43 = v107;
                v45 = v16;
                memcpy(&v51, &v59, 16);
                v50 = v58;
                v49 = v57;
                v48 = v56;
                v47 = v55;
                v46 = v54;
                ::libc.so.0::memcpy(a0, &v34, 208);
LABEL_839f51:
                core::ptr::drop_in_place<std::path::PathBuf>(&(char)v1);
                core::ptr::drop_in_place<bat::input::InputDescription>(v80);
                return;
            }
            (char)v17.try_from(v99);
            if (v26 == 2)
            {
                bat::input::Input::open::{{closure}}(&v77, v2, v3, (long long)v17);
                v100 = *((long long *)&v78);
                v30 = v77;
                v33 = v100;
                v24 = v33;
                v18 = v77;
                *((char *)&a0[8]) = 11;
                v101 = (long long)(&v18)[8];
                v102 = v24;
                *((int128_t *)&a0[9]) = (int128_t)v17;
                *((unsigned long long *)&a0[24]) = v101;
                *((unsigned long long *)&a0[32]) = v102;
LABEL_839d6b:
                *((unsigned long long *)a0) = 2;
            }
            else
            {
                memcpy(&v13, &v22, 16);
                *((int128_t *)&v10) = (int128_t)v17;
                *((int128_t *)&v30) = (int128_t)v10;
                memcpy(&(char)v30, &v10, 16);
                *((int128_t *)&v4) = (int128_t)v30;
                memcpy(&(char)v4, &(char)v30, 16);
                v8 = v26;
                v9 = v27;
                if ((char)a2.surely_conflicts_with(&(char)v4))
                {
                    v11.from_utf8_lossy(v2, v3);
                    v31 = &v11;
                    v32 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v17 = &g_ace4a8;
                    v20 = 2;
                    v28 = 0;
                    v23 = &v31;
                    v25 = 1;
                    v75.map_or_else(0, a2, &(char)v17);
                    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v11);
                    v19 = v75;
                    v24 = v76;
                    *((char *)&a0[8]) = 11;
                    v103 = (long long)(&v19)[8];
                    v104 = v24;
                    *((int128_t *)&a0[9]) = *((int128_t *)&v17);
                    *((unsigned long long *)&a0[24]) = v103;
                    *((unsigned long long *)&a0[32]) = v104;
                    *((unsigned long long *)a0) = 2;
                    core::ptr::drop_in_place<clircle::Identifier>(&(char)v4);
                }
                else
                {
                    v105 = (int128_t)v4;
                    *((int128_t *)&v23) = *((int128_t *)&v7);
                    v17 = v105;
                    v106 = (char)v17.into_inner();
                    v99 = v106;
                    if (v106 == -1)
                        core::option::expect_failed("The file was lost in the clircle::Identifier, this should not have happened...src/input.rsStdin: Error identifying file: ': : Error identifying file: ", 78, &g_ace4c8); /* do not return */
                    v0 = v99;
                    goto LABEL_83a40a;
                }
            }
        }
        core::ptr::drop_in_place<bat::input::InputMetadata>(&v60);
        core::ptr::drop_in_place<bat::input::InputDescription>(&(char)v63);
        core::ptr::drop_in_place<bat::input::OpenedInputKind>(&v71);
        goto LABEL_839f51;
    }
}
