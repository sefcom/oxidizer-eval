long long uu_fmt::process_file::h286817e23c9d96bb(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    unsigned int v0;  // [bp-0x220], Other Possible Types: unsigned long long
    char *v1;  // [sp-0x1e0]
    unsigned long long v2;  // [sp-0x1d8]
    char v3;  // [sp-0x1d0]
    int v4;  // [bp-0x1c8], Other Possible Types: char, unsigned long long
    int v5;  // [bp-0x1c0]
    unsigned long long v6;  // [sp-0x1b8]
    unsigned int v7;  // [bp-0x1b0], Other Possible Types: unsigned long long
    int v8;  // [sp-0x1a8]
    int v9;  // [sp-0x198]
    int v10;  // [sp-0x188]
    int v11;  // [sp-0x178]
    int v12;  // [sp-0x168]
    char v13;  // [bp-0x118]
    char v14;  // [bp-0x110]
    char v15;  // [bp-0x108]
    char v16;  // [bp-0x100]
    char v17;  // [bp-0xf8]
    char v18;  // [bp-0xe8]
    char v19;  // [bp-0xe0]
    char v20;  // [bp-0xd8]
    char v21;  // [bp-0xc8]
    char v22;  // [bp-0xb8]
    char v23;  // [bp-0x68]
    unsigned long long v25;  // rax
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rdx
    int v29;  // ymm0
    int v30;  // ymm1
    int v31;  // ymm2
    int v32;  // ymm3
    unsigned long long v33;  // rax
    int v34;  // xmm0
    unsigned long long v35;  // rsi
    char *v36;  // rbp
    int v37;  // xmm0
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // xmm2
    int v42;  // xmm3
    void* v43;  // rax
    char *v44;  // rax
    void* v45;  // rax
    unsigned long long v46;  // rsi
    unsigned long long v47;  // rdx

    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h49c5b64196a2a340(a0, a1, "-", 1))
    {
        v25 = alloc::boxed::Box$LT$T$GT$::new::h1ab2cedcdb833c55(std::io::stdio::stdin::h7215cc131abb55d8());
        v26 = &g_5264c8;
        goto LABEL_4b538f;
    }
    else
    {
        std::fs::File::open::hd2fbbd470609400e(&v4, a0, a1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h432ca70cabaeacd8(&v13, &v4, a0, a1);
        v27 = *((long long *)&v13);
        if (v27)
            return v27;
        v0 = *((int *)&v14);
        std::fs::File::metadata::he899a18112e6f19e(&v4, &v0);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::he0390d0a07b9e259(&v13, &v4, a0, a1);
        if (*((int *)&v13) == 2)
        {
            v27 = *((long long *)&v14);
        }
        else if ((0xf000 & *((int *)&v19)) == 0x4000)
        {
            ::0x4b48d0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(&v13, "read error", 10);
            v6 = *((long long *)&v15);
            *((int128_t *)&v4) = *((int128_t *)&v13);
            v7 = 1;
            v27 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&v4);
        }
        else
        {
            v25 = alloc::boxed::Box$LT$T$GT$::new::h95508db5fa9d8c2f(v0);
            v26 = &g_526470;
LABEL_4b538f:
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h0f92bd0684144666(&v23, 0x2000, v25, v26);
            v0 = 9223372036854775810;
            v1 = &v23;
            v2 = a2;
            v3 = 1;
            while (true)
            {
                _$LT$uu_fmt..parasplit..ParagraphStream$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6ed28343c896a546(&v13, &v0, v28);
                v33 = *((long long *)&v13);
                if (v33 != 0x8000000000000000)
                {
                    if (v33 == 9223372036854775809)
                    {
                        core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParagraphStream$GT$::h55f4efc3b7686e22(&v0);
                        v27 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf81386728380d136(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h4270cc0ec3c16399(a3, v46, v47));
                        if (!v27)
                        {
                            core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::ha2681e07678ff023(&v23);
                            return 0;
                        }
                    }
                    else
                    {
                        v4 = v33;
                        v7 = *((long long *)&v16);
                        v37 = *((int128_t *)&v14);
                        v5 = v37;
                        v38 = *((int128_t *)&v22);
                        v12 = v38;
                        v39 = *((int128_t *)&v17);
                        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                        v40 = *((int128_t *)&v18);
                        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40;
                        v41 = *((int128_t *)&v20);
                        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
                        v42 = *((int128_t *)&v21);
                        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
                        v11 = v42;
                        v10 = v41;
                        v9 = v40;
                        v8 = v39;
                        v27 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::haf36b358a89fa26f(uu_fmt::linebreak::break_lines::h90fda31618924b44(&v4, a2, a3));
                        if (v27)
                        {
                            core::ptr::drop_in_place$LT$uu_fmt..parasplit..Paragraph$GT$::ha3be4e98cabf6d8c(&v4);
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$uu_fmt..parasplit..Paragraph$GT$::ha3be4e98cabf6d8c(&v4);
                            continue;
                        }
LABEL_4b5650:
                        core::ptr::drop_in_place$LT$uu_fmt..parasplit..ParagraphStream$GT$::h55f4efc3b7686e22(&v0);
                    }
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::ha2681e07678ff023(&v23);
                    break;
                }
                v34 = *((int128_t *)&v14);
                v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                v4 = v34;
                v6 = *((long long *)&v16);
                v35 = (long long)(&v4)[8];
                v36 = a3->field_10;
                if (v6 >= a3->field_0 - v36)
                {
                    v43 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(a3, v35, v6);
                }
                else
                {
                    memcpy(&v36[a3->field_8], v35, v6);
                    a3->field_10 = &v36[v6];
                    v43 = 0;
                }
                v27 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd26104e1c49ad79d(v43);
                if (v27)
                {
LABEL_4b55b4:
                    ::0x4b3cc0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h99cf2aa6339f3e38(&v4);
                    goto LABEL_4b5650;
                }
                else
                {
                    v44 = a3->field_10;
                    if (a3->field_0 - v44 > 1)
                    {
                        v44[a3->field_8] = 10;
                        a3->field_10 = &v44[1];
                        v45 = 0;
                    }
                    else
                    {
                        v45 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(a3, "\n", 1);
                    }
                    v27 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb12cfa95b25ccb95(v45);
                    if (!(!v27))
                        goto LABEL_4b55b4;
                    ::0x4b3cc0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h99cf2aa6339f3e38(&v4);
                }
            }
            return v27;
        }
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h6154f541d864a002(&v0);
        return v27;
    }
}
