long long uu_csplit::split_name::SplitName::new::h3397569db94b2c64(struct_3 *a0, struct_1 *a1, struct_1 *a2, struct_4 *a3)
{
    struct struct_0 **v0;  // [sp-0x148]
    unsigned long long v1;  // [sp-0x138]
    struct struct_0 **v2;  // [bp-0x128], Other Possible Types: char *, unsigned long
    struct struct_0 **v3;  // [bp-0x120], Other Possible Types: char *
    struct struct_0 **v4;  // [sp-0x118], Other Possible Types: unsigned long, unsigned long long
    struct struct_0 **v5;  // [bp-0x110], Other Possible Types: char, unsigned long long
    void* v6;  // [sp-0x108]
    struct struct_0 **v7;  // [sp-0x100]
    char v8;  // [bp-0xf8]
    struct struct_0 **v9;  // [sp-0xf0]
    char v10;  // [bp-0xe8]
    struct struct_0 **v11;  // [sp-0xe0]
    unsigned long long v12;  // [sp-0xd0]
    unsigned long v13;  // [sp-0xc8], Other Possible Types: unsigned long long
    char *v14;  // [sp-0xc0]
    char *v15;  // [bp-0xb8], Other Possible Types: struct struct_0 **, unsigned long long
    struct struct_0 **v16;  // [sp-0xb0]
    struct struct_0 **v17;  // [sp-0xa0]
    struct struct_0 **v18;  // [sp-0x90]
    unsigned long long v19;  // [sp-0x80]
    struct struct_0 **v20;  // [sp-0x78]
    char v21;  // [bp-0x68]
    struct struct_0 **v22;  // [sp-0x58]
    unsigned long long v23;  // [sp-0x48]
    char v24;  // [bp-0x40]
    struct struct_0 **v26;  // xmm0
    int v27;  // ymm0
    int v28;  // ymm0
    struct_1 *v29;  // 4096
    int v30;  // ymm0
    char *v32;  // rax
    unsigned long long v33;  // rax
    struct struct_0 **v34;  // xmm0
    unsigned long long v35;  // rax
    struct struct_0 **v36;  // xmm0
    struct_1 *v38;  // 4096
    struct struct_0 **v39;  // xmm0

    if (a1->field_0 != 0x8000000000000000)
    {
        v1 = a1->field_10;
        v26 = *((int128_t *)&a1->field_0);
        v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26;
        v29 = a2;
    }
    else
    {
        ::0x5ba250::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e14181950c07716(&v2, "xx%0usrc/uu/csplit/src/split_name.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-automata-0.4.8/src/util/pool.rs", 2);
        v1 = v4;
        v28 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v2);
    }
    v0 = v26;
    v32 = a3->field_0;
    if (v14 == 0x8000000000000000)
    {
        v33 = 2;
        goto LABEL_5ba823;
    }
    else
    {
        v34 = *((int128_t *)&a3->field_8);
        v15 = v34;
        v14 = v32;
        uu_csplit::split_name::SplitName::new::_$u7b$$u7b$closure$u7d$$u7d$::ha06daa8d9c661eb9(&v2, &v14);
        v35 = v2;
        v36 = *((int128_t *)&v3);
        *((int128_t *)&v20) = *((int128_t *)&v5);
        if (v35 != 12)
        {
            *((struct struct_0 ***)&a0->field_20) = v20;
            *((unsigned long long *)&a0->padding_8[0]) = v35;
            a0->field_10 = v36;
            a0->field_0 = 0x8000000000000000;
        }
        else
        {
            v33 = (unsigned long long)(v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36);
LABEL_5ba823:
            v13 = v33;
            if (a2->field_0 != 0x8000000000000000)
            {
                v38 = a2;
            }
            else
            {
                v14 = &v13;
                v15 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v2 = &g_6e1d08;
                v3 = 2;
                v6 = 0;
                v4 = &v14;
                v5 = 1;
                ::0x5ba160::core::option::Option$LT$T$GT$::map_or_else::h81a1a3b547a1f055(&v24, &v2);
                v38 = &v24;
            }
            v23 = v38->field_10;
            *((int128_t *)&v22) = *((int128_t *)&v38->field_0);
            uucore::features::format::Format$LT$F$GT$::parse::h75087b964e14f528(&v2, &v22, v29);
            if (v14 != 0x8000000000000000)
            {
                *((int128_t *)&v18) = *((int128_t *)&v8);
                v19 = *((long long *)&v10);
                *((int128_t *)&v16) = *((int128_t *)&v4);
                *((int128_t *)&v17) = *((int128_t *)&v6);
                v14 = v2;
                v15 = v3;
                ::0x5ba250::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e14181950c07716(&v20, (&v0)[1], v1);
                v12 = v19;
                v11 = v18;
                v9 = v17;
                v7 = v16;
                *((int128_t *)&v5) = *((int128_t *)&v14);
                v4 = *((long long *)&v21);
                v39 = v20;
                v2 = v39;
                a0->field_50 = (&v11)[1];
                a0->field_58 = v12;
                a0->field_40 = *((int128_t *)&(&v9)[1]);
                a0->field_30 = *((int128_t *)&(&v7)[1]);
                a0->field_20 = *((int128_t *)&(&v5)[1]);
                a0->field_10 = v4;
                *((unsigned long long *)&a0->padding_18[0]) = v5;
                a0->field_0 = v39;
                ::0x5b9fb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&v0);
                return a0;
            }
            *((unsigned long long *)&a0->padding_8[0]) = (-0x100 | (int)v3 == 10) + 9;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..UnsignedInt$GT$$C$uucore..features..format..FormatError$GT$$GT$::hb5740be8a44ce43e(&v2);
        }
        ::0x5b9fb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&v0);
        if (a2->field_0 != 0x8000000000000000)
        {
            ::0x5b9fb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(a2);
            return a0;
        }
        return a0;
    }
}
