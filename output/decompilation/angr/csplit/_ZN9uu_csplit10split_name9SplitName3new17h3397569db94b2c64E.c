long long uu_csplit::split_name::SplitName::new::h3397569db94b2c64(struct_2 *a0, struct_3 *a1, struct_1 *a2, struct_5 *a3)
{
    struct struct_0 **v0;  // [sp-0x148]
    unsigned long long v1;  // [sp-0x138]
    struct struct_0 **v2;  // [bp-0x128], Other Possible Types: char *, unsigned long
    char *v3;  // [sp-0x120]
    struct struct_0 **v4;  // [sp-0x118]
    unsigned long v5;  // [sp-0x118], Other Possible Types: unsigned long long
    struct struct_0 **v6;  // [bp-0x110], Other Possible Types: char, unsigned long long
    void* v7;  // [sp-0x108]
    struct struct_0 **v8;  // [sp-0x100]
    char v9;  // [bp-0xf8]
    struct struct_0 **v10;  // [sp-0xf0]
    char v11;  // [bp-0xe8]
    struct struct_0 **v12;  // [sp-0xe0]
    unsigned long long v13;  // [sp-0xd0]
    unsigned long v14;  // [sp-0xc8]
    char *v15;  // [sp-0xc0]
    char *v16;  // [sp-0xb8], Other Possible Types: struct struct_0 **, unsigned long long
    struct struct_0 **v17;  // [sp-0xb0]
    struct struct_0 **v18;  // [sp-0xa0]
    struct struct_0 **v19;  // [sp-0x90]
    unsigned long long v20;  // [sp-0x80]
    struct struct_0 **v21;  // [sp-0x78]
    char v22;  // [bp-0x68]
    int v23;  // [sp-0x58]
    unsigned long long v24;  // [sp-0x48]
    char v25;  // [bp-0x40]
    struct struct_0 **v27;  // xmm0
    int v28;  // ymm0
    int v29;  // ymm0
    int v30;  // ymm0
    char *v31;  // rax
    unsigned long long v32;  // rax
    struct struct_0 **v33;  // xmm0
    unsigned long long v34;  // rax
    struct struct_0 **v35;  // xmm0
    struct_1 *v36;  // r15
    struct struct_0 **v37;  // xmm0

    if (a1->field_0 != 0x8000000000000000)
    {
        v1 = a1->field_10;
        v27 = *((int128_t *)&a1->field_0);
        v29 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27;
    }
    else
    {
        ::0x5ba250::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e14181950c07716(&v2, "xx%0usrc/uu/csplit/src/split_name.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/regex-automata-0.4.8/src/util/pool.rs", 2);
        v1 = v5;
        v29 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v2);
    }
    v0 = v27;
    v31 = a3->field_0;
    if (v15 == 0x8000000000000000)
    {
        v32 = 2;
        goto LABEL_5ba823;
    }
    else
    {
        v33 = *((int128_t *)&a3->field_8);
        v16 = v33;
        v15 = v31;
        uu_csplit::split_name::SplitName::new::_$u7b$$u7b$closure$u7d$$u7d$::ha06daa8d9c661eb9(&v2, &v15);
        v34 = v2;
        v35 = *((int128_t *)&v4);
        *((int128_t *)&v21) = *((int128_t *)&v6);
        if (v34 != 12)
        {
            *((struct struct_0 ***)&a0->field_20) = v21;
            *((unsigned long long *)&a0->padding_8[0]) = v34;
            a0->field_10 = v35;
            a0->field_0 = 0x8000000000000000;
        }
        else
        {
            v32 = (unsigned long long)((v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v35);
LABEL_5ba823:
            v14 = v32;
            if (*((long long *)&a2->field_0) != 0x8000000000000000)
            {
                v36 = a2;
            }
            else
            {
                v15 = &v14;
                v16 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v2 = &g_6e1d08;
                v3 = 2;
                v7 = 0;
                v4 = &v15;
                v6 = 1;
                v36 = &v25;
                ::0x5ba160::core::option::Option$LT$T$GT$::map_or_else::h81a1a3b547a1f055(&v25, &v2);
            }
            v24 = v36->field_10;
            *((int128_t *)&v23) = *((int128_t *)&v36->field_0);
            uucore::features::format::Format$LT$F$GT$::parse::h75087b964e14f528(&v2, &v23);
            if (v15 != 0x8000000000000000)
            {
                *((int128_t *)&v19) = *((int128_t *)&v9);
                v20 = *((long long *)&v11);
                *((int128_t *)&v17) = *((int128_t *)&(&v4)[1]);
                *((int128_t *)&v18) = *((int128_t *)&v7);
                v15 = v2;
                v16 = v3;
                ::0x5ba250::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e14181950c07716(&v21, (&v0)[1], v1);
                v13 = v20;
                v12 = v19;
                v10 = v18;
                v8 = v17;
                *((int128_t *)&v6) = *((int128_t *)&v15);
                v5 = *((long long *)&v22);
                v37 = v21;
                v2 = v37;
                a0->field_50 = (&v12)[1];
                a0->field_58 = v13;
                a0->field_40 = *((int128_t *)&(&v10)[1]);
                a0->field_30 = *((int128_t *)&(&v8)[1]);
                a0->field_20 = *((int128_t *)&(&v6)[1]);
                a0->field_10 = v5;
                *((unsigned long long *)&a0->padding_18[0]) = v6;
                a0->field_0 = v37;
                ::0x5b9fb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&v0);
                return a0;
            }
            *((unsigned long long *)&a0->padding_8[0]) = ((int)v3 == 10) + 9;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..UnsignedInt$GT$$C$uucore..features..format..FormatError$GT$$GT$::hb5740be8a44ce43e(&v2);
        }
        ::0x5b9fb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&v0);
        if (*((long long *)&a2->field_0) != 0x8000000000000000)
        {
            ::0x5b9fb0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(a2);
            return a0;
        }
        return a0;
    }
}
