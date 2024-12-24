long long uu_numfmt::format::format_and_print_whitespace::h527e5d70ed6b96b0(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3[24])
{
    unsigned long v0;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x148]
    unsigned long long v2;  // [sp-0x140]
    int v3;  // [sp-0x138], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x130]
    unsigned long v5;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x110]
    int v7;  // [sp-0x108]
    unsigned long long v8;  // [sp-0xf8]
    unsigned long long v9;  // [sp-0xe8]
    int v10;  // [sp-0xe0]
    unsigned long v11;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0xc0]
    unsigned long long v14;  // [sp-0xb8]
    unsigned long v15;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xa8]
    char v17;  // [bp-0xa0]
    char v18;  // [bp-0x98]
    char v19;  // [bp-0x90]
    char v20;  // [bp-0x88]
    int v21;  // [sp-0x78]
    unsigned long long v22;  // [sp-0x68]
    char v23;  // [bp-0x60]
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v28;  // r12
    unsigned long long v29;  // r13
    int v30;  // ymm0
    unsigned long long v31;  // rbx
    int v32;  // xmm0
    unsigned long long v33;  // r14
    unsigned long long v34;  // r12
    unsigned long long v35;  // r14
    unsigned long long v36;  // rsi
    unsigned long long v37;  // 4098
    int v38;  // xmm0
    int v39;  // xmm0
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rax

    core::iter::traits::iterator::Iterator::zip::he3cbe342b500c72e(&v23, a1, a2);
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::hd7c54c4fd5cb10de(&v17, &v23, v25);
    v26 = *((long long *)&v18);
    if (v26)
    {
        v28 = a3[13];
        v29 = a3[23];
        v9 = v28;
        do
        {
            v31 = *((long long *)&v17);
            v5 = v26;
            v6 = *((long long *)&v19);
            v32 = *((int128_t *)&v20);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
            v10 = v32;
            if (!(char)uucore::features::ranges::contain::hc9c832da00755304(a3[12], v28, v31))
            {
                v11 = &v5;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h44a4b1084bccec0f;
                v13 = &v10;
                v14 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h44a4b1084bccec0f;
                v0 = &g_41a4f0;
                v1 = 2;
                v4 = 0;
                v2 = &v11;
                v3 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&v0, v36, v25);
            }
            else
            {
                v33 = v6;
                if (v31 > 1)
                {
                    v0 = &g_536688;
                    v1 = 1;
                    v2 = 8;
                    v30 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((int128_t *)&v3) = 0;
                    std::io::stdio::_print::he918bceb0c89db46(&v0, v36, v25);
                    if (!::0x4c2750::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, v5, v6))
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    v34 = v9;
                }
                uu_numfmt::format::format_string::hd7e4104e4ec65e44(&v11, (long long)v10, (long long)(&v10)[8], a3, !v29 & v33, v35 + (long long)(&v10)[8]);
                v37 = v11;
                v38 = *((int128_t *)&v12);
                v7 = v38;
                v8 = v14;
                if (v37)
                {
                    v43 = v8;
                    a0[2] = v43;
                    *((void*)&a0[0]) = v7;
                    return v43;
                }
                v22 = v8;
                v39 = v7;
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v21 = v39;
                v15 = &v21;
                v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v0 = &g_416200;
                v1 = 1;
                v4 = 0;
                v2 = &v15;
                v3 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v0, v36, v25);
                ::0x4c23e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v21);
            }
        } while ((_$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::hd7c54c4fd5cb10de(&v17, &v23, v40), v26 = *((long long *)&v18), v26));
    }
    v0 = &g_536678;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    std::io::stdio::_print::he918bceb0c89db46(&v0, v41, v42);
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
