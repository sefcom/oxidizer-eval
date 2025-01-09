long long uu_hashsum::uu_app::hc311ff14781827c9(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 7) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha384sumsha512sha512sumb2sumb3sum", 9) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha512sumb2sumb3sum", 9))
    {
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "b2sumb3sum", 5))
        {
            uu_hashsum::uu_app_length::hb583261ee85cbb7d(a0);
            a0->field_2c8 = 0;
            return a0;
        }
        else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha3-512sumsha3sumshake128sumshake256sum", 11))
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "sha3sumshake128sumshake256sum", 7) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "shake128sumshake256sum", 11) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "shake256sum", 11))
            {
                uu_hashsum::uu_app_bits::h22b67f9230d9f8cc(a0);
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(a1, a2, "b3sum", 5))
            {
                uu_hashsum::uu_app_b3sum::hcc6efb9f0c7b8147(a0);
            }
            else
            {
                uu_hashsum::uu_app_custom::h877f20130ce52e37(a0);
                a0->field_2c8 = 1;
                return a0;
            }
            a0->field_2c8 = 0;
            return a0;
        }
    }
    uu_hashsum::uu_app_common::haf156add4ae409e5(a0);
    a0->field_2c8 = 0;
    return a0;
}
