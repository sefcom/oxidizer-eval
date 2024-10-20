long long uu_uniq::Uniq::print_uniq::h3ce3c0c9bf8e6ff3(char a0[55], unsigned long long a1, struct_2 *a2, unsigned long long a3, struct_1 *a4)
{
    unsigned int v0;  // [sp-0x108]
    char v1;  // [sp-0xf2]
    char v2;  // [sp-0xf1]
    char v3;  // [sp-0xe1]
    int v4;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v5;  // [sp-0xd0]
    unsigned long long v6;  // [sp-0xc8]
    int v7;  // [bp-0xb8], Other Possible Types: char
    char v8;  // [bp-0xb0]
    unsigned long v9;  // [sp-0xa8], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x98]
    unsigned long long v12;  // [sp-0x90]
    unsigned int v13;  // [sp-0x84]
    char v14;  // [bp-0x80]
    char v15;  // [sp-0x70]
    int v16;  // [sp-0x68]
    unsigned long long v17;  // [sp-0x58]
    unsigned long long v18;  // [sp-0x50]
    char v19;  // [bp-0x48]
    char v20;  // [bp-0x40]
    char v21;  // [bp-0x38]
    unsigned long long v24;  // rax
    void* v25;  // r13
    int v27;  // xmm0
    int v28;  // ymm0
    int v29;  // ymm0
    unsigned long long v30;  // rbp
    void* v31;  // rbx
    unsigned long long v32;  // rax
    int v34;  // xmm0
    int v35;  // xmm0
    int v36;  // xmm0
    int v37;  // xmm0
    struct struct_0 **v38;  // rax
    unsigned long long v39;  // r14
    struct_2 *v40;  // r12
    struct struct_0 **v41;  // rax
    unsigned long long v42;  // rbx
    struct_2 *v43;  // r14
    struct struct_0 **v44;  // rax
    unsigned int v45;  // eax
    struct_1 *v46;  // r14
    struct_1 *v47;  // r14
    struct struct_0 **v49;  // rax
    struct struct_0 **v50;  // rax

    v15 = (a0[53] ? 0 : 10);
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e3e0455ced65f77(&v7, &v14);
    v24 = *((long long *)&v7);
    if (v24 == 9223372036854775809)
    {
        v25 = 0;
        goto LABEL_43def0;
    }
    else
    {
        v18 = 0x8000000000000000;
        if (v24 != 0x8000000000000000)
        {
            v13 = v15;
            v4 = v24;
            v5 = *((long long *)&v8);
            v6 = v9;
            v17 = *((long long *)&v15);
            v27 = *((int128_t *)&v14);
            v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
            v16 = v27;
            v3 = a0[50];
            v2 = a0[48];
            v1 = a0[49];
            v30 = 1;
            v31 = 0;
            while (true)
            {
                _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7e3e0455ced65f77(&v19, &v16);
                v32 = *((long long *)&v19);
                if (v32 == 9223372036854775809)
                    break;
                if (v32 == v18)
                {
                    v25 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v11);
                    goto LABEL_43e291;
                }
                v10 = v32;
                v11 = *((long long *)&v20);
                v12 = *((long long *)&v21);
                if ((char)uu_uniq::Uniq::cmp_keys::h116581db8bca43c7(a0, v5, v6, v11, v12))
                {
                    if ((!(!(!v2 & v30 == 1)) || !(!(!(v30 <= 1) & !v1))) && !((v0 = (unsigned int)((char)v31 & 1), v25 = uu_uniq::Uniq::print_line::h14cc0a4e43adaf56(a0, a3, a4, v5, v6, v30), v31 = v31 | -0x100 | (unsigned long long)((char)v31 & 1) | -0x100 | 1, !v25)))
                    {
                        goto LABEL_43e27a;
                    }
                    else
                    {
                        v9 = v12;
                        v35 = *((int128_t *)&v10);
                        v7 = v35;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
                        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v4);
                        v6 = v9;
                        v37 = (int128_t)v7;
                        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v37;
                        v4 = v37;
                        v30 = 1;
                        continue;
                    }
                }
                if (!v3)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v10);
                    v30 += 1;
                    continue;
                }
                v0 = (char)v31 & 1;
                v25 = uu_uniq::Uniq::print_line::h14cc0a4e43adaf56(a0, a3, a4, v5, v6, v30);
                if (!v25)
                {
                    v9 = v12;
                    v34 = *((int128_t *)&v10);
                    v7 = v34;
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v4);
                    v6 = v9;
                    v36 = (int128_t)v7;
                    v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
                    v4 = v36;
                    v30 += 1;
                    v31 = v31 | -0x100 | (char)v31 & 1 | -0x100 | 1;
                }
                else
                {
LABEL_43e27a:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v10);
LABEL_43e291:
                    v42 = (long long)v16;
                    v43 = (long long)(&v16)[8];
                    if (v43->field_0)
                        v44(v42);
                    if (v43->field_8)
                        __rust_dealloc(v42);
                    goto LABEL_43e2c4;
                }
            }
            v39 = (long long)v16;
            v40 = (long long)(&v16)[8];
            if (v40->field_0)
                v41(v39);
            if (v40->field_8)
                __rust_dealloc(v39);
            if (!(!v2 & v30 == 1) && !(!(v30 <= 1) & !v1))
            {
                v45 = a0[54];
                v46 = a4;
                if (!(!v45) && !(v45 == 3) || !(((char)v31 & 1)))
                    goto LABEL_43e31d;
            }
            else
            {
                v0 = (char)v31 & 1;
                v25 = uu_uniq::Uniq::print_line::h14cc0a4e43adaf56(a0, a3, a4, v5, v6, v30);
                if (v25)
                {
LABEL_43e25e:
LABEL_43e2c4:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v4);
                    goto LABEL_43e2d8;
                }
                v46 = a4;
                if (a0[54] && a0[54] != 3)
                {
LABEL_43e31d:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hb3bf8f3e9b5249f0();
                    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdcbb575cf4636837(&v4);
                    if (v47->field_0)
                        v50(a3);
                    if (!v47->field_8)
                        return 0;
                    __rust_dealloc(a3);
                }
            }
            v7 = v13;
            v25 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf455ae6aa2553cc5(v46->field_38(a3, &v7, 1));
            if (!(!v25))
                goto LABEL_43e25e;
            goto LABEL_43e31d;
        }
        else
        {
            v25 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v5);
LABEL_43def0:
            if (a2->field_0)
                v38(a1);
            if (a2->field_8)
                __rust_dealloc(a1);
        }
    }
LABEL_43e2d8:
    if (a4->field_0)
        v49(a3);
    if (a4->field_8)
        __rust_dealloc(a3);
    return v25;
}
