long long uu_cp::copy_source::ha83fca4ba2cc8af7(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long long a4, unsigned long long a5, char a6, struct_1 *a7, unsigned long long a8, unsigned long long a9, unsigned long long a10)
{
    char v0;  // [bp-0x168]
    unsigned long v1;  // [sp-0x160]
    struct_1 *v2;  // [sp-0x158], Other Possible Types: unsigned long long
    char v3;  // [bp-0x150]
    char v4;  // [bp-0x140]
    int v5;  // [sp-0x138]
    unsigned long long v6;  // [sp-0x128]
    int v7;  // [sp-0x118]
    unsigned long long v8;  // [sp-0x108]
    char v9;  // [bp-0xf8]
    char v10;  // [bp-0xf0]
    char v11;  // [bp-0xe8]
    char v12;  // [bp-0xe0]
    char v13;  // [bp-0xd8]
    char v14;  // [bp-0xd0]
    char v15;  // [bp-0xc0]
    char v16;  // [bp-0xb8]
    char v17;  // [bp-0xa8]
    int v18;  // [sp-0x98]
    unsigned long long v19;  // [sp-0x88]
    char v20;  // [bp-0x78]
    char v21;  // [bp-0x68]
    char v22;  // [bp-0x50]
    unsigned long long v23;  // rax
    int v24;  // xmm0
    int v25;  // xmm0
    int v26;  // ymm0
    int v27;  // ymm0
    int v28;  // xmm0
    struct_0 *v29;  // rax
    unsigned long long v30;  // rsi
    int v33;  // xmm0
    int v34;  // xmm0
    int v35;  // xmm1
    int v36;  // xmm2
    int v37;  // xmm1
    int v38;  // xmm2

    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        v23 = uu_cp::copydir::copy_directory::h28c1a7346111a6c9(a0, a1, a2, a3, a4, a5, a7, a8, a9, a10, v0);
        return v23;
    }
    v1 = a7->field_44;
    uu_cp::construct_dest_path::hfc66a1b24656cf26(&v13, a2, a3, a4, a5, a6, v0, v1);
    v23 = *((long long *)&v13);
    v24 = *((int128_t *)&v14);
    v18 = v24;
    v19 = *((long long *)&v15);
    if (v23 != 13)
    {
        v28 = *((int128_t *)&v16);
        a0->field_20 = *((int128_t *)&v17);
        *((void*)&a0->field_10) = v28;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v19;
        *((void*)&(&a0->field_0)[1]) = v18;
        a0->field_0 = v23;
    }
    else
    {
        v25 = v18;
        v27 = (v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25;
        v5 = v25;
        v6 = v19;
        uu_cp::copy_file::h3a721c0b700148ba(&v18, a1, a2, a3, (long long)(&v5)[8], v19, a7);
        v29 = a0;
        if ((char)v1)
        {
            v2 = a7;
            uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&v13, a2, a3, (long long)(&v5)[8], v6);
            ::0x4feef0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&v22, &v13);
            ::0x4fb5b0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v9, &v22);
            v30 = *((long long *)&v9);
            if (v30)
            {
                v2 = &v2->padding_0[48];
                do
                {
                    uucore::features::fs::canonicalize::hb17a5541a57984e7(&v3, v30, *((long long *)&v10), 0, 1);
                    if (*((long long *)&v3) != 0x8000000000000000)
                    {
                        v8 = *((long long *)&v4);
                        v33 = *((int128_t *)&v3);
                        v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                        v7 = v33;
                        uu_cp::copy_attributes::h0ca124c6c7245f78(&v13, (long long)(&v7)[8], *((long long *)&v4), *((long long *)&v11), *((long long *)&v12), v2);
                        if (*((int *)&v13) != 13)
                        {
                            v34 = *((int128_t *)&v13);
                            v35 = *((int128_t *)&(&v14)[8]);
                            v36 = *((int128_t *)&v16);
                            a0->field_20 = *((int128_t *)&v17);
                            *((void*)&a0->field_10) = v36;
                            *((void*)&a0->field_8) = v35;
                            *((void*)&a0->field_0) = v34;
                            ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v7);
                            if (*((long long *)&v3) == 0x8000000000000000)
                                ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v3);
                            ::0x4fc050::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v22);
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h24b7025726004fbd(&v18);
                            goto LABEL_50433a;
                        }
                        else
                        {
                            ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v7);
                            if (!(*((long long *)&v3) == 0x8000000000000000))
                                continue;
                        }
                    }
                    ::0x4fd190::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&v3);
                } while ((::0x4fb5b0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&v9, &v22), v30 = *((long long *)&v9), v30));
            }
            ::0x4fc050::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&v22);
            v29 = a0;
        }
        v37 = *((int128_t *)&v19);
        v38 = *((int128_t *)&v20);
        v29->field_20 = *((int128_t *)&v21);
        *((void*)&v29->field_10) = v38;
        *((void*)&v29->field_8) = v37;
        *((void*)&v29->field_0) = v18;
LABEL_50433a:
        v23 = ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&v5);
    }
    return v23;
}
