long long uu_tail::tail_file::he6a88cf1ecd2d2b4(char a0[77], unsigned long long a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, char a5[143])
{
    char v0;  // [bp-0x180]
    char v1;  // [bp-0x178]
    struct_0 *v2;  // [sp-0x168]
    unsigned long long v3;  // [sp-0x160]
    struct_0 *v4;  // [sp-0x158], Other Possible Types: char *, unsigned long long
    unsigned long long v5;  // [sp-0x150]
    char v6;  // [bp-0x148]
    struct struct_0 **v7;  // [bp-0x138]
    unsigned long long v8;  // [sp-0x130]
    struct struct_0 **v9;  // [sp-0x120]
    char v10;  // [bp-0x11c]
    unsigned long v11;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x100]
    unsigned long v14;  // [sp-0xf0], Other Possible Types: unsigned long long
    int v15;  // [bp-0xe8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v16;  // [sp-0xe0]
    int v17;  // [sp-0xd8], Other Possible Types: struct_0 *, struct struct_1 **, struct struct_0 **
    unsigned long long v18;  // [sp-0xd0]
    int v19;  // [bp-0xc8], Other Possible Types: void*
    char v20;  // [bp-0x88]
    unsigned long long v21;  // [sp-0x38]
    unsigned long v22;  // [bp+0x8]
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rsi
    struct_0 *v26;  // rbx
    struct_0 *v27;  // rbx
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rcx
    unsigned long long v31;  // r8
    unsigned long long v32;  // r9
    unsigned long long v33;  // r12
    void* v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rsi
    char v37[77];  // rcx
    char v38[77];  // r13
    unsigned long long v41;  // rcx
    unsigned long long v42;  // r13
    unsigned long long v43;  // rsi
    unsigned long long v45;  // r12
    unsigned long long v46;  // rbx
    int v47;  // xmm0
    int v48;  // xmm1

    std::fs::metadata::h5a76b0b01e9dc15d(&v15, a3, a4);
    ::0x4ff7f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v15);
    if (*((int *)&v15) == 2)
    {
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
        v2 = uucore::util_name::h60d842bf27b05e82();
        v3 = v24;
        v7 = &v2;
        v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v15 = &g_5bb798;
        v16 = 2;
        v19 = 0;
        v17 = &v7;
        v18 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v25, v24);
        v2 = a2;
        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_5bb9c0;
        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v15 = &g_5bb7b8;
        v16 = 3;
        v19 = 0;
        v17 = &v2;
        v18 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v25, v24);
        uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4);
        return v34;
    }
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
    {
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
        v27 = a2;
        uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(a1, a2);
        ::0x4ff960::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v7);
        v2 = uucore::util_name::h60d842bf27b05e82();
        v3 = v35;
        v9 = &v2;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v15 = &g_5bb798;
        v16 = 2;
        v19 = 0;
        v17 = &v9;
        v18 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v36, v35);
        v2 = v27;
        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &v7;
        v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v15 = &g_5bb7e8;
        v16 = 3;
        v19 = 0;
        v17 = &v2;
        v18 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v36, v35);
        v37 = a0;
        if (v37[76] != 2)
        {
            v41 = (v37[72] ? 0 : 24);
            *((int *)&v12) = (!v37[72] ? "; giving up on this nameNo such file or directory" : 1);
            v13 = v41;
            v2 = uucore::util_name::h60d842bf27b05e82();
            v3 = v35;
            v9 = &v2;
            v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v15 = &g_5bb798;
            v16 = 2;
            v19 = 0;
            v17 = &v9;
            v18 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v36, v35);
            v2 = v27;
            v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v4 = &v12;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v15 = &g_5bb818;
            v16 = 3;
            v19 = 0;
            v17 = &v2;
            v18 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v36, v35);
        }
        v34 = 0;
        if (!((a5[142] & 1)) || !(a5[140]))
        {
            ::0x4ff380::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v7);
            return v34;
        }
        v34 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4, v27->field_8, v27->field_10, 0, *((long long *)&v1));
        if (v34)
        {
            ::0x4ff380::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v7);
            return v34;
        }
        ::0x4ff380::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v7);
    }
    else
    {
        v26 = a2;
        if (!(char)uu_tail::paths::Input::is_tailable::hb3d44ba0fa944896(a2, v28, v29, v30, v31, v32))
        {
            v34 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4);
            return v34;
        }
        std::fs::metadata::h5a76b0b01e9dc15d(&v15, a3, a4);
        v33 = v15;
        if (v33 != 2)
            v21 = *((long long *)&v20);
        else
            ::0x4ff7f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v15);
        v38 = a0;
        std::fs::File::open::hcbb28a04a46ba590(&v9, a3, a4);
        if ((int)v9)
        {
            v42 = v11;
            if ((char)::0x4ff090::std::io::error::Error::kind::hb2ff5fa058639b3d(v42) != 1)
            {
                v15 = v42;
                v34 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4, v26->field_8, v26->field_10, 0, *((long long *)&v1));
                if (v34)
                {
                    ::0x4ff390::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hadb3f722d4799b91(&v15);
                    return v34;
                }
                v34 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h5dd0adcf7fd88ca2(v42, v26);
                return v34;
            }
            v14 = v42;
            v34 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4, v26->field_8, v26->field_10, 0, *((long long *)&v1));
            if (v34)
            {
                ::0x4ff390::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hadb3f722d4799b91(&v14);
                return v34;
            }
            v12 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hf7330592f10927b5(v42, v26);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0();
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v29;
            v2 = &v7;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v4 = &v12;
            v5 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4b13273068b31414;
            v15 = &g_5bb848;
            v16 = 3;
            v19 = 0;
            v17 = &v2;
            v18 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v15, v28, v29);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h07296d4a29ad6a0f(v12);
        }
        else
        {
            *((int *)&v7) = *((int *)&v10);
            uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(a1, v26);
            if (!v38[75] && (v43 = (v26->field_18 == 0x8000000000000000 ? v22 : 0), (char)_$LT$std..fs..File$u20$as$u20$uu_tail..paths..FileExtTail$GT$::is_seekable::hb604e85046bd781d(&v7, v43)))
            {
                if ((unsigned int)v33 == 2)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                if (v21)
                {
                    uu_tail::bounded_tail::hc4147e75324d37d5(&v7, v38);
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&v2, 0x2000, (int)v7);
                    goto LABEL_500712;
                }
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&v2, 0x2000, (int)v7);
            v34 = uu_tail::unbounded_tail::hc66e4f3b3653bc33(&v2, v38, v29);
            if (v34)
            {
                ::0x4ff7a0::core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::ha419d633ac1ad1e3(&v2);
                return v34;
            }
LABEL_500712:
            v45 = v26->field_8;
            v46 = v26->field_10;
            v47 = *((int128_t *)&v2);
            v48 = *((int128_t *)&v4);
            *((int128_t *)&v19) = *((int128_t *)&v6);
            v17 = v48;
            v15 = v47;
            v34 = uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(a5, a3, a4, v45, v46, ::0x4ffac0::alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&v15), &g_5bb890, v0);
            if (v34)
                return v34;
        }
    }
    return 0;
}
