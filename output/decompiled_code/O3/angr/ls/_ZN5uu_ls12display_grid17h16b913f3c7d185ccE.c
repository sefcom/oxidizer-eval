long long uu_ls::display_grid::h16b913f3c7d185cc(uint128_t a0[2], unsigned int a1, char a2, unsigned long long a3, char a4)
{
    int v0;  // [sp-0x158], Other Possible Types: unsigned long long
    int v1;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x148]
    int v3;  // [bp-0x138], Other Possible Types: unsigned long, unsigned long long
    char *v4;  // [sp-0x130], Other Possible Types: struct_2 *, struct_1 *, unsigned long long
    int v5;  // [bp-0x128], Other Possible Types: unsigned long long, unsigned long
    unsigned long v6;  // [sp-0x120], Other Possible Types: unsigned long long
    void* v7;  // [bp-0x118], Other Possible Types: char
    char v8;  // [bp-0x100], Other Possible Types: unsigned long, unsigned long long
    unsigned long v9;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v10;  // [bp-0xf0]
    int v11;  // [sp-0xe8]
    char v12;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xd0]
    unsigned long v14;  // [sp-0xc8], Other Possible Types: unsigned long long
    int v15;  // [sp-0xc0], Other Possible Types: unsigned long long
    void* v16;  // [sp-0xb8]
    int v17;  // [sp-0x58]
    int v18;  // [sp-0x48]
    unsigned long long v20;  // r14
    int v21;  // xmm0
    unsigned long long v22;  // r12
    struct_2 *v23;  // r15
    struct_1 *v24;  // rbp
    int v26;  // xmm0
    int v27;  // xmm0
    int v28;  // ymm0
    int v29;  // ymm0
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    char *v32;  // rax
    unsigned long long v33;  // r15
    unsigned long long v34;  // rbx
    struct_0 *v35;  // r15
    unsigned long long v36;  // rcx
    void* v37;  // rsi
    unsigned long long v38;  // rbx
    unsigned long long v40;  // rdi
    unsigned long long v42;  // rax
    int v43;  // xmm0
    int v44;  // xmm0
    unsigned long long v45;  // rax
    struct_1 *v46;  // rbp
    uint128_t v47[2];  // rax
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    int v50;  // xmm0
    struct_1 *v51;  // rbp
    int v52;  // xmm0
    struct_0 *v54;  // rbp
    unsigned long long v55;  // rbx

    v20 = a1;
    if ((unsigned short)v20)
    {
        if (!a4)
        {
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$alloc..vec..into_iter..IntoIter$LT$T$GT$$GT$$GT$::from_iter::hdd5fdf0458cafdfa(&v8, a0);
        }
        else
        {
            *((uint128_t *)&v18) = a0[1];
            *((uint128_t *)&v17) = a0[0];
            alloc::vec::in_place_collect::from_iter_in_place::ha2346d1d07668757(&v8, &v17);
        }
        v31 = *((long long *)&v10);
        v32 = 2;
        v33 = 0x8000000000000000;
        if (v31)
        {
            v36 = v9;
            v37 = 0;
            do
            {
                v40 = *((long long *)(16 + v36 + (char *)v37));
                if (v40 && *((char *)(*((long long *)(8 + v36 + (char *)v37)) + v40 - 1)) == 47)
                {
                    v33 = 1;
                    v32 = __rust_alloc(1, 1);
                    if (!v32)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    *(v32) = 9;
                    break;
                }
            } while ((v37 += 24, (v31 << 3) + (v31 << 4) != v37));
        }
        v2 = *((long long *)&v10);
        *((int128_t *)&v0) = *((int128_t *)&v8);
        v7 = a2;
        v3 = v33;
        v4 = v32;
        v5 = 1;
        v6 = v20 & 4294967295;
        term_grid::Grid$LT$T$GT$::new::h6bfd437bd4cf03c6(&v12, &v0, &v3, v20 & 4294967295);
        v0 = &v12;
        v1 = _$LT$term_grid..Grid$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h0b703fcfac9ee5f5;
        v3 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v4 = 1;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        v48 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(a3, &v3);
        if (!v48)
        {
            ::0x4b7950::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::hd94afad8fe4727a7(&v12);
        }
        else
        {
            v3 = 0x8000000000000000;
            v6 = v48;
            v47 = __rust_alloc(32, 8);
            if (v47)
            {
                v52 = *((int128_t *)&v3);
                v47[1] = *((int128_t *)&v5);
                *((void*)&v47[0]) = v52;
                ::0x4b7950::core::ptr::drop_in_place$LT$term_grid..Grid$LT$alloc..string..String$GT$$GT$::hd94afad8fe4727a7(&v12);
                return v47;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        goto LABEL_4d69e2;
    }
    v21 = a0[0];
    *((uint128_t *)&v5) = a0[1];
    v3 = v21;
    v22 = v6;
    v23 = v4;
    if (v23 == v22)
    {
LABEL_4d69b1:
        if (v5)
        {
            __rust_dealloc(v3);
            goto LABEL_4d69e2;
        }
    }
    v24 = (char *)&v23->field_8 + 8;
    v4 = v24;
    v26 = *((int128_t *)&(&v23->field_0)[1]);
    v11 = v26;
    if (v0 == 0x8000000000000000)
    {
        if (v22 != v24)
        {
            v34 = (v22 - (char *)v24) / 24;
            v35 = v23 + 1;
            do
            {
                v38 = v34;
                if (v35->field_0)
                    __rust_dealloc(v35->field_-8);
            } while ((v37 += 24, (v31 << 3) + (v31 << 4) != v37));
        }
        goto LABEL_4d69b1;
    }
    v0 = v23->field_0;
    v27 = v11;
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
    v1 = v27;
    v8 = &v0;
    v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v12 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
    v13 = 1;
    v16 = 0;
    v14 = &v8;
    v15 = 1;
    v30 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(a3, &v12);
    v0 = v0;
    if (v30)
    {
LABEL_4d6a74:
        v12 = 0x8000000000000000;
        v15 = v30;
        v47 = __rust_alloc(32, 8);
        if (!v47)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v50 = *((int128_t *)&v12);
        v47[1] = *((int128_t *)&v14);
        *((void*)&v47[0]) = v50;
        goto LABEL_4d6ac8;
    }
    if (v0)
        __rust_dealloc(v1);
    if (v24 != v22)
    {
        do
        {
            v24 = &v23[1].field_8;
            v42 = *((long long *)((char *)&v24->field_-10 + 8));
            v43 = v24->field_-10;
            v11 = v43;
            if (v0 == 0x8000000000000000)
            {
                v4 = v24;
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hff26882b3afcf2e3(&v3);
                goto LABEL_4d6cdc;
            }
            v0 = v42;
            v44 = v11;
            v1 = v44;
            v12 = &g_5ac848;
            v13 = 1;
            v14 = 8;
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
            *((int128_t *)&v15) = 0;
            v45 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(a3, &v12);
            if (v45)
            {
                v4 = v24;
                v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v45);
LABEL_4d6ac8:
                if (v0)
                    __rust_dealloc(v1);
                if (v22 != v51)
                {
                    v54 = &(&v51->field_-18)[1];
                    do
                    {
                        v55 = (v22 - (char *)v51) / 24;
                        if (v54->field_0)
                            __rust_dealloc(v54->field_-8);
                    } while ((v37 += 24, (v31 << 3) + (v31 << 4) != v37));
                }
                if (!v5)
                    return v47;
                __rust_dealloc(v3);
            }
            v8 = &v0;
            v9 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v12 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v13 = 1;
            v16 = 0;
            v14 = &v8;
            v15 = 1;
            v30 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(a3, &v12);
            if (v30)
            {
                v4 = v24;
                v0 = v0;
                goto LABEL_4d6a74;
            }
            if (v0)
                __rust_dealloc(v1);
            v46 = (char *)&v24->field_-10 + 8;
        } while (v24 != v22);
    }
    if (v5)
        __rust_dealloc(v3);
LABEL_4d6cdc:
    v12 = &g_5ac748;
    v13 = 1;
    v14 = 8;
    *((int128_t *)&v15) = 0;
    v49 = std::io::Write::write_fmt::h20bee4a5c9f3cc3a(a3, &v12);
    if (v49)
    {
        v47 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v49);
        return v47;
    }
LABEL_4d69e2:
    return 0;
}
