long long uu_ptx::WordFilter::new::h834513af9e48d5ee(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x188]
    int v1;  // [sp-0x188], Other Possible Types: unsigned long
    unsigned long long v2;  // [sp-0x180], Other Possible Types: unsigned long
    struct struct_2 **v3;  // [sp-0x178], Other Possible Types: unsigned long
    unsigned long long v4;  // [sp-0x170]
    int v5;  // [bp-0x168], Other Possible Types: char
    void* v6;  // [bp-0x168]
    char v7;  // [bp-0x160]
    char v8;  // [bp-0x158]
    int v9;  // [sp-0x148], Other Possible Types: unsigned long
    int v10;  // [bp-0x140], Other Possible Types: char
    int v11;  // [bp-0x140]
    int v12;  // [bp-0x138], Other Possible Types: char
    int v13;  // [sp-0x138]
    int v14;  // [bp-0x130]
    int v15;  // [bp-0x128]
    unsigned long long v16;  // [sp-0x120], Other Possible Types: unsigned long
    int v17;  // [sp-0x118]
    int v19;  // [bp-0x108]
    int v20;  // [bp-0x108], Other Possible Types: unsigned long, unsigned long long
    unsigned long v21;  // [sp-0xf8], Other Possible Types: unsigned long long
    int v22;  // [sp-0xf0]
    unsigned long long v23;  // [sp-0xe0]
    int v24;  // [sp-0xd8]
    void* v26;  // [bp-0xc8], Other Possible Types: int
    int v27;  // [sp-0xb8]
    int v28;  // [sp-0xa8]
    unsigned long v29;  // [sp-0x98]
    unsigned long long v30;  // [sp-0x90]
    unsigned long v31;  // [sp-0x88]
    int v32;  // [sp-0x80]
    unsigned long long v33;  // [sp-0x70]
    unsigned long v34;  // [sp-0x68]
    unsigned long long v35;  // [sp-0x60]
    unsigned long v36;  // [sp-0x58]
    int v37;  // [sp-0x50]
    unsigned long long v38;  // [sp-0x40]
    char *v39;  // [sp-0x38]
    unsigned long long v40;  // [sp-0x30]
    char v42;  // al
    unsigned long long v43;  // rcx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx
    char v46;  // al
    unsigned long long v47;  // rcx
    unsigned long long v48;  // rax
    unsigned long long v49;  // rdx
    struct_3 *v52;  // rdx
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm0
    int v56;  // xmm1
    int v57;  // xmm1
    int v58;  // xmm2
    struct_1 *v59;  // rax
    unsigned long long v60;  // rax
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm2
    int v64;  // xmm3
    unsigned long long v65;  // rax
    int v66;  // xmm0
    int v67;  // xmm1
    int v68;  // xmm1
    int v69;  // xmm2

    v42 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "only-filereferenceswidth", 9);
    if (!v42)
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&v0);
        v43 = v1;
        v44 = v2;
        v45 = v3;
        *((int128_t *)&v19) = *((int128_t *)&v5);
        v21 = *((long long *)&v7);
    }
    else
    {
        uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&v0, a1, "only-filereferenceswidth", 9);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&v10, &v0);
        v43 = v9;
        v44 = *((long long *)&v10);
        v45 = *((long long *)&v12);
        if (!v43)
        {
            a0->field_8 = v44;
            *((unsigned long long *)&a0->padding_10[0]) = v45;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v21 = v16;
        *((int128_t *)&v19) = *((int128_t *)&v12);
    }
    v29 = v43;
    v30 = v44;
    v31 = v45;
    *((int128_t *)&v32) = (int128_t)v19;
    v33 = v21;
    v46 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "ignore-fileonly-filereferenceswidth", 11);
    if (!v46)
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&v0);
        v47 = v1;
        v48 = v2;
        v49 = v3;
        *((int128_t *)&v20) = *((int128_t *)&v5);
        v21 = *((long long *)&v7);
    }
    else
    {
        uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&v0, a1, "ignore-fileonly-filereferenceswidth", 11);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&v10, &v0);
        v47 = v9;
        v48 = *((long long *)&v10);
        v49 = *((long long *)&v12);
        if (!v47)
        {
            a0->field_8 = v48;
            *((unsigned long long *)&a0->padding_10[0]) = v49;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&v29);
            return a0;
        }
        v21 = v16;
        *((int128_t *)&v20) = *((int128_t *)&v12);
    }
    v34 = v47;
    v35 = v48;
    v36 = v49;
    *((int128_t *)&v37) = (int128_t)v20;
    v38 = v21;
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "break-fileignore-caseignore-fileonly-filereferenceswidth", 10) || (char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11))
    {
        v26 = 0;
    }
    else
    {
        uu_ptx::read_char_filter_file::hb5c562555cafe5d8(&v0, a1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd4e54632205870f7(&v10, &v0);
        if (!v20)
        {
            a0->field_8 = v20;
            *((unsigned long *)&a0->padding_10[0]) = v21;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&v34);
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&v29);
            return a0;
        }
        v23 = v16;
        *((int128_t *)&v22) = *((int128_t *)&v12);
        v20 = v9;
        v20 = *((long long *)&v10);
        v21 = *((long long *)&v12);
        if (!v52->field_58)
        {
            _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h72643febd655a837(&v10);
        }
        else
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h78c5b7e8cc9844e2(&v0);
            v53 = *((int128_t *)&v1);
            v54 = *((int128_t *)&v3);
            *((int128_t *)&v12) = *((int128_t *)&(&v5)[8]);
            v12 = v54;
            v10 = v53;
        }
        v55 = *((int128_t *)&v20);
        v56 = *((int128_t *)&v21);
        *((int128_t *)&v5) = (int128_t)(&v22)[8];
        v5 = v56;
        v1 = v55;
        _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h5ce7b6f887806e63(&v10, &v0);
        v57 = (int128_t)v12;
        v58 = (int128_t)v12;
        *((int128_t *)&v26) = (int128_t)v10;
        v27 = v57;
        v28 = v58;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&v0, a1, "word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11);
        v59 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743("word-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11, &v0);
        if (v59 && v59->field_10)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, v59);
            vvar_579{stack -216} = (int128_t)(&v1)[8];
            vvar_583{reg 224} = *((int128_t *)&v29);
            vvar_584{reg 256} = *((int128_t *)&v31);
            *((int128_t *)((char *)&a0->field_28 + 8)) = (int128_t)(&v32)[8];
            *((void*)((char *)&a0->field_18 + 8)) = v67;
            *((void*)&(&a0->padding_10)[1]) = v66;
            vvar_585{reg 256} = *((int128_t *)&v36);
            vvar_586{reg 288} = (int128_t)(&v37)[8];
            *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v34);
            *((void*)((char *)&a0->field_48 + 8)) = v68;
            *((void*)((char *)&a0->field_58 + 8)) = v69;
            a0->field_0 = v65;
            *((void*)&a0->field_8) = v24;
            *((char *)&a0->field_68 + 8) = v42;
            *((char *)&a0->field_68 + 9) = v46;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&v26);
            return a0;
        }
    }
    v60 = (long long)v26;
    if (v9)
    {
        v16 = (long long)(&v28)[8];
        v61 = (int128_t)(&v26)[8];
        *((int128_t *)&v14) = (int128_t)(&v27)[8];
        v11 = v61;
        v9 = v60;
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h288b3fee388f1b9b(&v0, &v10);
        v62 = (int128_t)v5;
        v63 = (int128_t)(&v5)[16];
        v64 = *((int128_t *)&v8);
        *((int128_t *)&v9) = *((int128_t *)&v1);
        v13 = v62;
        v15 = v63;
        v17 = v64;
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::hbea44346f7b7ebb1(&v20, &v10);
        v39 = &v20;
        v40 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v1 = &g_6edb98;
        v2 = 2;
        v6 = 0;
        v3 = &v39;
        v4 = 1;
        ::0x5b4110::core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&v10, &v0);
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v20);
        v65 = v9;
        *((int128_t *)&v24) = (int128_t)(&v9)[8];
        vvar_568{reg 224} = *((int128_t *)&v29);
        vvar_569{reg 256} = *((int128_t *)&v31);
        *((int128_t *)((char *)&a0->field_28 + 8)) = (int128_t)(&v32)[8];
        *((void*)((char *)&a0->field_18 + 8)) = v67;
        *((void*)&(&a0->padding_10)[1]) = v66;
        vvar_570{reg 256} = *((int128_t *)&v36);
        vvar_571{reg 288} = (int128_t)(&v37)[8];
        *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v34);
        *((void*)((char *)&a0->field_48 + 8)) = v68;
        *((void*)((char *)&a0->field_58 + 8)) = v69;
        a0->field_0 = v65;
        *((void*)&a0->field_8) = v24;
        *((char *)&a0->field_68 + 8) = v42;
        *((char *)&a0->field_68 + 9) = v46;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&v26);
        return a0;
    }
    if (!v52->field_58)
        ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v0, "[^ \t\n]+", 7);
    else
        ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v0, "\\w+parsing options failed!src/uu/ptx/src/ptx.rs[^]+", 3);
    v65 = v1;
    *((int128_t *)&v24) = (int128_t)(&v1)[8];
    v66 = *((int128_t *)&v29);
    v67 = *((int128_t *)&v31);
    *((int128_t *)((char *)&a0->field_28 + 8)) = (int128_t)(&v32)[8];
    *((void*)((char *)&a0->field_18 + 8)) = v67;
    *((void*)&(&a0->padding_10)[1]) = v66;
    v68 = *((int128_t *)&v36);
    v69 = (int128_t)(&v37)[8];
    *((int128_t *)((char *)&a0->field_38 + 8)) = *((int128_t *)&v34);
    *((void*)((char *)&a0->field_48 + 8)) = v68;
    *((void*)((char *)&a0->field_58 + 8)) = v69;
    a0->field_0 = v65;
    *((void*)&a0->field_8) = v24;
    *((char *)&a0->field_68 + 8) = v42;
    *((char *)&a0->field_68 + 9) = v46;
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&v26);
    return a0;
}
