long long uu_link::uumain::h89baaae6e77bc5ff(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x3d8], Other Possible Types: char, unsigned long, unsigned long long
    struct struct_0 *v1[2];  // [sp-0x3d0], Other Possible Types: unsigned long, unsigned long long
    char v2;  // [bp-0x3c8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0x3c0]
    void* v4;  // [bp-0x3b8], Other Possible Types: char
    char v5;  // [bp-0x3a8]
    unsigned long v6;  // [sp-0x3a0], Other Possible Types: unsigned long long
    struct_2 *v7;  // [sp-0x398], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x390]
    unsigned long long v9;  // [sp-0x388]
    unsigned long v10;  // [sp-0x380], Other Possible Types: unsigned long long
    struct_2 *v11;  // [sp-0x378], Other Possible Types: unsigned long long
    int v12;  // [sp-0x370]
    int v13;  // [sp-0x360]
    unsigned long long v14;  // [sp-0x350]
    int v15;  // [bp-0x348], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x340]
    int v17;  // [sp-0x338]
    unsigned long long v18;  // [sp-0x328]
    unsigned long v19;  // [sp-0x318], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x310]
    char v21;  // [bp-0x308]
    char v22;  // [bp-0x2f8]
    char v23;  // [bp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v24;  // [sp-0x2e8], Other Possible Types: unsigned long long
    int v25;  // [bp-0x2e0], Other Possible Types: unsigned long long
    char v26;  // [bp-0x2d8], Other Possible Types: unsigned long long
    void* v27;  // [sp-0x2d0], Other Possible Types: unsigned long long
    unsigned long long v28;  // [sp-0x2c8], Other Possible Types: unsigned long
    unsigned long long v29;  // [sp-0x2c0]
    unsigned long v30;  // [sp-0x2b8], Other Possible Types: unsigned long long
    char v31;  // [bp-0x2b0]
    unsigned long long v35;  // r14
    unsigned long long v36;  // rdx
    unsigned long long v38;  // r8
    unsigned long long v41;  // rax
    struct struct_0 *v42[2];  // rax
    unsigned long long v43[3];  // rcx
    unsigned long long v46[3];  // rax
    struct_2 *v49;  // rdx
    struct_2 *v50;  // r15
    unsigned int v51;  // eax
    unsigned long long v52;  // rsi
    unsigned long long v53;  // r14
    struct_2 *v54;  // r15
    struct struct_1 **v55;  // rax

    uu_link::uu_app::h06e858de065a04db(&v23);
    clap_builder::builder::command::Command::try_get_matches_from::h0e9a3f8a6c79f1e9(&v0, &v23, a0, a1);
    if (v10 == 0x8000000000000000)
    {
        v35 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v11);
        if (!(!v35))
            goto LABEL_436e0f;
    }
    else
    {
        v14 = *((long long *)&v5);
        *((int128_t *)&v13) = *((int128_t *)&v4);
        *((int128_t *)&v12) = *((int128_t *)&v2);
        v10 = v0;
        v11 = v1;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h2e6685d0b725359b(&v23, &v10, v19, v20);
        v19 = _ZN7uu_link7options5FILES17ha669187e86af4039E;
        v20 = g_4d9fe8;
        if (v23)
        {
            v18 = v28;
            *((int128_t *)&v17) = *((int128_t *)&v26);
            *((int128_t *)&v15) = *((int128_t *)&v24);
            v6 = &v19;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55877fe62a9453ec;
            v8 = &v15;
            v9 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
            v0 = &g_4d78c0;
            v1 = 2;
            v4 = 0;
            v2 = &v6;
            v3 = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
        }
        v36 = v24;
        if (!v36)
        {
            v36 = core::ops::function::FnOnce::call_once::hc06a5308bbf7a1cc;
            v38 = 0;
        }
        else
        {
            v38 = *((long long *)&v31);
        }
        v23 = v36;
        v24 = "&";
        *((int128_t *)&v25) = *((int128_t *)&v26);
        v27 = v28;
        v28 = 0;
        v29 = v30;
        v30 = v38;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h8844b05f749ba1d2(&v0, &v23);
        v41 = v2;
        if (!v41)
        {
            goto LABEL_4372e1;
        }
        else if (v41 != 1)
        {
            v42 = v1;
            v43 = v42[0];
            v46 = v42[1];
            v23 = v46[1];
            v24 = v46[2];
            v25 = v43[1];
            v26 = v43[2];
            v35 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8228e0fa5524ffe3(std::sys::pal::unix::fs::link::hae2124bdbb987c3a(v25, v26, v23, v24), &v23);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd6adea5c56aff03c();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb0a1f6ef9e1a50b7(&v0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::ha2fb9276e2473ed5(&v10);
            if (v35)
            {
LABEL_436e0f:
                v6 = v35;
                v7 = v50;
                v0 = &v6;
                v1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf1e3aa3e3b9160ca;
                v23 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v24 = 1;
                v27 = 0;
                v25 = &v0;
                v26 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v21, &v23);
                *((int128_t *)&v0) = *((int128_t *)&v21);
                v2 = *((long long *)&v22);
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h3ff8d031ca0f2592(v1, *((long long *)&v22), 1, 0))
                {
                    v10 = uucore::util_name::h359eff083fe53467();
                    v11 = v49;
                    v15 = &v10;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55877fe62a9453ec;
                    v23 = &g_4d78f8;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v15;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v52, v49);
                    v10 = &v0;
                    v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v23 = &g_4d7918;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v10;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v52, v49);
                }
                if ((char)v7->field_68(v6))
                {
                    v10 = uucore::execution_phrase::hded5ccd87df1fcab();
                    v11 = v49;
                    v15 = &v10;
                    v16 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h55877fe62a9453ec;
                    v23 = &g_4d7938;
                    v24 = 2;
                    v27 = 0;
                    v25 = &v15;
                    v26 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v23, v52, v49);
                }
                v51 = v7->field_60(v6);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hd6adea5c56aff03c();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf1136833b6c20726(&v0);
                v53 = v6;
                v54 = v7;
                if (v54->field_0)
                    v55(v53);
                if (v54->field_8)
                {
                    __rust_dealloc(v53);
                    return v51;
                }
                return v51;
            }
        }
        else
        {
LABEL_4372e1:
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
    }
    v51 = uucore::mods::error::get_exit_code::hf050de69600a682c();
    return v51;
}
