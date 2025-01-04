long long uu_numfmt::format::format_and_print_delimited::h8362ae98c5bd7b3f(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3[15], unsigned long a4, unsigned long a5)
{
    unsigned long v0;  // [sp-0x1e8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x1e0]
    int v2;  // [sp-0x1d8]
    unsigned long long v3[3];  // [sp-0x1c8]
    unsigned long v4;  // [sp-0x1b8], Other Possible Types: unsigned long long
    char v5;  // [bp-0x1b0]
    char v6;  // [bp-0x1a8]
    char v7;  // [bp-0x1a0]
    char *v8;  // [sp-0x198]
    unsigned long v9;  // [sp-0x190], Other Possible Types: unsigned long long
    char v10;  // [bp-0x180]
    char *v11;  // [sp-0x178]
    unsigned long long v12;  // [sp-0x170]
    char v13;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x160]
    struct struct_0 **v15;  // [sp-0x158]
    unsigned long long v16;  // [sp-0x150]
    void* v17;  // [sp-0x148]
    void* v18;  // [sp-0x100]
    unsigned long long v19;  // [sp-0xf8]
    unsigned short v20;  // [sp-0xf0]
    int v21;  // [sp-0xe8]
    unsigned long long v22[3];  // [sp-0xd8]
    char v23;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0xc8]
    unsigned long long v25;  // [sp-0xc0]
    int v26;  // [sp-0xb8]
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    int v32;  // ymm0
    unsigned long long v33;  // r14
    char v34;  // al
    unsigned long long v35;  // rsi
    unsigned int v36;  // r9
    char *v37;  // 4098
    int v38;  // xmm0
    int v39;  // xmm0
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rdx
    unsigned long long v42[3];  // rax
    unsigned long long v43[3];  // rcx

    if (a3[14] == 0x8000000000000000)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v4 = &a3[14];
    _$LT$$RF$alloc..string..String$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h282a0739900a3654(&v13, &a3[14], a1, a2);
    v18 = 0;
    v19 = a2;
    v20 = 1;
    core::iter::traits::iterator::Iterator::zip::h4a03188e88e105ee(&v23, &v13);
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::he3883890326b5614(&v5, &v23, v28);
    v29 = *((long long *)&v6);
    if (v29)
    {
        do
        {
            v33 = *((long long *)&v5);
            v0 = v29;
            v1 = *((long long *)&v7);
            v34 = uucore::features::ranges::contain::ha9677be85801ec1f(a3[12], a3[13], v33);
            if (v33 > 1)
            {
                v8 = &v4;
                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc19265c681ac20;
                v13 = &g_416000;
                v14 = 1;
                v17 = 0;
                v15 = &v8;
                v16 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v13, v35, v28);
            }
            if (!v34)
            {
                v8 = &v0;
                v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                v13 = &g_416000;
                v14 = 1;
                v17 = 0;
                v15 = &v8;
                v16 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v13, v35, v28);
            }
            else
            {
                uu_numfmt::format::format_string::h230c6a9d10700455(&v8, core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd29dae6a79270574(v0, v1), v28, a3, 0, v36);
                v37 = v8;
                v38 = *((int128_t *)&v9);
                v2 = v38;
                v3[0] = *((long long *)&v10);
                if (v37)
                {
                    v42 = v3;
                    v43 = a0;
                    v43[2] = v42;
                    *((void*)&v43[0]) = v2;
                    return v42;
                }
                v22[0] = v3;
                v39 = v2;
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
                v21 = v39;
                v11 = &v21;
                v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v13 = &g_416000;
                v14 = 1;
                v17 = 0;
                v15 = &v11;
                v16 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v13, v35, v28);
                ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v21);
            }
            _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::he3883890326b5614(&v5, &v23, v28);
            v29 = *((long long *)&v6);
        } while (v29);
    }
    v23 = &g_535ba0;
    v24 = 1;
    v25 = 8;
    *((int128_t *)&v26) = 0;
    std::io::stdio::_print::he918bceb0c89db46(&v23, v40, v41);
    v42 = a0;
    v42[0] = 0x8000000000000000;
    return v42;
}
