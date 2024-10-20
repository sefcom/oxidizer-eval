long long uu_base64::uumain::h4c81e2f3522fc60f(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x3e8], Other Possible Types: unsigned long long
    struct_1 *v1;  // [sp-0x3e0], Other Possible Types: unsigned long long
    struct_1 *v2;  // [sp-0x3d8]
    int v3;  // [sp-0x3d0]
    unsigned long long v4;  // [sp-0x3c0]
    int v5;  // [bp-0x3b8], Other Possible Types: char, unsigned long, unsigned long long
    struct_1 *v6;  // [sp-0x3b0], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [bp-0x3a8], Other Possible Types: unsigned long long
    char v8;  // [bp-0x398]
    char v9;  // [bp-0x388]
    struct_2 *v10;  // [bp-0x378], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v11;  // [sp-0x370], Other Possible Types: unsigned long long
    char v12;  // [bp-0x368]
    char v13;  // [bp-0x360]
    char v14;  // [bp-0x350]
    unsigned long v15;  // [sp-0x348], Other Possible Types: unsigned long long
    struct_3 *v16;  // [sp-0x340], Other Possible Types: unsigned long long
    int v17;  // [sp-0x338]
    int v18;  // [sp-0x328]
    unsigned long long v19;  // [sp-0x318]
    char v20;  // [bp-0x310]
    char v21;  // [bp-0x300]
    int v22;  // [bp-0x2f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v23;  // [sp-0x2f0], Other Possible Types: unsigned long long
    int v24;  // [sp-0x2e8], Other Possible Types: struct_1 *, unsigned long, unsigned long long
    unsigned long long v25;  // [sp-0x2e0]
    int v26;  // [bp-0x2d8], Other Possible Types: void*
    unsigned long long v28;  // rax
    struct_1 *v29;  // r15
    struct_3 *v30;  // rdx
    int v31;  // xmm0
    int v32;  // xmm1
    unsigned long long v33;  // r12
    unsigned long long v34;  // rsi
    struct_2 *v35;  // rdi
    struct struct_0 **v36;  // rax
    unsigned long long v37;  // r12
    struct_1 *v38;  // r13
    struct struct_0 **v39;  // rax
    unsigned int v40;  // eax
    unsigned long long v41;  // r14
    struct_1 *v42;  // r15
    struct struct_0 **v43;  // rax

    uu_base32::base_common::base_app::h612c206863d887ba(&v22, "encode/decode data and print to standard output\nWith no FILE, or when FILE is -, read standard input.\n\nThe data are encoded as described for the base64 alphabet in RFC 3548.\nWhen decoding, the input may contain newlines in addition\nto the bytes of the formal base64 alphabet. Use --ignore-garbage\nto attempt to recover from any other non-alphabet bytes in the\nencoded stream.", 375, "{} [OPTION]... [FILE]/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/collections/vec_deque/mod.rs", 21);
    clap_builder::builder::command::Command::try_get_matches_from::h7cc11fad4baf4b54(&v5, &v22, a0, a1);
    if (v15 == 0x8000000000000000)
    {
        v28 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v16);
    }
    else
    {
        v19 = *((long long *)&v9);
        *((int128_t *)&v18) = *((int128_t *)&v8);
        *((int128_t *)&v17) = *((int128_t *)&v7);
        v15 = v5;
        v16 = v6;
        uu_base32::base_common::Config::from::hf768c6aaaa870549(&v10, &v15);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc9c72b5e33d33658(&v15);
        v28 = v11;
        v29 = *((long long *)&v12);
        if (v0 != 2)
        {
            v4 = *((long long *)&v14);
            *((int128_t *)&v3) = *((int128_t *)&v13);
            v0 = v10;
            v1 = v28;
            v2 = v29;
            uu_base32::base_common::get_input::ha11e56733db80fc2(&v22, &v0, v30);
            v28 = v23;
            v29 = v24;
            if (!v22)
            {
                v5 = v28;
                v6 = v29;
                v31 = *((int128_t *)&v0);
                v32 = *((int128_t *)&v2);
                *((int128_t *)&v26) = (int128_t)(&v3)[8];
                v24 = v32;
                v22 = v31;
                v33 = uu_base32::base_common::get_supports_fast_decode_and_encode::h8209214d4c5384e7(0);
                v15 = std::io::stdio::stdout::h077da66234850927();
                v10 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v15, v34, v30);
                v28 = (!(char)(&v26)[8] ? uu_base32::base_common::fast_decode::fast_decode::h6f1cc572e15d1d62(&v5, &v10, v33, v30, (char)(&v26)[9]) : uu_base32::base_common::fast_encode::fast_encode::hdf044e19a2a50d02(&v5, &v10, v33, v30, v22, v23));
                v35 = v10;
                v35->field_c = v35->field_c - 1;
                if (vvar_465 == 1)
                {
                    v35->field_0 = 0;
                    v35->field_8 = 0;
                    if (CasCmpNE(v35->field_8, v35->field_8))
                        goto LABEL_0x443f67;
                    if ((Not (Load(addr=(vvar_206{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                    std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(&v35->field_8);
                }
                if (v30->field_0)
                    v36(v33);
                if (v30->field_8)
                    __rust_dealloc(v33);
                if (v24 != 0x8000000000000000)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf5a426223a35e382();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3ebbde6133e375f1(&v24);
                }
                v37 = v5;
                v38 = v6;
                if (v38->field_0)
                    v39(v37);
                if (v38->field_8)
                    __rust_dealloc(v37);
            }
            else if (v2 != 0x8000000000000000)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf5a426223a35e382();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3ebbde6133e375f1(&v2);
            }
        }
    }
    if (!v0)
    {
        v40 = uucore::mods::error::get_exit_code::hf050de69600a682c();
        return v40;
    }
    v0 = v28;
    v1 = v29;
    v5 = &v0;
    v6 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha13cba19a7972c06;
    v22 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v23 = 1;
    v26 = 0;
    v24 = &v5;
    v25 = 1;
    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v20, &v22);
    *((int128_t *)&v5) = *((int128_t *)&v20);
    v7 = *((long long *)&v21);
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h37cdf43af8770a9c(v6, *((long long *)&v21), 1, 0))
    {
        v15 = uucore::util_name::h359eff083fe53467();
        v16 = v30;
        v10 = &v15;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3e9d2878232a114;
        v22 = &g_4ff038;
        v23 = 2;
        v26 = 0;
        v24 = &v10;
        v25 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v22, v34, v30);
        v15 = &v5;
        v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v22 = &g_4ff058;
        v23 = 2;
        v26 = 0;
        v24 = &v15;
        v25 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v22, v34, v30);
    }
    if ((char)v1->field_68(v0))
    {
        v15 = uucore::execution_phrase::hded5ccd87df1fcab();
        v16 = v30;
        v10 = &v15;
        v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3e9d2878232a114;
        v22 = &g_4ff078;
        v23 = 2;
        v26 = 0;
        v24 = &v10;
        v25 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v22, v34, v30);
    }
    v40 = v1->field_60(v0);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf5a426223a35e382();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3ebbde6133e375f1(&v5);
    v41 = v0;
    v42 = v1;
    if (v42->field_0)
        v43(v41);
    if (v42->field_8)
    {
        __rust_dealloc(v41);
        return v40;
    }
    return v40;
}
