long long uu_ptx::write_traditional_output::h994b7c7d26d6c70f(struct_2 *a0, unsigned long long a1, unsigned long long a2[3], unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x178]
    char v1;  // [bp-0x170]
    char v2;  // [bp-0x168]
    char v3;  // [bp-0x160]
    unsigned int v4;  // [sp-0x150]
    unsigned int v5;  // [sp-0x14c]
    unsigned long long v6;  // [sp-0x148]
    unsigned long long v7[3];  // [bp-0x138]
    char v8;  // [bp-0x130]
    unsigned long v9;  // [bp-0x120], Other Possible Types: char
    char v10;  // [bp-0x118], Other Possible Types: unsigned long long
    struct struct_1 **v11;  // [sp-0x110]
    unsigned long long v12;  // [sp-0x108]
    void* v13;  // [sp-0x100]
    char *v14;  // [sp-0xf0]
    unsigned long long v15;  // [sp-0xe8]
    char v16;  // [bp-0xe0], Other Possible Types: unsigned long
    void* v17;  // [sp-0xd8]
    unsigned long long v18;  // [sp-0xd0]
    unsigned long long v19;  // [sp-0xc8]
    unsigned long long v20;  // [sp-0xc0]
    void* v21;  // [sp-0xb8]
    unsigned long long v22;  // [sp-0xb0]
    unsigned long long v23;  // [sp-0xa8]
    unsigned long long v24;  // [sp-0xa0]
    char v25;  // [bp-0x98]
    char v26;  // [bp-0x80]
    char v27;  // [bp-0x60]
    unsigned long long v29;  // rax
    unsigned long long v30;  // rcx
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rax
    unsigned long long v34;  // rsi
    unsigned int v35;  // ebp
    int v36;  // ymm0
    int v37;  // ymm1
    struct_0 *v38;  // rbx
    unsigned long long v39[9];  // r15
    unsigned long long v40;  // r14
    unsigned long long v42;  // r12
    unsigned long long v43;  // r13
    int v44;  // ymm0
    unsigned long long v45[3];  // rax
    unsigned long long v46;  // rsi

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(a3, a4, "-:assertion failed: beg <= endassertion failed: max_before_size >= before.len()assertion failed: max_after_size >= after.len()\\backslash{}\\$\\$ {}{}", 1))
    {
        v29 = alloc::boxed::Box$LT$T$GT$::new::hb5cf39cdf7805947(std::io::stdio::stdout::h077da66234850927());
        v30 = &g_6ee2c0;
    }
    else
    {
        std::fs::File::create::h7afd7399792ad865(&v16, a3, a4);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcf4fec145e7d01a1(&v9, &v16);
        v31 = *((long long *)&v9);
        if (v31)
            return v31;
        v29 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(*((int *)&v10));
        v30 = &g_6ee270;
    }
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hc28e5ceb504200ea(&v27, 0x2000, v29, v30);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v16, a0->field_38, a0->field_40);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&v26, &v16, &g_6ee310);
    v32 = a2[0];
    v34 = v32;
    if (v32)
        v34 = a2[2];
    v16 = v32;
    v17 = 0;
    v18 = v32;
    v19 = a2[1];
    v20 = v16;
    v21 = 0;
    v22 = v32;
    v23 = v19;
    v24 = v34;
    v35 = a0->field_5d;
    v5 = a0->field_59;
    v4 = a0->field_5a;
    v6 = &g_6ee370;
    while (true)
    {
        v38 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42515bd069bd12f0(&v16);
        if (!v38)
        {
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v26);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&v27);
            return 0;
        }
        v39 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5a6cffc6474407cf(a1, &v38->padding_0[24]);
        if (!v39)
            core::option::expect_failed::h9e03a1f6ff88dbcf("Missing file in file map\nProduce a permuted index of file contents\nOutput a permuted index, including context, of the words in the input files.\nMandatory arguments to long options are mandatory for short options too.\nWith no FILE, or when FILE is -, read s", 24, &g_6ee328); /* do not return */
        v40 = v38->field_38;
        if (v40 >= v39[5])
            core::panicking::panic_bounds_check::h25a5330941572dd1(v40, v39[5], &g_6ee340); /* do not return */
        v42 = v39[4];
        v43 = v40 * 3;
        v44 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v26);
        uu_ptx::get_reference::hde200eae24bcb508(v7, v5, v4, v38, *((long long *)(v42 + v43 * 8 + 8)), *((long long *)(v42 + v43 * 8 + 16)), *((long long *)&v0), *((long long *)&v1));
        v45 = v42 + v43 * 8;
        if (v35 == 1)
        {
            v46 = v39[8];
            if (v40 >= v46)
            {
                v6 = &g_6ee358;
                core::panicking::panic_bounds_check::h25a5330941572dd1(v40, v46, v6); /* do not return */
            }
            v36 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(v39[7] + v43 * 8 + 8));
            v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v8);
            uu_ptx::format_roff_line::h4297720d7d6a4583(&v25, a0, *((long long *)&v38->field_40), v38->field_48, v45[1], v45[2], *((long long *)&v0), *((long long *)&v1), *((long long *)&v2), *((long long *)&v3));
        }
        else if (v35 == 2)
        {
            v46 = v39[8];
            if (v40 >= v46)
                core::panicking::panic_bounds_check::h25a5330941572dd1(v40, v46, v6); /* do not return */
            v36 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)(v39[7] + v43 * 8 + 8));
            v37 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v8);
            uu_ptx::format_tex_line::h116c5459a35e6a61(&v25, a0, *((long long *)&v38->field_40), v38->field_48, v45[1], v45[2], *((long long *)&v0), *((long long *)&v1), *((long long *)&v2), *((long long *)&v3));
        }
        else
        {
            v9 = 0;
            v31 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&v9);
            break;
        }
        v14 = &v25;
        v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v9 = &g_6ee250;
        v10 = 2;
        v13 = 0;
        v11 = &v14;
        v12 = 1;
        v31 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h12e604f0a0762086(std::io::Write::write_fmt::hc188f250100c2fb6(&v27, &v9));
        if (!v31)
        {
            ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v25);
            ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(v7);
        }
        else
        {
            ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v25);
            break;
        }
    }
    ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(v7);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v26);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&v27);
    return v31;
}
