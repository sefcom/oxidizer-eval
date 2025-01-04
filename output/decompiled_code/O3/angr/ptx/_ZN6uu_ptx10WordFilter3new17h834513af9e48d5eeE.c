long long uu_ptx::WordFilter::new::h834513af9e48d5ee(struct_3 *a0, unsigned long long a1, struct_1 *a2)
{
    int v0;  // [bp-0x188], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0x180]
    struct struct_0 **v2;  // [bp-0x178], Other Possible Types: int, char
    char v3;  // [bp-0x170], Other Possible Types: unsigned long long
    int v4;  // [bp-0x168], Other Possible Types: void*
    char v5;  // [bp-0x160]
    char v6;  // [bp-0x158]
    int v7;  // [bp-0x148], Other Possible Types: char, unsigned long long, unsigned long
    int v8;  // [bp-0x140], Other Possible Types: char
    int v9;  // [bp-0x138], Other Possible Types: char
    int v10;  // [bp-0x130], Other Possible Types: char
    int v11;  // [bp-0x128]
    unsigned long long v12;  // [sp-0x120], Other Possible Types: unsigned long
    int v13;  // [sp-0x118]
    int v14;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [sp-0x100]
    unsigned long v16;  // [sp-0xf8], Other Possible Types: unsigned long long
    int v17;  // [sp-0xf0]
    unsigned long long v18;  // [sp-0xe0]
    int v19;  // [sp-0xd8]
    void* v20;  // [bp-0xc8], Other Possible Types: int
    int v21;  // [sp-0xb8]
    int v22;  // [sp-0xa8]
    unsigned long v23;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x90]
    unsigned long v25;  // [sp-0x88], Other Possible Types: unsigned long long
    int v26;  // [sp-0x80]
    unsigned long long v27;  // [sp-0x70]
    unsigned long v28;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v29;  // [sp-0x60]
    unsigned long v30;  // [sp-0x58], Other Possible Types: unsigned long long
    int v31;  // [sp-0x50]
    unsigned long long v32;  // [sp-0x40]
    char *v33;  // [sp-0x38]
    unsigned long long v34;  // [sp-0x30]
    char v36;  // al
    unsigned long long v37;  // rsi
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    char v42;  // al
    unsigned long long v43;  // rcx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx
    unsigned long long v48;  // rsi
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // xmm0
    int v52;  // xmm1
    int v53;  // xmm1
    int v54;  // xmm2
    struct_2 *v55;  // rax
    unsigned long long v56;  // rax
    int v57;  // xmm0
    int v58;  // xmm1
    int v59;  // xmm2
    int v60;  // xmm3
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm1
    int v64;  // xmm2

    v36 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "only-filereferenceswidth", 9);
    if (!v36)
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&v0, v37, v38);
        *((int128_t *)&v14) = *((int128_t *)&v3);
        v16 = *((long long *)&v5);
    }
    else
    {
        uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&v0, a1, "only-filereferenceswidth", 9);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&v7, &v0);
        v39 = v7;
        v40 = *((long long *)&v8);
        v41 = *((long long *)&v9);
        if (!v39)
        {
            a0->field_8 = v40;
            *((unsigned long long *)&a0->padding_10[0]) = v41;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v16 = v12;
        *((int128_t *)&v14) = *((int128_t *)&v10);
    }
    v23 = v39;
    v24 = v40;
    v25 = v41;
    *((int128_t *)&v26) = (int128_t)v14;
    v27 = v16;
    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "ignore-fileonly-filereferenceswidth", 11);
    if (!v42)
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&v0, v37, v38);
        *((int128_t *)&v14) = *((int128_t *)&v3);
        v16 = *((long long *)&v5);
    }
    else
    {
        uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&v0, a1, "ignore-fileonly-filereferenceswidth", 11);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&v7, &v0);
        v43 = v7;
        v44 = *((long long *)&v8);
        v45 = *((long long *)&v9);
        if (!v43)
        {
            a0->field_8 = v44;
            *((unsigned long long *)&a0->padding_10[0]) = v45;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&v23);
            return a0;
        }
        v16 = v12;
        *((int128_t *)&v14) = *((int128_t *)&v10);
    }
    v28 = v43;
    v29 = v44;
    v30 = v45;
    *((int128_t *)&v31) = (int128_t)v14;
    v32 = v16;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "break-fileignore-caseignore-fileonly-filereferenceswidth", 10) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11))
    {
        v20 = 0;
    }
    else
    {
        uu_ptx::read_char_filter_file::hb5c562555cafe5d8(&v0, a1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd4e54632205870f7(&v7, &v0);
        if (!v14)
        {
            a0->field_8 = v15;
            *((unsigned long long *)&a0->padding_10[0]) = v16;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&v28);
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&v23);
            return a0;
        }
        v48 = v12;
        v18 = v12;
        *((int128_t *)&v17) = *((int128_t *)&v10);
        v14 = v7;
        v15 = *((long long *)&v8);
        v16 = *((long long *)&v9);
        if (!a2->field_58)
        {
            _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h72643febd655a837(&v7, v48, v14);
        }
        else
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h78c5b7e8cc9844e2(&v0, v48, v14);
            v49 = *((int128_t *)&v0);
            v50 = *((int128_t *)&v2);
            *((int128_t *)&v11) = *((int128_t *)&(&v3)[8]);
            v9 = v50;
            v7 = v49;
        }
        v51 = *((int128_t *)&v14);
        v52 = *((int128_t *)&v16);
        *((int128_t *)&v4) = (int128_t)(&v17)[8];
        v2 = v52;
        v0 = v51;
        _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h5ce7b6f887806e63(&v7, &v0);
        v53 = (int128_t)v9;
        v54 = (int128_t)v11;
        *((int128_t *)&v20) = (int128_t)v7;
        v21 = v53;
        v22 = v54;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&v0, a1, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11);
        v55 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743("word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11, &v0);
        if (v55 && v55->field_10)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, v55);
            vvar_583{stack -216} = (int128_t)(&v0)[8];
            vvar_584{stack -392} = v0;
            vvar_588{reg 224} = *((int128_t *)&v23);
            vvar_589{reg 256} = *((int128_t *)&v25);
            *((int128_t *)((char *)&a0->field_28 + 8)) = (int128_t)(&v26)[8];
            *((void*)((char *)&a0->field_18 + 8)) = v62;
            *((void*)&(&a0->padding_10)[1]) = v61;
            vvar_590{reg 256} = *((int128_t *)&v30);
            vvar_591{reg 288} = (int128_t)(&v31)[8];
            *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v28);
            *((void*)((char *)&a0->field_48 + 8)) = v63;
            *((void*)((char *)&a0->field_58 + 8)) = v64;
            a0->field_0 = v0;
            *((void*)&a0->field_8) = v19;
            *((char *)&a0->field_68 + 8) = v36;
            *((char *)&a0->field_68 + 9) = v42;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&v20);
            return a0;
        }
    }
    v56 = (long long)v20;
    if (v7)
    {
        v12 = (long long)(&v22)[8];
        v57 = (int128_t)(&v20)[8];
        *((int128_t *)&v10) = (int128_t)(&v21)[8];
        v8 = v57;
        v7 = v56;
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h288b3fee388f1b9b(&v0, &v7);
        v58 = (int128_t)v2;
        v59 = (int128_t)(&v2)[16];
        v60 = *((int128_t *)&v6);
        *((int128_t *)&v7) = (int128_t)v0;
        v9 = v58;
        v11 = v59;
        v13 = v60;
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::hbea44346f7b7ebb1(&v14, &v7, v38);
        v33 = &v14;
        v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v0 = &g_6edb98;
        v1 = 2;
        v4 = 0;
        v2 = &v33;
        v3 = 1;
        ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&v7, &v0);
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v14);
        *((int128_t *)&v19) = (int128_t)(&v7)[8];
        v0 = v7;
        vvar_573{reg 224} = *((int128_t *)&v23);
        vvar_574{reg 256} = *((int128_t *)&v25);
        *((int128_t *)((char *)&a0->field_28 + 8)) = (int128_t)(&v26)[8];
        *((void*)((char *)&a0->field_18 + 8)) = v62;
        *((void*)&(&a0->padding_10)[1]) = v61;
        vvar_575{reg 256} = *((int128_t *)&v30);
        vvar_576{reg 288} = (int128_t)(&v31)[8];
        *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v28);
        *((void*)((char *)&a0->field_48 + 8)) = v63;
        *((void*)((char *)&a0->field_58 + 8)) = v64;
        a0->field_0 = v0;
        *((void*)&a0->field_8) = v19;
        *((char *)&a0->field_68 + 8) = v36;
        *((char *)&a0->field_68 + 9) = v42;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&v20);
        return a0;
    }
    if (!a2->field_58)
        ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v0, "[^ \t\n]+", 7);
    else
        ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v0, "\\w+parsing options failed!src/uu/ptx/src/ptx.rs[^]+", 3);
    *((int128_t *)&v19) = (int128_t)(&v0)[8];
    v0 = v0;
    v61 = *((int128_t *)&v23);
    v62 = *((int128_t *)&v25);
    *((int128_t *)((char *)&a0->field_28 + 8)) = (int128_t)(&v26)[8];
    *((void*)((char *)&a0->field_18 + 8)) = v62;
    *((void*)&(&a0->padding_10)[1]) = v61;
    v63 = *((int128_t *)&v30);
    v64 = (int128_t)(&v31)[8];
    *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v28);
    *((void*)((char *)&a0->field_48 + 8)) = v63;
    *((void*)((char *)&a0->field_58 + 8)) = v64;
    a0->field_0 = v0;
    *((void*)&a0->field_8) = v19;
    *((char *)&a0->field_68 + 8) = v36;
    *((char *)&a0->field_68 + 9) = v42;
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&v20);
    return a0;
}
