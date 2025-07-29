long long uu_comm::comm(void* a0, void* a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x39e]
    char v1;  // [bp-0x39d]
    unsigned int v2;  // [bp-0x39c]
    unsigned long long v3;  // [bp-0x398]
    unsigned long long v4;  // [bp-0x390]
    char v5;  // [bp-0x37f]
    unsigned int v6;  // [bp-0x37c]
    unsigned long long v7[3];  // [bp-0x378]
    unsigned long long v8;  // [bp-0x370]
    void* v9;  // [bp-0x368]
    unsigned long long v10[3];  // [bp-0x360]
    unsigned long long v11;  // [bp-0x358]
    void* v12;  // [sp-0x350]
    unsigned int v13;  // [bp-0x344]
    unsigned int v14;  // [bp-0x340]
    unsigned int v15;  // [bp-0x33c]
    char *v16;  // [bp-0x330], Other Possible Types: unsigned long long
    char *v17;  // [bp-0x330]
    unsigned long long v18;  // [bp-0x328]
    char *v19;  // [bp-0x320]
    unsigned long long v20;  // [bp-0x318]
    char *v21;  // [bp-0x310]
    unsigned long long v22;  // [bp-0x308]
    void* v23;  // [bp-0x2f8]
    unsigned long long v24;  // [bp-0x2f0]
    void* v25;  // [bp-0x2e8]
    char v26;  // [bp-0x2e0]
    char v27;  // [bp-0x2df]
    char v28;  // [bp-0x2de]
    void* v29;  // [bp-0x2d8]
    unsigned long long v30;  // [bp-0x2d0]
    void* v31;  // [bp-0x2c8]
    char v32;  // [bp-0x2c0]
    char v33;  // [bp-0x2bf]
    char v34;  // [bp-0x2be]
    char *v35;  // [bp-0x2b8]
    unsigned long long v37;  // [sp-0x2b0]
    char *v38;  // [bp-0x2a8]
    unsigned long long v39;  // [sp-0x2a0]
    char *v40;  // [bp-0x298]
    unsigned long long v41;  // [bp-0x290]
    char *v42;  // [bp-0x288]
    unsigned long long v43;  // [bp-0x280]
    char *v44;  // [bp-0x278]
    unsigned long long v45;  // [bp-0x270]
    char *v46;  // [bp-0x268]
    unsigned long long v47;  // [bp-0x260]
    char v48;  // [bp-0x258]
    unsigned long long v49;  // [bp-0x248]
    int v50;  // [bp-0x238], Other Possible Types: char, unsigned long long, unsigned long
    char v51;  // [bp-0x237]
    unsigned long long v52;  // [sp-0x230]
    char *v53;  // [sp-0x228], Other Possible Types: unsigned long long
    unsigned int v54;  // [sp-0x220], Other Possible Types: unsigned long long
    void* v55;  // [sp-0x218]
    unsigned long long v56;  // [bp-0x210]
    char v57;  // [bp-0x208]
    unsigned long long v58;  // [bp-0x200]
    unsigned long long v59;  // [bp-0x1f0]
    unsigned long long v60;  // [bp-0x1e0]
    unsigned long long v61;  // [bp-0x1d8]
    char v62;  // [bp-0x1d0]
    unsigned int v63;  // [bp-0x1cf]
    unsigned int v64;  // [bp-0x1cc]
    unsigned long long v65;  // [bp-0x1c8]
    unsigned long long v66;  // [bp-0x1b8]
    unsigned long long v67;  // [bp-0x1a8]
    unsigned long long v68;  // [bp-0x1a0]
    char v69;  // [bp-0x198]
    unsigned long long v70;  // [bp-0x190]
    unsigned long long v71;  // [bp-0x180]
    unsigned long long v72;  // [bp-0x170]
    unsigned long long v73;  // [bp-0x168]
    char v74;  // [bp-0x160]
    unsigned int v75;  // [bp-0x15f]
    unsigned int v76;  // [bp-0x15c]
    unsigned long long v77;  // [bp-0x158]
    unsigned long long v78;  // [bp-0x148]
    unsigned long long v79;  // [bp-0x138]
    unsigned long long v80;  // [bp-0x130]
    char v81;  // [bp-0x128]
    unsigned long long v82;  // [bp-0x120]
    unsigned long long v83;  // [bp-0x110]
    unsigned long long v84;  // [bp-0x100]
    unsigned long long v85;  // [bp-0xf8]
    char v86;  // [bp-0xf0]
    unsigned int v87;  // [bp-0xef]
    unsigned int v88;  // [bp-0xec]
    unsigned long long v89;  // [bp-0xe8]
    unsigned long long v90;  // [bp-0xd8]
    unsigned long long v91;  // [bp-0xc8]
    unsigned long long v92;  // [bp-0xc0]
    char v93;  // [bp-0xb8]
    unsigned long long v94;  // [bp-0xb0]
    unsigned long long v95;  // [bp-0xa0]
    unsigned long long v96;  // [bp-0x90]
    unsigned long long v97;  // [bp-0x88]
    char v98;  // [bp-0x80]
    unsigned long long v99;  // [bp-0x70]
    unsigned long long v100;  // [bp-0x68]
    char v101;  // [bp-0x60]
    char v102;  // [bp-0x48]
    unsigned long long v104;  // r15
    char v105;  // al
    unsigned long long v106;  // r12
    unsigned long long v107;  // rdx
    unsigned long long v108;  // r13
    unsigned long long v109;  // r15
    unsigned long long v110;  // rax
    unsigned long long v111[3];  // r14
    unsigned long long v112[3];  // rbx
    unsigned int v113;  // r12d
    char v114;  // cc_dep1
    char v116;  // cl
    char v117;  // al
    char *v118;  // rbp
    unsigned long long v119;  // rax
    unsigned long long v120;  // rax
    unsigned long long v121;  // rax
    unsigned long long v122;  // rax
    unsigned long long v123;  // rax
    void* v125;  // rbx

    v99 = a2;
    v100 = a3;
    v104 = (char)a4.get_flag("12comm-error-file-not-sorted", 1) ^ 1;
    v105 = a4.get_flag("2comm-error-file-not-sorted", 1);
    alloc::slice::<impl [T]>::repeat(&v101, a2, a3, v104);
    v106 = (v105 ^ 1) + v104;
    alloc::slice::<impl [T]>::repeat(&v50, a2, a3, v106);
    v49 = v53;
    memcpy(&v48, &v50, 16);
    *(v7) = 0;
    v8 = 1;
    v9 = 0;
    v3 = v107;
    v108 = a0.read_line(&v7);
    *(v10) = 0;
    v11 = 1;
    v12 = 0;
    v4 = v107;
    v109 = a1.read_line(&v10);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v0 = a4.get_flag("check-ordernocheck-orderFILE1FILE23totalzero-terminated", 11);
    v110 = a4.get_flag("nocheck-orderFILE1FILE23totalzero-terminated", 13);
    if (v0 || (char)v110)
    {
        v2 = (unsigned int)v110 & 0xffffff00 | (char)v110 ^ 1;
    }
    else
    {
        v50.try_get_one(a4, "FILE1FILE23totalzero-terminated", 5);
        v111 = "FILE1FILE23totalzero-terminated".unwrap(5, &v50);
        v50.try_get_one(a4, "FILE23totalzero-terminated", 5);
        v112 = "FILE23totalzero-terminated".unwrap(5, &v50);
        v2 = (unsigned int)v112 & 0xffffff00 | 1;
        if (!!v112 && !!v111)
        {
            v113 = (unsigned int)v106 & 0xffffff00 | 1;
            if (!(char)uucore::features::fs::paths_refer_to_same_file(v111, v112, 1))
            {
                uu_comm::are_files_identical(&v50, v111[1], v111[2], v112[1], v112[2]);
                v114 = v50;
                if (!v114)
                {
                    v113 = v51;
                    if (!(!v114))
                        goto LABEL_49ae27;
                }
                else
                {
                    v113 = 0;
                    if (v114)
                    {
LABEL_49ae27:
                        core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v114, v52);
                    }
                }
            }
            v2 = v113 & 0xffffff00;
        }
    }
    v23 = 0;
    v24 = 1;
    v25 = 0;
    v26 = 0;
    v27 = v0;
    v28 = 0;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    v32 = 1;
    v33 = v0;
    v34 = 0;
    v117 = !v109;
    if ((!v108 | !v109) == 1)
    {
        v118 = 0;
        do
        {
            if (!(v116 & 1))
            {
                if (!(v117 & 1))
                    core::panicking::panic("internal error: entered unreachable codedescription() is deprecated; use Display/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs", 40, &g_5721a8); /* do not return */
LABEL_49b088:
                if (((char)v2 & 1) && !v29.verify_order(v11, 0))
                    break;
                if (!(char)a4.get_flag("2comm-error-file-not-sorted", 1))
                {
                    v17.from_utf8_lossy(v11, 0);
                    v35 = &v101;
                    v37 = <alloc::string::String as core::fmt::Display>::fmt;
                    v38 = &v17;
                    v39 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v50 = &g_42fb30;
                    v52 = 2;
                    v55 = 0;
                    v53 = &v35;
                    v54 = 2;
                    std::io::stdio::_print(&v50);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v17);
                }
                v12 = 0;
                v123 = a1.read_line(&v10);
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v109, v4);
                v14 += 1;
                v4 = v107;
                v109 = v123;
                if (!(!v28))
                    goto LABEL_49b1d0;
                goto LABEL_49b1c6;
            }
            if ((v117 & 1))
            {
                if (!v3 && !v4)
                    break;
                if (!v3)
                    goto LABEL_49b088;
                if (!v4)
                    goto LABEL_49af50;
                v119 = v8.cmp(0, v11, 0);
                if ((char)v119)
                {
                    if ((unsigned int)v119 == 1)
                        goto LABEL_49b088;
                    goto LABEL_49af50;
                }
                else
                {
                    if (((char)v2 & 1) && (!v23.verify_order(v8, 0) || !v29.verify_order(v11, 0)))
                        break;
                    if (!(char)a4.get_flag("3totalzero-terminated", 1))
                    {
                        v17.from_utf8_lossy(v8, 0);
                        v35 = &v48;
                        v37 = <alloc::string::String as core::fmt::Display>::fmt;
                        v38 = &v17;
                        v39 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                        v50 = &g_42fb30;
                        v52 = 2;
                        v55 = 0;
                        v53 = &v35;
                        v54 = 2;
                        std::io::stdio::_print(&v50);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v17);
                    }
                    v9 = 0;
                    v12 = 0;
                    v120 = a0.read_line(&v7);
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v108, v3);
                    v3 = v107;
                    v121 = a1.read_line(&v10);
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v109, v4);
                    v15 += 1;
                    v4 = v107;
                    v109 = v121;
                    v3 = v107;
                    v108 = v120;
                    if (!(!v28))
                        goto LABEL_49b1d0;
LABEL_49b1c6:
                    v38 = v118;
                    if (!(v34 == 1))
                        continue;
LABEL_49b1d0:
                }
            }
            else
            {
LABEL_49af50:
                if (((char)v2 & 1) && !v23.verify_order(v8, 0))
                    break;
                if (!(char)a4.get_flag("12comm-error-file-not-sorted", 1))
                {
                    v35.from_utf8_lossy(v8, 0);
                    v17 = &v35;
                    v18 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                    v50 = &g_42e960;
                    v52 = 1;
                    v55 = 0;
                    v53 = &v17;
                    v54 = 1;
                    std::io::stdio::_print(&v50);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v35);
                }
                v9 = 0;
                v122 = a0.read_line(&v7);
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v108, v3);
                v13 += 1;
                v3 = v107;
                v108 = v122;
                if (!(!v28))
                    goto LABEL_49b1d0;
                goto LABEL_49b1c6;
            }
            v118 = v38;
            v117 = !v109;
            v116 = !v108;
        } while (!v108 || !v109);
    }
    else
    {
        v118 = 0;
    }
    if ((char)a4.get_flag("totalzero-terminated", 5))
    {
        *((int *)&v1) = ((char)a4.get_flag("zero-terminated", 15) ? 0 : 10);
        uucore::mods::locale::get_message(&v102, "comm-totalcomm-error-input-not-sorted-comm-error-is-directory(uutils coreutils) 0.1.0comm-aboutcomm-usagecomm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 10);
        v35 = &v13;
        v37 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v38 = &v99;
        v39 = <&T as core::fmt::Display>::fmt;
        v40 = &v14;
        v41 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v42 = &v15;
        v43 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
        v44 = &v102;
        v45 = <alloc::string::String as core::fmt::Display>::fmt;
        v46 = &v1;
        v47 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
        v50 = 2;
        v53 = 2;
        v55 = 0;
        v56 = 32;
        v57 = 3;
        v58 = 2;
        v59 = 2;
        v60 = 1;
        v61 = 32;
        v62 = 3;
        v63 = *((int *)&v5);
        v64 = v6;
        v65 = 2;
        v66 = 2;
        v67 = 2;
        v68 = 32;
        v69 = 3;
        v70 = 2;
        v71 = 2;
        v72 = 1;
        v73 = 32;
        v74 = 3;
        v76 = v6;
        v75 = *((int *)&v5);
        v77 = 2;
        v78 = 2;
        v79 = 3;
        v80 = 32;
        v81 = 3;
        v82 = 2;
        v83 = 2;
        v84 = 1;
        v85 = 32;
        v86 = 3;
        v88 = v6;
        v87 = *((int *)&v5);
        v89 = 2;
        v90 = 2;
        v91 = 4;
        v92 = 32;
        v93 = 3;
        v94 = 2;
        v95 = 2;
        v96 = 5;
        v97 = 32;
        v98 = 3;
        v16 = &g_42fca8;
        v18 = 8;
        v21 = &v50;
        v22 = 8;
        v19 = &v35;
        v20 = 6;
        std::io::stdio::_print(&v16);
        ::0x499880::core::ptr::drop_in_place<alloc::string::String>(&v102);
    }
    if (((char)v2 & 1) && (v28 || v34 == 1))
    {
        if (((char)v118 & 1))
        {
            uucore::mods::locale::get_message(&v35, "comm-error-input-not-sorted-comm-error-is-directory(uutils coreutils) 0.1.0comm-aboutcomm-usagecomm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 27);
            v16 = &v35;
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v50 = &g_572158;
            v52 = 2;
            v55 = 0;
            v53 = &v16;
            v54 = 1;
            std::io::stdio::_eprint(&v50);
            ::0x499880::core::ptr::drop_in_place<alloc::string::String>(&v35);
        }
        v35.to_vec(1, 0);
        v53 = v38;
        *((int128_t *)&v50) = *((int128_t *)&v35);
        v54 = 1;
        v125 = v50.new();
    }
    else
    {
        v125 = 0;
    }
    core::ptr::drop_in_place<uu_comm::OrderChecker>(&v29);
    core::ptr::drop_in_place<uu_comm::OrderChecker>(&v23);
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v109, v4);
    ::0x4998c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v10);
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v108, v3);
    ::0x4998c0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v7);
    ::0x499880::core::ptr::drop_in_place<alloc::string::String>(&v48);
    ::0x499880::core::ptr::drop_in_place<alloc::string::String>(&v101);
    return v125;
}
