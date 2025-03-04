long long uu_dd::parseargs::Parser::parse_input_flags::h12f922d383d81c43(struct_0 *a0, char a1[192], unsigned long long a2, unsigned long long a3)
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
    unsigned long long v12;  // rbx
    unsigned long v13;  // rdx
    unsigned long long v14;  // r13
    struct_0 *v15;  // rax
    struct_0 *v17;  // rcx

    ::0x4d2600::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v3, 44, a2, a3);
    v1 = 0;
    v2 = a3;
    v4 = 1;
    v11 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v1);
    if (v11)
    {
        v12 = v11;
        v14 = v13;
        v0 = 11;
        do
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "cio", 3))
            {
                ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v6, v12, v14);
                vvar_352{reg 24} = a0;
                v17->field_0 = v0;
                *((int128_t *)&(&v17->field_0)[1]) = *((int128_t *)&v6);
                *((long long *)((char *)&v17->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v15;
            }
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "direct", 6))
            {
                a1[177] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "directory", 9))
            {
                a1[178] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "dsync", 5))
            {
                a1[179] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "syncCyan", 4))
            {
                a1[180] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "nocache", 7))
            {
                a1[181] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "nonblock", 8))
            {
                a1[182] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "noatime", 7))
            {
                a1[183] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "noctty", 6))
            {
                a1[184] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "nofollow", 8))
            {
                a1[185] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "nolinks", 7))
            {
                ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v7, v12, v14);
                vvar_360{reg 24} = a0;
                v17->field_0 = v0;
                *((int128_t *)&(&v17->field_0)[1]) = *((int128_t *)&v7);
                *((long long *)((char *)&v17->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v15;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "binary", 6))
            {
                ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v8, v12, v14);
                vvar_368{reg 24} = a0;
                v17->field_0 = v0;
                *((int128_t *)&(&v17->field_0)[1]) = *((int128_t *)&v8);
                *((long long *)((char *)&v17->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v15;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "text", 4))
            {
                ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v9, v12, v14);
                v17 = a0;
                v17->field_0 = v0;
                *((int128_t *)&(&v17->field_0)[1]) = *((int128_t *)&v9);
                v15 = *((long long *)&(&v9)[16]);
                *((struct_0 **)((char *)&v17->field_8 + 8)) = v15;
                return v15;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "fullblock", 9))
            {
                a1[189] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "count_bytes", 11))
            {
                a1[190] = 1;
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "skip_bytes", 10))
            {
                a1[191] = 1;
            }
            else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "append", 6) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v12, v14, "seek_bytes", 10))
            {
                v0 = 5;
                ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v5, v12, v14);
                vvar_376{reg 24} = a0;
                v17->field_0 = v0;
                *((int128_t *)&(&v17->field_0)[1]) = *((int128_t *)&v5);
                *((long long *)((char *)&v17->field_8 + 8)) = *((long long *)&(&v9)[16]);
                return v15;
            }
            v12 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v1);
            v14 = v13;
        } while (v12);
    }
    v15 = a0;
    v15->field_0 = 14;
    return v15;
}
