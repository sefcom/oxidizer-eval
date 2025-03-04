long long uu_split::handle_preceding_options::ha9316461586fd0f7(unsigned long long a0, unsigned long long a1, char *a2, char *a3)
{
    unsigned int v0;  // [sp-0x3c]
    char *v1;  // [sp-0x38]
    char *v3;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // r13
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v3 = a2;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(a0, a1, "--", 2))
    {
        v1 = a2;
        v4 = ::0x4c9450::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a0, a1);
        if (!v4)
            core::str::slice_error_fail::h5dbb61534404fe7e(a0, a1, 2, a1, &g_5482e0); /* do not return */
        v5 = v4;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v4, v6, "bytes", 5) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "line-bytes", 10) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "lines", 5) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "additional-suffix", 17) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "filter", 6) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "number", 6) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "suffix-length", 13))
            _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(v5, v6, "separator", 9);
        v3 = v1;
        *(v3) = 1;
    }
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(a0, a1, "-b", 2) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(a0, a1, "-C", 2) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(a0, a1, "-l", 2) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(a0, a1, "-n", 2) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(a0, a1, "-a", 2))
        _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(a0, a1, "-tsrc/uu/split/src/split.rs", 2);
    *(a3) = 1;
    v0 = 0;
    v7 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(a0, a1, ::0x4c9480::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v0), 1);
    if (!(char)v7)
    {
        *(a3) = 0;
        *(v3) = 0;
        return v7;
    }
    return v7;
}
