long long uu_csplit::split_name::SplitName::new::h87f8ff76ebff0e11(struct_1 *a0, unsigned long long a1[3], unsigned long long a2[3], struct_0 *a3)
{
    int v0;  // [sp-0x148]
    unsigned long long v1;  // [sp-0x138]
    int v2;  // [bp-0x128], Other Possible Types: char, unsigned long, unsigned long long
    int v3;  // [bp-0x120], Other Possible Types: unsigned long, unsigned long long
    int v4;  // [sp-0x118], Other Possible Types: unsigned long, unsigned long long
    int v5;  // [bp-0x110], Other Possible Types: char, unsigned long long
    void* v6;  // [sp-0x108]
    int v7;  // [sp-0x100]
    char v8;  // [bp-0xf8]
    int v9;  // [sp-0xf0]
    char v10;  // [bp-0xe8]
    int v11;  // [sp-0xe0]
    unsigned long long v12;  // [sp-0xd0]
    unsigned long v13;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long v14;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v15;  // [bp-0xb8], Other Possible Types: unsigned long long
    int v16;  // [sp-0xb0]
    int v17;  // [sp-0xa0]
    int v18;  // [sp-0x90]
    unsigned long long v19;  // [sp-0x80]
    int v20;  // [sp-0x78]
    char v21;  // [bp-0x68]
    int v22;  // [sp-0x58]
    unsigned long long v23;  // [sp-0x48]
    char v24;  // [bp-0x40]
    int v26;  // xmm0
    int v27;  // ymm0
    int v28;  // ymm0
    unsigned long long v29[3];  // 4096
    int v30;  // ymm0
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    int v34;  // xmm0
    unsigned long long v35;  // rax
    int v36;  // xmm0
    unsigned long long v38[3];  // 4096
    int v39;  // xmm0

    if (a1[0] != 0x8000000000000000)
    {
        v1 = a1[2];
        v26 = *((int128_t *)&a1[0]);
        v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
    }
    else
    {
        ::0x5bc250::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h94f12767d2fec322(&v2, "xx%0usrc/uu/csplit/src/split_name.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-automata-0.4.8/src/util/pool.rs", 2);
        v1 = v4;
        v28 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v2);
    }
    v0 = v26;
    v32 = a3->field_0;
    if (v14 == 0x8000000000000000)
    {
        v33 = 2;
        goto LABEL_5bc823;
    }
    else
    {
        v34 = *((int128_t *)&(&a3->field_0)[1]);
        v15 = v34;
        v14 = v32;
        uu_csplit::split_name::SplitName::new::_$u7b$$u7b$closure$u7d$$u7d$::haa712b86dde72eb0(&v2, &v14);
        v35 = v2;
        v36 = (int128_t)v3;
        *((int128_t *)&v20) = *((int128_t *)&v5);
        if (v35 != 12)
        {
            *((void*)&a0->field_20) = v20;
            *((unsigned long long *)&a0->padding_8[0]) = v35;
            *((void*)&a0->field_10) = v36;
            a0->field_0 = 0x8000000000000000;
        }
        else
        {
            v33 = (unsigned long long)(v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36);
LABEL_5bc823:
            v13 = v33;
            if (a2[0] == 0x8000000000000000)
            {
                v14 = &v13;
                v15 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v2 = &g_6e2ac8;
                v3 = 2;
                v6 = 0;
                v4 = &v14;
                v5 = 1;
                ::0x5bc160::core::option::Option$LT$T$GT$::map_or_else::h2e92ac92c49acc36(&v24, &v2);
            }
            v23 = v38[2];
            *((int128_t *)&v22) = *((int128_t *)&v38[0]);
            uucore::features::format::Format$LT$F$GT$::parse::ha6849e7f629f39e2(&v2, &v22, v29);
            if (v14 != 0x8000000000000000)
            {
                *((int128_t *)&v18) = *((int128_t *)&v8);
                v19 = *((long long *)&v10);
                *((int128_t *)&v16) = (int128_t)v4;
                *((int128_t *)&v17) = *((int128_t *)&v6);
                v14 = v2;
                v15 = v3;
                ::0x5bc250::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h94f12767d2fec322(&v20, (long long)(&v0)[8], v1);
                v12 = v19;
                v11 = v18;
                v9 = v17;
                v7 = v16;
                *((int128_t *)&v5) = *((int128_t *)&v14);
                v4 = *((long long *)&v21);
                v39 = v20;
                v2 = v39;
                a0->field_50 = (long long)(&v11)[8];
                a0->field_58 = v12;
                a0->field_40 = (int128_t)(&v9)[8];
                a0->field_30 = (int128_t)(&v7)[8];
                a0->field_20 = (int128_t)(&v5)[8];
                a0->field_10 = v4;
                *((unsigned long long *)&a0->padding_18[0]) = v5;
                *((void*)&a0->field_0) = v39;
                ::0x5bbfb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdda5c7f0d54d265f(&v0);
                return a0;
            }
            *((unsigned long long *)&a0->padding_8[0]) = (-0x100 | (int)v3 == 10) + 9;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..UnsignedInt$GT$$C$uucore..features..format..FormatError$GT$$GT$::haade0b5ad1102167(&v2);
        }
        ::0x5bbfb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdda5c7f0d54d265f(&v0);
        if (a2[0] != 0x8000000000000000)
        {
            ::0x5bbfb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdda5c7f0d54d265f(a2);
            return a0;
        }
        return a0;
    }
}
