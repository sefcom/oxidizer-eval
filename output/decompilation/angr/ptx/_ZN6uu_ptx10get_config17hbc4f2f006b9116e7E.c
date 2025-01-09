long long uu_ptx::get_config::hbc4f2f006b9116e7(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [sp-0xb8]
    unsigned int v1;  // [bp-0xb7]
    unsigned int v2;  // [sp-0xb4]
    int v3;  // [sp-0xb0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x90]
    unsigned int v6;  // [sp-0x8d]
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x87]
    char v9;  // [bp-0x80]
    int v10;  // [bp-0x78], Other Possible Types: char
    unsigned long v11;  // [sp-0x68], Other Possible Types: unsigned long long
    int v12;  // [bp-0x60], Other Possible Types: char
    unsigned long long v13;  // [sp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    unsigned long long v16;  // [sp-0x30]
    unsigned long long v17;  // [sp-0x28]
    char v18;  // [sp-0x20]
    char v19;  // [sp-0x1f]
    char v20;  // [sp-0x1e]
    char v21;  // [sp-0x1d]
    char v22;  // [sp-0x1c]
    char v23;  // [sp-0x1b]
    char v24;  // [bp-0x1a]
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30[3];  // rax
    unsigned long long v31;  // rax
    int v32;  // xmm0
    unsigned long long v33[3];  // rax
    unsigned long long v34;  // rax
    int v35;  // xmm0
    int v36;  // xmm1
    int v37;  // xmm2

    _$LT$uu_ptx..Config$u20$as$u20$core..default..Default$GT$::default::h5dee5f130f025e64(&v10);
    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "traditionalflag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11))
    {
        v3 = "GNU extensions";
        v4 = 14;
        v0 = 1;
        v26 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&v0);
        *((unsigned long long *)&a0->padding_8[0]) = v26;
        a0->field_10 = &g_6edc08;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h61e3e7302a3c0217(&v10);
        return a0;
    }
    v18 = 0;
    v23 = 1;
    alloc::str::_$LT$impl$u20$alloc..borrow..ToOwned$u20$for$u20$str$GT$::clone_into::hedde276911c71a78(&v14);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "sentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 15))
    {
        v3 = "-S-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}";
        v4 = 2;
        v0 = 1;
        v26 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&v0);
        *((unsigned long long *)&a0->padding_8[0]) = v26;
        a0->field_10 = &g_6edc08;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h61e3e7302a3c0217(&v10);
        return a0;
    }
    v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "auto-referencetraditionalflag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 14);
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "referenceswidth", 10);
    v21 = (char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "right-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 15) & v21;
    v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "ignore-caseignore-fileonly-filereferenceswidth", 11);
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "macro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 10))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&v0, a1, "macro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 10);
        v27 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743("macro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 10, &v0);
        if (!v27)
            core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failedGNU extensions", 22, &g_6edc78); /* do not return */
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, v27);
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v10);
        v11 = v4;
        *((int128_t *)&v10) = *((int128_t *)&v0);
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "flag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 15))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&v0, a1, "flag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 15);
        v29 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743("flag-truncationmacro-nameformat=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 15, &v0);
        if (!v29)
            core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failedGNU extensions", 22, &g_6edc90); /* do not return */
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, v29);
        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v12);
        v13 = v4;
        *((int128_t *)&v12) = *((int128_t *)&v0);
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, "width", 5))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&v0, a1, "width", 5);
        v30 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743("width", 5, &v0);
        if (!v30)
            core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failedGNU extensions", 22, &g_6edca8); /* do not return */
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, v30[1], v30[2]);
        if (!v7)
        {
            v31 = *((long long *)&v9);
        }
        else
        {
            core::ops::function::FnOnce::call_once::h21988aba69442914(&v0, v8);
            v5 = *((int *)&(&v0)[1]);
            v6 = v2;
            if (v0 != 3)
            {
                v32 = *((int128_t *)&v3);
                v2 = v6;
                v1 = v5;
                v0 = v0;
                v3 = v32;
                v26 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&v0);
                *((unsigned long long *)&a0->padding_8[0]) = v26;
                a0->field_10 = &g_6edc08;
                a0->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h61e3e7302a3c0217(&v10);
                return a0;
            }
        }
        v16 = v31;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a1, &anon.7bad5d3cfcfc6941f72c3bc4e85b9543.29.llvm.7942943287365551935, 8))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&v0, a1, &anon.7bad5d3cfcfc6941f72c3bc4e85b9543.29.llvm.7942943287365551935, 8);
        v33 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(&anon.7bad5d3cfcfc6941f72c3bc4e85b9543.29.llvm.7942943287365551935, 8, &v0);
        if (!v33)
            core::option::expect_failed::h9e03a1f6ff88dbcf("parsing options failedGNU extensions", 22, &g_6edcc0); /* do not return */
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v7, v33[1], v33[2]);
        if (!v7)
        {
            v34 = *((long long *)&v9);
            goto LABEL_5b6538;
        }
        else
        {
            core::ops::function::FnOnce::call_once::h21988aba69442914(&v0, v8);
            v5 = *((int *)&(&v0)[1]);
            v6 = v2;
            if (v0 != 3)
            {
                v35 = (int128_t)v3;
                v2 = v6;
                v1 = v5;
                v0 = v0;
                v3 = v35;
                v26 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&v0);
                *((unsigned long long *)&a0->padding_8[0]) = v26;
                a0->field_10 = &g_6edc08;
                a0->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_ptx..Config$GT$::h61e3e7302a3c0217(&v10);
                return a0;
            }
LABEL_5b6538:
        }
        v17 = v34;
    }
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "format=roffright-side-refssentence-regexpformat=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 11))
        v23 = 1;
    if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a1, "format=texword-regexpbreak-fileignore-caseignore-fileonly-filereferenceswidth", 10))
        v23 = 2;
    a0->field_50 = v17;
    a0->field_58 = *((int *)&v18);
    a0->field_5c = v22;
    a0->field_5d = v23;
    a0->field_5e = *((short *)&v24);
    a0->field_40 = *((int128_t *)&v15);
    v36 = *((int128_t *)&v11);
    v37 = (int128_t)(&v12)[8];
    a0->field_30 = *((int128_t *)&v14);
    *((void*)&a0->field_20) = v37;
    *((void*)&a0->field_10) = v36;
    *((void*)&a0->field_0) = v10;
    return a0;
}
