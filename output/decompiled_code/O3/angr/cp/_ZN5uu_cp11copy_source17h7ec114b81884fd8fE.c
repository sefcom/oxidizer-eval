long long uu_cp::copy_source::h7ec114b81884fd8f(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x188]
    char v1;  // [bp-0x168]
    unsigned long long v2;  // [sp-0x160]
    unsigned long long v3;  // [sp-0x158]
    char v4;  // [bp-0x150]
    char v5;  // [bp-0x140]
    int v6;  // [sp-0x138]
    unsigned long long v7;  // [sp-0x128]
    int v8;  // [sp-0x118]
    unsigned long long v9;  // [sp-0x108]
    char v10;  // [bp-0xf8]
    char v11;  // [bp-0xf0]
    char v12;  // [bp-0xe8]
    char v13;  // [bp-0xe0]
    char v14;  // [bp-0xd8]
    char v15;  // [bp-0xd0]
    char v16;  // [bp-0xc0]
    char v17;  // [bp-0xb8]
    char v18;  // [bp-0xa8]
    int v19;  // [sp-0x98]
    unsigned long long v20;  // [sp-0x88]
    char v21;  // [bp-0x78]
    char v22;  // [bp-0x68]
    char v23;  // [bp-0x50]
    unsigned long v24;  // [bp+0x8]
    char v25;  // [bp+0x10]
    char v26;  // [bp+0x18]
    char v27;  // [bp+0x20]
    char v28;  // [bp+0x28]
    unsigned long long v29;  // rax
    int v30;  // xmm0
    int v31;  // xmm0
    int v32;  // ymm0
    int v33;  // ymm0
    int v34;  // xmm0
    unsigned long long v35;  // rsi
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // xmm1
    int v41;  // xmm2
    int v42;  // xmm1
    int v43;  // xmm2
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r8
    unsigned long long v48;  // r9

    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3))
    {
        v29 = uu_cp::copydir::copy_directory::ha2fa7ad6bf3b6847(a0, a1, a2, a3, a4, a5, *((long long *)&v25), *((long long *)&v26), *((long long *)&v27), *((long long *)&v28), v1);
        return v29;
    }
    v2 = *((int *)(*((long long *)&v25) + 68));
    uu_cp::construct_dest_path::h4514754e39be2e9a(&v14, a2, a3, a4, a5, v24);
    v29 = *((long long *)&v14);
    v30 = *((int128_t *)&v15);
    v19 = v30;
    v20 = *((long long *)&v16);
    if (v29 != 13)
    {
        v34 = *((int128_t *)&v17);
        a0->field_20 = *((int128_t *)&v18);
        *((void*)&a0->field_10) = v34;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v20;
        *((void*)&(&a0->field_0)[1]) = v19;
        a0->field_0 = v29;
    }
    else
    {
        v31 = v19;
        v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
        v6 = v31;
        v7 = v20;
        v0 = *((long long *)&v25);
        uu_cp::copy_file::h137dae572520ab74(&v19, a1, a2, a3, (long long)(&v6)[8], v20, v0, *((long long *)&v26), *((long long *)&v27), *((long long *)&v28), v1);
        if ((char)v2)
        {
            v3 = v0;
            uu_cp::aligned_ancestors::h1fdc169ff101e976(&v14, a2, a3, (long long)(&v6)[8], v7);
            ::0x4fe5c0::_$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7a50bae6b2b5697d(&v23, &v14);
            ::0x4facc0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v10, &v23);
            v35 = *((long long *)&v10);
            if (v35)
            {
                v3 += 48;
                do
                {
                    uucore::features::fs::canonicalize::h231f0839fd3443a3(&v4, v35, *((long long *)&v11), 0, 1);
                    if (*((long long *)&v4) != 0x8000000000000000)
                    {
                        v9 = *((long long *)&v5);
                        v38 = *((int128_t *)&v4);
                        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                        v8 = v38;
                        uu_cp::copy_attributes::h42d0749b6e7cbf07(&v14, (long long)(&v8)[8], *((long long *)&v5), *((long long *)&v12), *((long long *)&v13), v3);
                        if (*((int *)&v14) != 13)
                        {
                            v39 = *((int128_t *)&v14);
                            v40 = *((int128_t *)&(&v15)[8]);
                            v41 = *((int128_t *)&v17);
                            a0->field_20 = *((int128_t *)&v18);
                            *((void*)&a0->field_10) = v41;
                            *((void*)&a0->field_8) = v40;
                            *((void*)&a0->field_0) = v39;
                            ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v8);
                            if (*((long long *)&v4) == 0x8000000000000000)
                                ::0x4fc860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h3d4a60cf871713bb(&v4);
                            ::0x4fb720::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::hbe19afc3d61841ac(&v23);
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::hc36d68e1d3c06a3b(&v19, v44, v45, v46, v47, v48, v3 + 48, *((long long *)&v4), *((long long *)&(&v4)[8]));
                            goto LABEL_5039ba;
                        }
                        else
                        {
                            ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v8);
                            if ((::0x4facc0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v10, &v23), v35 = *((long long *)&v10), v35))
                                continue;
                        }
                    }
                    ::0x4fc860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h3d4a60cf871713bb(&v4);
                } while ((::0x4facc0::_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a589aaa65f457b5(&v10, &v23), v35 = *((long long *)&v10), v35));
            }
            ::0x4fb720::core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::hbe19afc3d61841ac(&v23);
        }
        v42 = *((int128_t *)&v20);
        v43 = *((int128_t *)&v21);
        a0->field_20 = *((int128_t *)&v22);
        *((void*)&a0->field_10) = v43;
        *((void*)&a0->field_8) = v42;
        *((void*)&a0->field_0) = v19;
LABEL_5039ba:
        v29 = ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v6);
    }
    return v29;
}
