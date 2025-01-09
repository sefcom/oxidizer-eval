long long uu_test::files::h2d66ad67db33f3bc(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x258], Other Possible Types: unsigned long, unsigned long long
    unsigned long v1;  // [sp-0x250], Other Possible Types: unsigned long long
    char v2;  // [bp-0x248], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [sp-0x240]
    char v4;  // [bp-0x238]
    char v5;  // [bp-0x230]
    char v6;  // [bp-0x228]
    char v7;  // [bp-0x218]
    char v8;  // [bp-0x208]
    char v9;  // [bp-0x1f8]
    char v10;  // [bp-0x1e8]
    char v11;  // [bp-0x1d8]
    char v12;  // [bp-0x1c8]
    char v13;  // [bp-0x1b8]
    unsigned long long v14;  // [sp-0x1a8]
    unsigned long long v15;  // [sp-0x1a0]
    int v16;  // [sp-0x198]
    int v17;  // [sp-0x188]
    unsigned long long v18;  // [sp-0x178]
    unsigned long long v19;  // [sp-0x170]
    int v20;  // [sp-0x168]
    int v21;  // [sp-0x158]
    int v22;  // [sp-0x148]
    int v23;  // [sp-0x138]
    int v24;  // [sp-0x128]
    int v25;  // [sp-0x118]
    int v26;  // [sp-0x108]
    int v27;  // [sp-0xf8]
    int v28;  // [sp-0xe8]
    int v29;  // [sp-0xd8]
    unsigned long long v30;  // [sp-0xc8]
    unsigned long long v31;  // [sp-0xc0]
    int v32;  // [sp-0xb8]
    int v33;  // [sp-0xa8]
    int v34;  // [sp-0x98]
    int v35;  // [sp-0x88]
    int v36;  // [sp-0x78]
    int v37;  // [sp-0x68]
    int v38;  // [sp-0x58]
    int v39;  // [sp-0x48]
    unsigned long long v40;  // [bp+0x8]
    unsigned long long v41;  // rax
    unsigned long long v42;  // r15
    unsigned long long v43;  // r12
    unsigned long long v46;  // rax
    char v47;  // cl

    std::fs::metadata::h59562c409af00ed3(&v0, a1, a2);
    if (*((int *)&v0) != 2)
    {
        *((int128_t *)&v17) = *((int128_t *)&v2);
        *((int128_t *)&v16) = *((int128_t *)&v0);
        *((int128_t *)&v20) = *((int128_t *)&v6);
        *((int128_t *)&v21) = *((int128_t *)&v7);
        *((int128_t *)&v22) = *((int128_t *)&v8);
        *((int128_t *)&v23) = *((int128_t *)&v9);
        *((int128_t *)&v24) = *((int128_t *)&v10);
        *((int128_t *)&v25) = *((int128_t *)&v11);
        *((int128_t *)&v26) = *((int128_t *)&v12);
        *((int128_t *)&v27) = *((int128_t *)&v13);
        v18 = *((long long *)&v4);
        v19 = *((long long *)&v5);
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&v0);
        std::fs::metadata::h59562c409af00ed3(&v0, a3, a4);
        if (*((int *)&v0) != 2)
        {
            *((int128_t *)&v29) = *((int128_t *)&v2);
            *((int128_t *)&v28) = *((int128_t *)&v0);
            *((int128_t *)&v32) = *((int128_t *)&v6);
            *((int128_t *)&v33) = *((int128_t *)&v7);
            *((int128_t *)&v34) = *((int128_t *)&v8);
            *((int128_t *)&v35) = *((int128_t *)&v9);
            *((int128_t *)&v36) = *((int128_t *)&v10);
            *((int128_t *)&v37) = *((int128_t *)&v11);
            *((int128_t *)&v38) = *((int128_t *)&v12);
            *((int128_t *)&v39) = *((int128_t *)&v13);
            v30 = *((long long *)&v4);
            v31 = *((long long *)&v5);
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&v0);
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a5, v40);
            if (v0)
            {
                v0 = 1;
                v1 = a5;
                v2 = v40;
                v3 = 1;
                v41 = ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&a0->field_8, &v0);
                a0->field_0 = 4;
                return v41;
            }
            v15 = v1;
            v14 = v2;
            v41 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v1, v14, "-ef", 3);
            if ((char)v41)
            {
                a0->field_8 = !(v18 ^ v30) && !(v19 ^ v31);
                a0->field_0 = 7;
                return v41;
            }
            v42 = v15;
            v43 = v14;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v42, v43, "-nt", 3))
            {
                std::fs::Metadata::modified::h6f16921acf618ae6(&v0, &v16);
                std::fs::Metadata::modified::h6f16921acf618ae6(&v0, &v28);
                v41 = 255;
                v47 = (core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&v0, &g_514c98) < core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&v0, &g_514cb0) ? 255 : (char)((-0x100 | core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&v0, &g_514c98) != core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&v0, &g_514cb0)) & 4294967295 & 4294967295));
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h63b5f1612d3f588e(v42, v43, "-ot", 3))
            {
                std::fs::Metadata::modified::h6f16921acf618ae6(&v0, &v16);
                v46 = core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&v0, &g_514c68);
                std::fs::Metadata::modified::h6f16921acf618ae6(&v0, &v28);
                v41 = core::result::Result$LT$T$C$E$GT$::unwrap::ha257e6c7d5c79a00(&v0, &g_514c80);
            }
            else
            {
                vvar_445{stack -600} = 1;
                vvar_446{stack -592} = a5;
                vvar_447{stack -584} = v40;
                vvar_448{stack -576} = 1;
                ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&a0->field_8, &v0);
                a0->field_0 = 4;
                return v41;
            }
            a0->field_8 = !(v18 ^ v30) && !(v19 ^ v31);
            a0->field_0 = 7;
            return v41;
        }
    }
    a0->field_8 = 0;
    a0->field_0 = 7;
    v41 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h7bbe7bfe3f1c8d8f(&v0);
    return v41;
}
