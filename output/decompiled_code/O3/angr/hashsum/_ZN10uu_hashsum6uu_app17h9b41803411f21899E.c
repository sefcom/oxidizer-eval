long long uu_hashsum::uu_app::h9b41803411f21899(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v1;  // esi
    unsigned int v2;  // edx
    unsigned long v3;  // rsi
    unsigned long v4;  // rdx
    unsigned long v5;  // rsi
    unsigned long v6;  // rdx
    unsigned int v7;  // esi
    unsigned int v8;  // edx
    unsigned int v9;  // esi
    unsigned int v10;  // edx

    if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 6) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 7) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum", 9) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha384sumsha512sha512sumb2sumb3sum", 9) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha512sumb2sumb3sum", 9))
    {
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "b2sumb3sum", 5))
        {
            uu_hashsum::uu_app_length::h9f6f356d452a9c79(a0, v1, v2);
            a0->field_2c8 = 0;
            return a0;
        }
        else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) && !(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha3-512sumsha3sumshake128sumshake256sum", 11))
        {
            if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "sha3sumshake128sumshake256sum", 7) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "shake128sumshake256sum", 11) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "shake256sum", 11))
            {
                uu_hashsum::uu_app_bits::h93b4d73fb95a7a31(a0, v5, v6);
            }
            else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe93f39dd6550b9a(a1, a2, "b3sum", 5))
            {
                uu_hashsum::uu_app_b3sum::h1df33efddfc4d9f0(a0, v7, v8);
            }
            else
            {
                uu_hashsum::uu_app_custom::h204821cf280a8b16(a0, v9, v10);
                a0->field_2c8 = 1;
                return a0;
            }
            a0->field_2c8 = 0;
            return a0;
        }
    }
    uu_hashsum::uu_app_common::hc4ab8b829551c4d6(a0, v3, v4);
    a0->field_2c8 = 0;
    return a0;
}
