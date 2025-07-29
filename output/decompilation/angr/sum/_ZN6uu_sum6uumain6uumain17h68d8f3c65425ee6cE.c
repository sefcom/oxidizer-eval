long long uu_sum::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned short v0;  // [bp-0x432]
    unsigned long long v1;  // [sp-0x430]
    unsigned long long v2;  // [bp-0x430]
    struct_2 *v3;  // [bp-0x428]
    unsigned long long v4;  // [sp-0x420]
    unsigned long long v5;  // [bp-0x418]
    char *v6;  // [sp-0x410], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [sp-0x408]
    char *v8;  // [bp-0x400], Other Possible Types: char
    unsigned long long v9;  // [sp-0x3f8]
    void* v10;  // [sp-0x3f0], Other Possible Types: char *, char
    unsigned long long v11;  // [sp-0x3e8]
    void* v12;  // [bp-0x3e0], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x3d8]
    char v14;  // [bp-0x3d0]
    unsigned long long v15;  // [bp-0x3d0]
    struct_0 *v16;  // [bp-0x3c8]
    unsigned long long v17;  // [bp-0x3c0]
    int v18;  // [bp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x3b0]
    struct_2 *v20;  // [bp-0x3a8]
    unsigned long long v21;  // [sp-0x3a0]
    char *v22;  // [sp-0x398]
    unsigned long long v23;  // [sp-0x390]
    unsigned long long v24;  // [bp-0x388]
    unsigned long long v25;  // [bp-0x380]
    unsigned long long v26[3];  // [bp-0x378]
    unsigned long long v27;  // [bp-0x370]
    unsigned long long v28;  // [bp-0x368]
    char v29;  // [bp-0x360]
    char v30;  // [bp-0x350]
    unsigned long long v31;  // [bp-0x340]
    char v32;  // [bp-0x338]
    char v33;  // [bp-0x328]
    char v34;  // [bp-0x318]
    char v35;  // [bp-0x308]
    char v36;  // [bp-0x2f8]
    unsigned long long v37;  // [bp-0x2f8]
    unsigned long long v38;  // [bp-0x2f0]
    unsigned long long v39;  // [bp-0x2e8]
    unsigned long long v40;  // [sp-0x2e0]
    void* v41;  // [sp-0x2d8]
    unsigned long long v42;  // [sp-0x2d0]
    char v43;  // [sp-0x2c8]
    unsigned long long v44;  // [sp-0x2c0]
    unsigned long long v45;  // [sp-0x2b0]
    unsigned long long v46;  // [sp-0x2a8]
    unsigned long long v47;  // [sp-0x2a0]
    unsigned long long v48;  // [sp-0x298]
    char v49;  // [sp-0x290]
    unsigned long long v50;  // [bp-0x288]
    unsigned long long v51;  // [bp-0x278]
    unsigned long long v52;  // [bp-0x268]
    unsigned long long v53;  // [bp-0x260]
    char v54;  // [bp-0x258]
    struct_0 *v56;  // rax
    struct_0 *v57;  // r15
    int v58;  // xmm0
    char v59;  // bpl
    char v60;  // r15b
    unsigned long long v61;  // rdx
    unsigned long long v62[3];  // rax
    unsigned long long v63;  // r13
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbx

    uu_sum::uu_app(&v36);
    v6.try_get_matches_from(&v36, a0, a1);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
        return v28.from();
    v31 = v12;
    memcpy(&v30, &v10, 16);
    memcpy(&v29, &v8, 16);
    v27 = v6;
    v28 = v7;
    v36.try_get_many(&v27, _ZN6uu_sum7options4FILE17hc8a7493e909df870E, g_5724d8);
    v6.unwrap(_ZN6uu_sum7options4FILE17hc8a7493e909df870E, g_5724d8, &v36);
    if (v6)
    {
        memcpy(&v35, &v12, 16);
        memcpy(&v34, &v10, 16);
        memcpy(&v33, &v8, 16);
        memcpy(&v32, &v6, 16);
        v14.from_iter(&v32, &g_572118);
    }
    else
    {
        v56 = ::0x495710::alloc::alloc::Global::alloc_impl();
        if (!v56)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v57 = v56;
        v36.to_vec();
        v20 = v39;
        v58 = *((int128_t *)&v36);
        v18 = v58;
        v57->field_10 = v39;
        *((void*)&v57->field_0) = v58;
        v15 = 1;
        v16 = v57;
        v17 = 1;
    }
    v59 = v27.get_flag(_ZN6uu_sum7options19SYSTEM_V_COMPATIBLE17h48f2fd41c9bfb00eE, g_5724f8);
    v60 = 1;
    if (v17 <= 1)
    {
        if (v17 == 1)
            v60 = (char)*((long long *)&v16->padding_1[7]).equal(v16->field_10, "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs ", 1) ^ 1;
        else
            core::panicking::panic_bounds_check(0, 0, &g_572130); /* do not return */
    }
    v24 = v14.into_iter();
    v25 = v61;
    if (v24.next())
    {
        v63 = (v59 ^ 1) * 4 + 1;
        do
        {
            v26[0] = v62;
            uu_sum::open(&v18, v62[1], v62[2]);
            if (((char)v18 & 1))
            {
                v1 = v19;
                v3 = v20;
                uucore::mods::error::set_exit_code(v3->field_58(v1));
                v4 = uucore::util_name();
                v5 = v61;
                v6 = &v4;
                v7 = <&T as core::fmt::Display>::fmt;
                v8 = &v1;
                v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v37 = &g_5720e8;
                v38 = 3;
                v41 = 0;
                v39 = &v6;
                v40 = 2;
                std::io::stdio::_eprint(&v37);
                ::0x495370::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v1, v3);
                continue;
            }
            if (v59)
                uu_sum::sysv_sum(&v36, v1, v3);
            else
                uu_sum::bsd_sum(&v36, v1, v3);
            if ((v36 & 1))
            {
                v68 = v38.from();
                ::0x4954b0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v14);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
                return v68;
            }
            v2 = v38;
            v0 = v39;
            v37 = std::io::stdio::stdout();
            v4 = v37.lock();
            if (v60)
            {
                v6 = &v0;
                v7 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v8 = &v2;
                v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v10 = &v26;
                v11 = <&T as core::fmt::Display>::fmt;
                v12 = 0;
                v13 = v63;
                v37 = 2;
                v39 = 1;
                v40 = 3;
                v41 = 0;
                v42 = 34359738400;
                v43 = 3;
                v44 = 2;
                v45 = 1;
                v46 = 3;
                v47 = 1;
                v48 = 32;
                v49 = 3;
                v50 = 2;
                v51 = 2;
                v52 = 2;
                v53 = 32;
                v54 = 3;
                v18 = &g_572178;
                v19 = 4;
                v22 = &v37;
                v23 = 3;
                v20 = &v6;
                v21 = 4;
                v65 = v4.write_fmt(&v18);
                if (v65)
                {
                    v67 = v65.from();
LABEL_4960ce:
                    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
                    ::0x4954b0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v14);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
                    return v68;
                }
            }
            else
            {
                v6 = &v0;
                v7 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
                v8 = &v2;
                v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v10 = 0;
                v11 = v63;
                v37 = 2;
                v39 = 1;
                v40 = 2;
                v41 = 0;
                v42 = 34359738400;
                v43 = 3;
                v44 = 2;
                v45 = 1;
                v46 = 2;
                v47 = 1;
                v48 = 32;
                v49 = 3;
                v18 = &g_572148;
                v19 = 3;
                v22 = &v37;
                v23 = 2;
                v20 = &v6;
                v21 = 3;
                v66 = v4.write_fmt(&v18);
                if (v66)
                {
                    v67 = v66.from();
                    goto LABEL_4960ce;
                }
            }
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v4);
            v62 = v24.next();
        } while (v62);
    }
    ::0x4954b0::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v14);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v27);
    return 0;
}
