long long uu_tail::tail_file::he6a88cf1ecd2d2b4(char a0[77], unsigned long long a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, char a5[143])
{
    unsigned long long v0;  // [sp-0x180]
    struct_0 *v1;  // [sp-0x168]
    unsigned long long v2;  // [sp-0x160]
    struct_0 *v3;  // [sp-0x158], Other Possible Types: char *, unsigned long long
    unsigned long long v4;  // [sp-0x150]
    char v5;  // [bp-0x148]
    struct struct_0 **v6;  // [bp-0x138]
    unsigned long long v7;  // [sp-0x130]
    struct struct_0 **v8;  // [sp-0x120]
    char v9;  // [bp-0x11c]
    unsigned long v10;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x100]
    unsigned long v13;  // [sp-0xf0], Other Possible Types: unsigned long long
    int v14;  // [bp-0xe8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0xe0]
    int v16;  // [sp-0xd8], Other Possible Types: struct_0 *, struct struct_1 **, struct struct_0 **
    unsigned long long v17;  // [sp-0xd0]
    int v18;  // [bp-0xc8], Other Possible Types: void*
    char v19;  // [bp-0x88]
    unsigned long long v20;  // [sp-0x38]
    unsigned long v21;  // [bp+0x8]
    unsigned long v23;  // rdx
    struct_0 *v24;  // rbx
    struct_0 *v25;  // rbx
    unsigned long long v26;  // r12
    void* v27;  // rax
    unsigned long v28;  // rdx
    char v29[77];  // rcx
    char v30[77];  // r13
    unsigned long long v33;  // rcx
    unsigned long long v34;  // r13
    unsigned long long v35;  // rsi
    unsigned long v37;  // rdx
    unsigned long long v38;  // r12
    unsigned long long v39;  // rbx
    int v40;  // xmm0
    int v41;  // xmm1

    std::fs::metadata::h5a76b0b01e9dc15d(&v14, a3, a4);
    ::0x4ff7f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v14);
    if (*((int *)&v14) == 2)
    {
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        v1 = uucore::util_name::h60d842bf27b05e82();
        v2 = v23;
        v6 = &v1;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v14 = &g_5bb798;
        v15 = 2;
        v18 = 0;
        v16 = &v6;
        v17 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
        v1 = a2;
        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &g_5bb9c0;
        v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v14 = &g_5bb7b8;
        v15 = 3;
        v18 = 0;
        v16 = &v1;
        v17 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
        uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4);
        return v27;
    }
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
    {
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        v25 = a2;
        uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(a1, a2);
        ::0x4ff960::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&v6);
        v1 = uucore::util_name::h60d842bf27b05e82();
        v2 = v28;
        v8 = &v1;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v14 = &g_5bb798;
        v15 = 2;
        v18 = 0;
        v16 = &v8;
        v17 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
        v1 = v25;
        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v3 = &v6;
        v4 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v14 = &g_5bb7e8;
        v15 = 3;
        v18 = 0;
        v16 = &v1;
        v17 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
        v29 = a0;
        if (v29[76] != 2)
        {
            v33 = (v29[72] ? 0 : 24);
            *((int *)&v11) = (!v29[72] ? "; giving up on this nameNo such file or directory" : 1);
            v12 = v33;
            v1 = uucore::util_name::h60d842bf27b05e82();
            v2 = v28;
            v8 = &v1;
            v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v14 = &g_5bb798;
            v15 = 2;
            v18 = 0;
            v16 = &v8;
            v17 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
            v1 = v25;
            v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v3 = &v11;
            v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v14 = &g_5bb818;
            v15 = 3;
            v18 = 0;
            v16 = &v1;
            v17 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
        }
        v27 = 0;
        if (!((a5[142] & 1)) || !(a5[140]))
        {
            ::0x4ff380::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v6);
            return v27;
        }
        v27 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4, v25->field_8, v25->field_10, 0);
        if (v27)
        {
            ::0x4ff380::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v6);
            return v27;
        }
        ::0x4ff380::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v6);
    }
    else
    {
        v24 = a2;
        if (!(char)uu_tail::paths::Input::is_tailable::hb3d44ba0fa944896(a2))
        {
            v27 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4);
            return v27;
        }
        std::fs::metadata::h5a76b0b01e9dc15d(&v14, a3, a4);
        v26 = v14;
        if (v26 != 2)
            v20 = *((long long *)&v19);
        else
            ::0x4ff7f0::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&v14);
        v30 = a0;
        std::fs::File::open::hcbb28a04a46ba590(&v8, a3, a4);
        if ((int)v8)
        {
            v34 = v10;
            if ((char)::0x4ff090::std::io::error::Error::kind::hb2ff5fa058639b3d(v34) != 1)
            {
                v14 = v34;
                v27 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4, v24->field_8, v24->field_10, 0);
                if (v27)
                {
                    ::0x4ff390::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hadb3f722d4799b91(&v14);
                    return v27;
                }
                v27 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h5dd0adcf7fd88ca2(v34, v24);
                return v27;
            }
            v13 = v34;
            v27 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(a5, a3, a4, v24->field_8, v24->field_10, 0);
            if (v27)
            {
                ::0x4ff390::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hadb3f722d4799b91(&v13);
                return v27;
            }
            v11 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hf7330592f10927b5(v34, v24);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            v6 = uucore::util_name::h60d842bf27b05e82();
            v7 = v37;
            v1 = &v6;
            v2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v3 = &v11;
            v4 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4b13273068b31414;
            v14 = &g_5bb848;
            v15 = 3;
            v18 = 0;
            v16 = &v1;
            v17 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h07296d4a29ad6a0f(v11);
        }
        else
        {
            *((int *)&v6) = *((int *)&v9);
            uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(a1, v24);
            if (!v30[75] && (v35 = (v24->field_18 == 0x8000000000000000 ? v21 : 0), (char)_$LT$std..fs..File$u20$as$u20$uu_tail..paths..FileExtTail$GT$::is_seekable::hb604e85046bd781d(&v6, v35)))
            {
                if ((unsigned int)v26 == 2)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_5bb878); /* do not return */
                if (v20)
                {
                    uu_tail::bounded_tail::hc4147e75324d37d5(&v6, v30);
                    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&v1, 0x2000, (int)v6);
                    goto LABEL_500712;
                }
            }
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&v1, 0x2000, (int)v6);
            v27 = uu_tail::unbounded_tail::hc66e4f3b3653bc33(&v1, v30);
            if (v27)
            {
                ::0x4ff7a0::core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::ha419d633ac1ad1e3(&v1);
                return v27;
            }
LABEL_500712:
            v38 = v24->field_8;
            v39 = v24->field_10;
            v40 = *((int128_t *)&v1);
            v41 = *((int128_t *)&v3);
            *((int128_t *)&v18) = *((int128_t *)&v5);
            v16 = v41;
            v14 = v40;
            v0 = 1;
            v27 = uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(a5, a3, a4, v38, v39, ::0x4ffac0::alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&v14), &g_5bb890);
            if (v27)
                return v27;
        }
    }
    return 0;
}
