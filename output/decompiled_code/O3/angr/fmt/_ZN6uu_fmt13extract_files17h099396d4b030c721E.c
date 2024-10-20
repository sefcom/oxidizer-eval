long long uu_fmt::extract_files::h099396d4b030c721(unsigned long long a0[3], struct_1 *a1)
{
    char v0;  // [sp-0x1d2]
    char v1;  // [bp-0x1d1]
    unsigned long v2;  // [sp-0x1d0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x1c8]
    unsigned long v4;  // [sp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x1b8]
    unsigned long long v6;  // [sp-0x1b0]
    unsigned long long v7;  // [sp-0x1a8]
    char v8;  // [bp-0x1a0]
    char v9;  // [bp-0x198]
    char v10;  // [bp-0x188]
    char v11;  // [bp-0x178]
    char v12;  // [bp-0x168]
    unsigned long v13;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x150]
    unsigned long long v15;  // [sp-0x148]
    unsigned long long v16;  // [sp-0x140]
    void* v17;  // [sp-0x138]
    int v18;  // [sp-0x128]
    int v19;  // [sp-0x118]
    unsigned long long v20;  // [sp-0x108]
    unsigned long long v21;  // [sp-0xf8]
    int v22;  // [sp-0xf0]
    int v23;  // [sp-0xe0]
    int v24;  // [sp-0xd0]
    int v25;  // [sp-0xc0]
    void* v26;  // [sp-0xb0]
    void* v27;  // [sp-0x70]
    void* v28;  // [sp-0x30]
    unsigned long long v29;  // [sp-0x28]
    unsigned long long v30;  // [sp-0x20]
    unsigned long long v32;  // rax
    struct struct_0 **v33;  // rdx
    unsigned long long *v34;  // rcx
    struct struct_0 **v35;  // r8
    void* v36;  // rdi
    struct_0 *v37;  // r10
    unsigned long long *v38;  // rax
    char v39;  // cl
    unsigned long long v40[3];  // rax
    unsigned long long v41[3];  // r14
    char *v42;  // rax

    v32 = a1->field_10;
    if (!v32)
    {
LABEL_484318:
    }
    else
    {
        v33 = a1->field_8;
        v34 = 40;
        v35 = 0;
        v36 = 0;
        while (!(*((long long *)(v33 + v35 + 8)) == 5) || !(!(v37->field_4 ^ 115)) || !(!(v37->field_0 ^ 1701603686)))
        {
            v35 += 2;
            v34 += 13;
            v36 += 1;
            if (v32 << 4 == v35)
                goto LABEL_484318;
        }
        if (v36 >= a1->field_28)
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v38 = a1->field_20;
        if (*((long long *)(v38 + v34)))
        {
            v39 = *((long long *)*((long long *)(v38 + v34 - 8))) == 1;
            goto LABEL_48431a;
        }
        goto LABEL_484318;
    }
LABEL_48431a:
    v0 = v39 & 1;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hf5e6bc6abbae74c5(&v8, a1, "fileswidthinvalid width: src/uu/fmt/src/fmt.rs", 5);
    v2 = "fileswidthinvalid width: src/uu/fmt/src/fmt.rs";
    v3 = 5;
    if (*((long long *)&v8))
    {
        v20 = *((long long *)&v11);
        *((int128_t *)&v19) = *((int128_t *)&v10);
        *((int128_t *)&v18) = *((int128_t *)&v9);
        v4 = &v2;
        v5 = _ZN44_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$3fmt17hc391d40f37632619E.llvm.15847019968616179910;
        v6 = &v18;
        v7 = _$LT$clap_builder..parser..error..MatchesError$u20$as$u20$core..fmt..Display$GT$::fmt::hfe760c2f953bc24d;
        v13 = &anon.0313aafc768b88f41319cb91f569aaf5.4.llvm.15847019968616179910;
        v14 = 2;
        v17 = 0;
        v15 = &v4;
        v16 = 2;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v13); /* do not return */
    }
    *((int128_t *)&v25) = *((int128_t *)&v12);
    *((int128_t *)&v24) = *((int128_t *)&v11);
    *((int128_t *)&v23) = *((int128_t *)&v10);
    *((int128_t *)&v22) = *((int128_t *)&v9);
    v21 = 1;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = &v1;
    v30 = &v0;
    core::iter::adapters::try_process::hea666d5dc0324128(&v8, &v21);
    if (*((long long *)&v8) != 0x8000000000000000 && !*((long long *)&(&v9)[8]))
    {
        v40 = __rust_alloc(24, 8);
        if (!v40)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v41 = v40;
        v42 = __rust_alloc(1, 1);
        if (v42)
        {
            *(v42) = 45;
            v41[0] = 1;
            v41[1] = v42;
            v41[2] = 1;
            a0[0] = 1;
            a0[1] = v41;
            a0[2] = 1;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hcc8fdf36411d9e4c(&v8);
            return a0;
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
    a0[2] = *((long long *)&(&v9)[8]);
    *((int128_t *)&a0[0]) = *((int128_t *)&v8);
    return a0;
}
