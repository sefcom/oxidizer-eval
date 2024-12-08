long long uu_uniq::handle_preceding_options::hb59e39cbb2699d9a(unsigned long long a0, unsigned long long a1, char *a2, char *a3)
{
    unsigned int v0;  // [sp-0x3c]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r13
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb372adb45d08adee(a0, a1, "--", 2))
    {
        v2 = ::0x4bc0c0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(a0, a1);
        if (!v2)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        v3 = v2;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v2, v4, "skip-chars", 10) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v3, v4, "skip-fields", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v3, v4, "check-chars", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v3, v4, "group", 5))
            _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(v3, v4, "all-repeated", 12);
        *(a2) = 1;
    }
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(a0, a1, "-s", 2) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(a0, a1, "-f", 2))
        _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h08af43259c164d47(a0, a1, "-wsrc/uu/uniq/src/uniq.rs", 2);
    *(a3) = 1;
    v0 = 0;
    v5 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb372adb45d08adee(a0, a1, ::0x4bc110::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), v4);
    if (!(char)v5)
    {
        *(a3) = 0;
        *(a2) = 0;
        return v5;
    }
    return v5;
}
