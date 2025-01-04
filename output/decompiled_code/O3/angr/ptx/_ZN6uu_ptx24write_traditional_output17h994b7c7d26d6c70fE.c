long long uu_ptx::write_traditional_output::h994b7c7d26d6c70f(struct_2 *a0, unsigned long long a1, unsigned long long a2[3], unsigned long long a3, unsigned long long a4, unsigned long a5)
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
    unsigned long long v30;  // rcx
    unsigned long long v31;  // r8
    unsigned long long v32;  // r9
    unsigned long long v33;  // rax
    unsigned long long v35;  // rax
    unsigned int v37;  // ebp
    int v38;  // ymm0
    int v39;  // ymm1
    struct_1 *v40;  // rbx
    unsigned long long v41[9];  // r15
    unsigned long long v42;  // r14
    unsigned long long v43;  // r12
    unsigned long long v44;  // r13
    int v45;  // xmm0
    int v46;  // ymm0
    unsigned long long v47[3];  // rax
    int v48;  // xmm0
    int v49;  // xmm1
    int v50;  // xmm0
    int v51;  // xmm1

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
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v14, a0->field_38, a0->field_40, v30, v31, v32);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&v24, &v14, &g_6ee310);
    v33 = a2[0];
    if (v33)
        v35 = a2[2];
    v14 = -0x100 | v33;
    v15 = 0;
    v16 = v33;
    v17 = a2[1];
    v18 = v14;
    v19 = 0;
    v20 = v33;
    v21 = v17;
    v22 = v35;
    v37 = a0->field_5d;
    v3 = a0->field_59;
    v2 = a0->field_5a;
    v4 = &g_6ee370;
    while (true)
    {
        v40 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42515bd069bd12f0(&v14);
        if (!v40)
        {
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v24);
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&v25);
            return 0;
        }
        v41 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5a6cffc6474407cf(a1, &v40->padding_0[24]);
        if (!v41)
            core::option::expect_failed::h9e03a1f6ff88dbcf(); /* do not return */
        v42 = v40->field_38;
        if (v42 >= v41[5])
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        v43 = v41[4];
        v44 = v42 * 3;
        v45 = *((int128_t *)&v24);
        v46 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
        v0 = v45;
        uu_ptx::get_reference::hde200eae24bcb508(v5, v3, v2, v40, *((long long *)(v43 + v44 * 8 + 8)), *((long long *)(v43 + v44 * 8 + 16)));
        v47 = v43 + v44 * 8;
        if (v37 == 1)
        {
            if (v42 < v41[8])
            {
                v48 = *((int128_t *)(v41[7] + v44 * 8 + 8));
                v38 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
                v49 = *((int128_t *)&v6);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
                v1 = v49;
                v0 = v48;
                uu_ptx::format_roff_line::h4297720d7d6a4583(&v23, a0, *((long long *)&v40->field_40), v40->field_48, v47[1], v47[2]);
            }
            else
            {
                v4 = &g_6ee358;
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            }
        }
        else
        {
            if (v37 != 2)
            {
                v7 = 0;
                v29 = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&v7);
                break;
            }
            else if (v42 < v41[8])
            {
                v50 = *((int128_t *)(v41[7] + v44 * 8 + 8));
                v38 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v50;
                v51 = *((int128_t *)&v6);
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v51;
                v1 = v51;
                v0 = v50;
                uu_ptx::format_tex_line::h116c5459a35e6a61(&v23, a0, *((long long *)&v40->field_40), v40->field_48, v47[1], v47[2]);
            }
            else
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
            }
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
