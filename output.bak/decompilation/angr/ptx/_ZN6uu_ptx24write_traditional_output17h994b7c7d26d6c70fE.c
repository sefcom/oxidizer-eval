long long uu_ptx::write_traditional_output::h994b7c7d26d6c70f(struct_1 *a0, unsigned long long a1, unsigned long long a2[3], unsigned long long a3, unsigned long long a4)
{
    int v0;  // [sp-0x178]
    int v1;  // [sp-0x168]
    unsigned int v2;  // [sp-0x150]
    unsigned int v3;  // [sp-0x14c]
    unsigned long long v4;  // [sp-0x148]
    unsigned long long v5[3];  // [bp-0x138]
    char v6;  // [bp-0x130]
    unsigned long v7;  // [bp-0x120], Other Possible Types: char
    char v8;  // [bp-0x118], Other Possible Types: unsigned long long
    struct struct_0 **v9;  // [sp-0x110]
    unsigned long long v10;  // [sp-0x108]
    void* v11;  // [sp-0x100]
    char *v12;  // [sp-0xf0]
    unsigned long long v13;  // [sp-0xe8]
    char v14;  // [bp-0xe0], Other Possible Types: unsigned long long
    void* v15;  // [sp-0xd8]
    unsigned long long v16;  // [sp-0xd0]
    unsigned long long v17;  // [sp-0xc8]
    unsigned long long v18;  // [sp-0xc0]
    void* v19;  // [sp-0xb8]
    unsigned long long v20;  // [sp-0xb0]
    unsigned long long v21;  // [sp-0xa8]
    unsigned long long v22;  // [sp-0xa0]
    char v23;  // [bp-0x98]
    char v24;  // [bp-0x80]
    char v25;  // [bp-0x60]
    unsigned long long v27;  // rax
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rbx
    unsigned long long v30;  // rax
    unsigned long long v32;  // rax
    unsigned int v34;  // ebp
    int v35;  // ymm0
    int v36;  // ymm1
    struct_2 *v37;  // rbx
    unsigned long long v38[9];  // r15
    unsigned long long v39;  // r14
    unsigned long long v41;  // r12
    unsigned long long v42;  // r13
    int v43;  // xmm0
    int v44;  // ymm0
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // rsi
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm0
    int v50;  // xmm1

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(a3, a4, "-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 1))
    {
        v27 = alloc::boxed::Box$LT$T$GT$::new::hb5cf39cdf7805947(std::io::stdio::stdout::h077da66234850927());
        v28 = &g_6ee2c0;
    }
    else
    {
        std::fs::File::create::h7afd7399792ad865(&v14, a3, a4);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcf4fec145e7d01a1(&v7, &v14);
        v29 = *((long long *)&v7);
        if (v29)
            return v29;
        v27 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(*((int *)&v8));
        v28 = &g_6ee270;
    }
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hc28e5ceb504200ea(&v25, 0x2000, v27, v28);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v14, a0->field_38, a0->field_40);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&v24, &v14, &g_6ee310);
    v30 = a2[0];
    if (v30)
        v32 = a2[2];
    v14 = -0x100 | v30;
    v15 = 0;
    v16 = v30;
    v17 = a2[1];
    v18 = v14;
    v19 = 0;
    v20 = v30;
    v21 = v17;
    v22 = v32;
    v34 = a0->field_5d;
    v3 = a0->field_59;
    v2 = a0->field_5a;
    v4 = &g_6ee370;
    while (true)
    {
        v37 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42515bd069bd12f0(&v14);
        if (!v37)
        {
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v24);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&v25);
            return 0;
        }
        v38 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5a6cffc6474407cf(a1, &v37->padding_0[24]);
        if (!v38)
            core::option::expect_failed::h9e03a1f6ff88dbcf("Missing file in file map\nProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read s", 24, &g_6ee328); /* do not return */
        v39 = v37->field_38;
        if (v39 >= v38[5])
            core::panicking::panic_bounds_check::h25a5330941572dd1(v39, v38[5], &g_6ee340); /* do not return */
        v41 = v38[4];
        v42 = v39 * 3;
        v43 = *((int128_t *)&v24);
        v44 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43;
        v0 = v43;
        uu_ptx::get_reference::hde200eae24bcb508(v5, v3, v2, v37, *((long long *)(v41 + v42 * 8 + 8)), *((long long *)(v41 + v42 * 8 + 16)));
        v45 = v41 + v42 * 8;
        if (v34 == 1)
        {
            v46 = v38[8];
            if (v39 >= v46)
            {
                v4 = &g_6ee358;
                core::panicking::panic_bounds_check::h25a5330941572dd1(v39, v46, v4); /* do not return */
            }
            v47 = *((int128_t *)(v38[7] + v42 * 8 + 8));
            v35 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
            v48 = *((int128_t *)&v6);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
            v1 = v48;
            v0 = v47;
            uu_ptx::format_roff_line::h4297720d7d6a4583(&v23, a0, *((long long *)&v37->field_40), v37->field_48, v45[1], v45[2]);
        }
        else if (v34 == 2)
        {
            v46 = v38[8];
            if (v39 >= v46)
                core::panicking::panic_bounds_check::h25a5330941572dd1(v39, v46, v4); /* do not return */
            v49 = *((int128_t *)(v38[7] + v42 * 8 + 8));
            v35 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            v50 = *((int128_t *)&v6);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
            v1 = v50;
            v0 = v49;
            uu_ptx::format_tex_line::h116c5459a35e6a61(&v23, a0, *((long long *)&v37->field_40), v37->field_48, v45[1], v45[2]);
        }
        else
        {
            v7 = 0;
            v29 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&v7);
            break;
        }
        v12 = &v23;
        v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v7 = &g_6ee250;
        v8 = 2;
        v11 = 0;
        v9 = &v12;
        v10 = 1;
        v29 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h12e604f0a0762086(std::io::Write::write_fmt::hc188f250100c2fb6(&v25, &v7));
        if (!v29)
        {
            ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v23);
            ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(v5);
        }
        else
        {
            ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v23);
            break;
        }
    }
    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(v5);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v24);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&v25);
    return v29;
}
