long long uu_dd::parseargs::Parser::parse_conv_flags::h2792d84d78d66501(struct_0 *a0, char a1[176], unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x90]
    char v1;  // [bp-0x80]
    void* v2;  // [sp-0x78]
    unsigned long long v3;  // [sp-0x70]
    char v4;  // [bp-0x68]
    unsigned short v5;  // [sp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned long v9;  // rdx
    unsigned long long v10;  // rbp
    struct_0 *v11;  // rax
    struct_0 *v12;  // rcx

    ::0x4d2600::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v4, 44, a2, a3);
    v2 = 0;
    v3 = a3;
    v5 = 1;
    v7 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v2);
    if (v7)
    {
        v8 = v7;
        v10 = v9;
        do
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "ascii", 5))
            {
                a1[160] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "ebcdic", 6))
            {
                a1[161] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "ibm", 3))
            {
                a1[162] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "lcase", 5))
            {
                a1[164] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "ucase", 5))
            {
                a1[163] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "block", 5))
            {
                a1[165] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "unblock", 7))
            {
                a1[166] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "swab", 4))
            {
                a1[167] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "syncCyan", 4))
            {
                a1[168] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "noerror", 7))
            {
                a1[169] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "sparse", 6))
            {
                a1[170] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "exclu128", 4))
            {
                a1[171] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "nocreat", 7))
            {
                a1[172] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "notrunc", 7))
            {
                a1[173] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "fdatasync", 9))
            {
                a1[174] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v8, v10, "fsync", 5))
            {
                a1[175] = 1;
            }
            else
            {
                ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v0, v8, v10);
                v12 = a0;
                v12->field_0 = 6;
                *((int128_t *)&(&v12->field_0)[1]) = *((int128_t *)&v0);
                v11 = *((long long *)&v1);
                *((struct_0 **)((char *)&v12->field_8 + 8)) = v11;
                return v11;
            }
        } while ((v8 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v2), v10 = v9, v8));
    }
    v11 = a0;
    v11->field_0 = 14;
    return v11;
}
