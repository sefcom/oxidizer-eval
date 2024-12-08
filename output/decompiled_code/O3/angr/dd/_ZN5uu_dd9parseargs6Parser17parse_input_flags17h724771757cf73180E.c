long long uu_dd::parseargs::Parser::parse_input_flags::h724771757cf73180(struct_0 *a0, char a1[192], unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x100]
    void* v1;  // [sp-0xf0]
    unsigned long long v2;  // [sp-0xe8]
    char v3;  // [bp-0xe0]
    unsigned short v4;  // [sp-0xb0]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x78]
    char v8;  // [bp-0x60]
    char v9;  // [bp-0x48]
    unsigned long long v11;  // rax
    unsigned long long v13;  // r13
    unsigned long long v15;  // r13
    struct_0 *v16;  // rax
    struct_0 *v18;  // rcx

    ::0x4d2770::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v3, 44, a2, a3);
    v1 = 0;
    v2 = a3;
    v4 = 1;
    v11 = ::0x4d2610::core::str::iter::SplitInternal$LT$P$GT$::next::he9a5c8d22706db8e(&v1);
    if (v11)
    {
        v0 = 11;
        do
        {
            v13 = v15;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "cio", 3))
            {
                ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v6, v11, v13);
                vvar_358{reg 24} = a0;
                v18->field_0 = v0;
                *((int128_t *)&(&v18->field_0)[1]) = *((int128_t *)&v6);
                *((long long *)((char *)&v18->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v16;
            }
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "direct", 6))
            {
                a1[177] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "directory", 9))
            {
                a1[178] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "dsync", 5))
            {
                a1[179] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "syncCyan", 4))
            {
                a1[180] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "nocache", 7))
            {
                a1[181] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "nonblock", 8))
            {
                a1[182] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "noatime", 7))
            {
                a1[183] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "noctty", 6))
            {
                a1[184] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "nofollow", 8))
            {
                a1[185] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "nolinks", 7))
            {
                ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v7, v11, v13);
                vvar_366{reg 24} = a0;
                v18->field_0 = v0;
                *((int128_t *)&(&v18->field_0)[1]) = *((int128_t *)&v7);
                *((long long *)((char *)&v18->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v16;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "binary", 6))
            {
                ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v8, v11, v13);
                vvar_374{reg 24} = a0;
                v18->field_0 = v0;
                *((int128_t *)&(&v18->field_0)[1]) = *((int128_t *)&v8);
                *((long long *)((char *)&v18->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v16;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "text", 4))
            {
                ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v9, v11, v13);
                v18 = a0;
                v18->field_0 = v0;
                *((int128_t *)&(&v18->field_0)[1]) = *((int128_t *)&v9);
                v16 = *((long long *)&(&v9)[16]);
                *((struct_0 **)((char *)&v18->field_8 + 8)) = v16;
                return v16;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "fullblock", 9))
            {
                a1[189] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "count_bytes", 11))
            {
                a1[190] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "skip_bytes", 10))
            {
                a1[191] = 1;
            }
            else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "append", 6) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v11, v13, "seek_bytes", 10))
            {
                v0 = 5;
                ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v5, v11, v13);
                vvar_382{reg 24} = a0;
                v18->field_0 = v0;
                *((int128_t *)&(&v18->field_0)[1]) = *((int128_t *)&v5);
                *((long long *)((char *)&v18->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v16;
            }
            v11 = ::0x4d2610::core::str::iter::SplitInternal$LT$P$GT$::next::he9a5c8d22706db8e(&v1);
        } while (v11);
    }
    v16 = a0;
    v16->field_0 = 14;
    return v16;
}
