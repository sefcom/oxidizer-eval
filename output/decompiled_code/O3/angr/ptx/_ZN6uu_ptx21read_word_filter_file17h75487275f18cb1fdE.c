long long uu_ptx::read_word_filter_file::h75487275f18cb1fd(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0x138], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x130], Other Possible Types: unsigned int, unsigned long long
    unsigned short v2;  // [sp-0x12c]
    int v3;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x120]
    int v5;  // [bp-0x118], Other Possible Types: void*
    int v6;  // [sp-0xf8]
    char v7;  // [bp-0xf4]
    char v8;  // [bp-0xf0]
    int v9;  // [sp-0xe8]
    int v10;  // [bp-0xd8], Other Possible Types: unsigned long
    char v11;  // [bp-0xc0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v12;  // [sp-0xb8]
    int v13;  // [sp-0xb0]
    void* v14;  // [sp-0xa0], Other Possible Types: unsigned long
    unsigned int v15;  // [sp-0x98]
    unsigned long long v16;  // [sp-0x90], Other Possible Types: unsigned long
    unsigned long v17;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long v18;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x78]
    char v20;  // [bp-0x70]
    char v21;  // [bp-0x68]
    char v22;  // [bp-0x60]
    unsigned long v23;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x50]
    unsigned long v25;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x40]
    unsigned long long v27;  // [sp-0x38]
    unsigned long long v29;  // r14
    struct_0 *v30;  // rax
    unsigned long long v32;  // rax
    unsigned long long *v33;  // rax
    int v34;  // xmm0
    int v35;  // xmm0
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rcx
    unsigned long long v38;  // r8
    unsigned long long v39;  // r9
    unsigned long long v40;  // rax
    struct_0 *v41;  // rax

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h504e7d68495df5f5(&v11, a1, a2, a3);
    v23 = a2;
    v24 = a3;
    if (*((int *)&v11) != 2)
    {
        v10 = v14;
        v9 = v13;
        *((int128_t *)&v6) = *((int128_t *)&v11);
        v16 = &v23;
        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4a938260ea6c0532;
        v18 = &v6;
        v19 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v0 = &anon.982ebfe6603d1d7445e24895863ba0e8.2.llvm.17676394313059082282;
        v1 = 2;
        v5 = 0;
        v3 = &v16;
        v4 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    if (!v12)
        core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v20, v12);
    v0 = 0x1b600000000;
    v1 = 0;
    v2 = 0;
    v1 = 1;
    v29 = *((long long *)&v21);
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v6, &v0, v29, *((long long *)&v22));
    if (*((long long *)&v20))
        __rust_dealloc(v29);
    if ((int)v6)
    {
        v30 = *((long long *)&v8);
        *((struct_0 **)&a0->padding_8[0]) = v30;
        a0->field_0 = 0;
        return v30;
    }
    v32 = __rust_alloc(0x2000, 1);
    if (!v32)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v11 = v32;
    v12 = 0x2000;
    *((int128_t *)&v13) = 0;
    v14 = 0;
    v15 = *((int *)&v7);
    v33 = _ZN4core3ops8function6FnOnce9call_once17hf6b9d66bd0d26b7bE.llvm.8033991318799290767(0);
    if (!v33)
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v34 = *((int128_t *)&v33);
    *(v33) = *(v33) + 1;
    *((uint128_t *)&v9) = g_67bcb8;
    *((uint128_t *)&v6) = anon.585b1728ec6435d03fbe081b5952853c.2.llvm.8033991318799290767;
    v10 = v34;
    v35 = *((int128_t *)&v11);
    *((int128_t *)&v5) = *((int128_t *)&v14);
    v3 = v13;
    v0 = v35;
    while (true)
    {
        _$LT$std..io..Lines$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb95efeed3ecde2af(&v16, &v0, v36, v37, v38, v39);
        v40 = v16;
        if (v40 == 9223372036854775809)
        {
            if ((long long)(&v0)[8])
                __rust_dealloc(v0);
            close((int)(&v5)[8]);
            v30 = a0;
            v30->field_20 = (int128_t)v10;
            *((void*)&v30->field_10) = v9;
            *((void*)&v30->field_0) = v6;
            return v30;
        }
        if (v40 != 0x8000000000000000)
        {
            v25 = v40;
            v26 = v17;
            v27 = v18;
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he1011915c068eb70(&v6, &v25);
        }
        else
        {
            v41 = a0;
            *((unsigned long long *)&v41->padding_8[0]) = v26;
            v41->field_0 = 0;
            if ((long long)(&v0)[8])
                __rust_dealloc(v0);
            close((int)(&v5)[8]);
            v30 = _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95eb934166068804(&v6);
            return v30;
        }
    }
}
