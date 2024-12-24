long long uu_dd::parseargs::Parser::parse_conv_flags::hb3f2de749a77b184(struct_0 *a0, char a1[176], unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x80]
    void* v2;  // [sp-0x78]
    unsigned long long v3;  // [sp-0x70]
    char v4;  // [bp-0x68]
    unsigned short v5;  // [sp-0x38]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbp
    unsigned long long v11;  // rbp
    struct_0 *v12;  // rax
    struct_0 *v13;  // rcx

    ::0x4d2770::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v4, 44, a2, a3);
    v2 = 0;
    v3 = a3;
    v5 = 1;
    v8 = ::0x4d2610::core::str::iter::SplitInternal$LT$P$GT$::next::he9a5c8d22706db8e(&v2);
    if (v8)
    {
        do
        {
            v9 = v11;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "ascii", 5))
            {
                a1[160] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "ebcdic", 6))
            {
                a1[161] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "ibm", 3))
            {
                a1[162] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "lcase", 5))
            {
                a1[164] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "ucase", 5))
            {
                a1[163] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "block", 5))
            {
                a1[165] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "unblock", 7))
            {
                a1[166] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "swab", 4))
            {
                a1[167] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "syncCyan", 4))
            {
                a1[168] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "noerror", 7))
            {
                a1[169] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "sparse", 6))
            {
                a1[170] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "exclu128", 4))
            {
                a1[171] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "nocreat", 7))
            {
                a1[172] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "notrunc", 7))
            {
                a1[173] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "fdatasync", 9))
            {
                a1[174] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2e373ef2965c6046(v8, v9, "fsync", 5))
            {
                a1[175] = 1;
            }
            else
            {
                ::0x4d2700::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h27500e3762b1ee82(&v0, v8, v9);
                v13 = a0;
                v13->field_0 = 6;
                *((int128_t *)&(&v13->field_0)[1]) = *((int128_t *)&v0);
                v12 = *((long long *)&v1);
                *((struct_0 **)((char *)&v13->field_8 + 8)) = v12;
                return v12;
            }
        } while ((v8 = ::0x4d2610::core::str::iter::SplitInternal$LT$P$GT$::next::he9a5c8d22706db8e(&v2), v8));
    }
    v12 = a0;
    v12->field_0 = 14;
    return v12;
}
