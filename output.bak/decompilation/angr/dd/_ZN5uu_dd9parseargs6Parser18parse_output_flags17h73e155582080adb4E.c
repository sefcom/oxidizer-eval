long long uu_dd::parseargs::Parser::parse_output_flags::h73e155582080adb4(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [sp-0x130]
    char *v1;  // [sp-0x128]
    char *v2;  // [sp-0x120]
    char *v3;  // [sp-0x118]
    char *v4;  // [sp-0x110]
    char *v5;  // [sp-0x108]
    char *v6;  // [sp-0x100]
    unsigned long long v7;  // [sp-0xf0]
    char *v8;  // [sp-0xe8]
    char *v9;  // [sp-0xe0]
    char v10;  // [bp-0xd8]
    char v11;  // [bp-0xc8]
    char v12;  // [bp-0xc0]
    char v13;  // [bp-0xb0]
    char v14;  // [bp-0xa8]
    char v15;  // [bp-0x98]
    char v16;  // [bp-0x90]
    char v17;  // [bp-0x80]
    void* v18;  // [sp-0x78]
    unsigned long long v19;  // [sp-0x70]
    char v20;  // [bp-0x68]
    unsigned short v21;  // [sp-0x38]
    unsigned long long v23;  // rax
    unsigned long long v27;  // r13
    unsigned long long v29;  // r13
    char *v30;  // r12
    struct_0 *v31;  // rbx
    struct_0 *v32;  // rax
    struct_0 *v33;  // rcx
    struct_0 *v34;  // rcx
    struct_0 *v35;  // rcx
    struct_0 *v36;  // rcx

    ::0x4d2600::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v20, 44, a2, a3);
    v18 = 0;
    v7 = a3;
    v19 = a3;
    v21 = 1;
    v23 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v18);
    if (v23)
    {
        v0 = a1 + 207;
        v1 = a1 + 193;
        v2 = a1 + 203;
        v3 = a1 + 202;
        v4 = a1 + 201;
        v5 = a1 + 200;
        v6 = a1 + 199;
        v8 = a1 + 198;
        v9 = a1 + 197;
        do
        {
            v27 = v29;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "cio", 3))
            {
                v31 = a0;
                v32 = ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&(&v31->field_0)[1], a2, v7);
                v31->field_0 = 11;
                return v32;
            }
            v30 = a1 + 195;
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "direct", 6))
            {
LABEL_4d3ce0:
                *(v30) = 1;
            }
            else
            {
                v30 = a1 + 196;
                if ((v23 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v18), v23))
                    goto LABEL_4d3ce0;
                v30 = v8;
                if ((v23 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v18), v23))
                    goto LABEL_4d3ce0;
                v30 = v5;
                if ((v23 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v18), v23))
                    goto LABEL_4d3ce0;
                v30 = v3;
                if ((v23 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v18), v23))
                    goto LABEL_4d3ce0;
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "nolinks", 7))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v12, v23, v27);
                    v33 = a0;
                    v33->field_0 = 11;
                    *((int128_t *)&(&v33->field_0)[1]) = *((int128_t *)&v12);
                    v32 = *((long long *)&v13);
                    *((struct_0 **)((char *)&v33->field_8 + 8)) = v32;
                    return v32;
                }
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "binary", 6))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v14, v23, v27);
                    v34 = a0;
                    v34->field_0 = 11;
                    *((int128_t *)&(&v34->field_0)[1]) = *((int128_t *)&v14);
                    v32 = *((long long *)&v15);
                    *((struct_0 **)((char *)&v34->field_8 + 8)) = v32;
                    return v32;
                }
                if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "text", 4))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v16, v23, v27);
                    v36 = a0;
                    v36->field_0 = 11;
                    *((int128_t *)&(&v36->field_0)[1]) = *((int128_t *)&v16);
                    v32 = *((long long *)&v17);
                    *((struct_0 **)((char *)&v36->field_8 + 8)) = v32;
                    return v32;
                }
                v30 = v1;
                if ((v23 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v18), v23))
                    goto LABEL_4d3ce0;
                if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "fullblock", 9) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "count_bytes", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(v23, v27, "skip_bytes", 10))
                {
                    ::0x4d2590::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&v10, v23, v27);
                    v35 = a0;
                    v35->field_0 = 5;
                    *((int128_t *)&(&v35->field_0)[1]) = *((int128_t *)&v10);
                    v32 = *((long long *)&v11);
                    *((struct_0 **)((char *)&v35->field_8 + 8)) = v32;
                    return v32;
                }
            }
        } while ((v23 = ::0x4d24a0::core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&v18), v23));
    }
    v32 = a0;
    v32->field_0 = 14;
    return v32;
}
