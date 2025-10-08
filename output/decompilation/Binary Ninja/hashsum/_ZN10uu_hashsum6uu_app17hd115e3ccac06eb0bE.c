
  void* uu_hashsum::uu_app::hd115e3ccac06eb0b(void* arg1, int64_t arg2, uint64_t arg3)

{
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "md5sumsha1sumsha224sha224sumsha2…", 6))
    {
        uu_hashsum::uu_app_common::he3603fb037840435(arg1);
        *(arg1 + 0x2c8) = 0;
    }
    else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha1sumsha224sha224sumsha256sha2…", 7))
    {
        uu_hashsum::uu_app_common::he3603fb037840435(arg1);
        *(arg1 + 0x2c8) = 0;
    }
    else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha224sumsha256sha256sumsha384sh…", 9))
    {
        uu_hashsum::uu_app_common::he3603fb037840435(arg1);
        *(arg1 + 0x2c8) = 0;
    }
    else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha256sumsha384sha384sumsha512sh…", 9))
    {
        uu_hashsum::uu_app_common::he3603fb037840435(arg1);
        *(arg1 + 0x2c8) = 0;
    }
    else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha384sumsha512sha512sumb2sumb3s…", 9))
    {
        uu_hashsum::uu_app_common::he3603fb037840435(arg1);
        *(arg1 + 0x2c8) = 0;
    }
    else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha512sumb2sumb3sum(uutils coreu…", 9))
    {
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "b2sumb3sum(uutils coreutils) 0.0…", 5))
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha3-224sumsha3-256sumsha3-384su…", 0xb))
            {
                uu_hashsum::uu_app_common::he3603fb037840435(arg1);
                *(arg1 + 0x2c8) = 0;
            }
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha3-256sumsha3-384sumsha3-512su…", 0xb))
            {
                uu_hashsum::uu_app_common::he3603fb037840435(arg1);
                *(arg1 + 0x2c8) = 0;
            }
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha3-384sumsha3-512sumsha3sumsha…", 0xb))
            {
                uu_hashsum::uu_app_common::he3603fb037840435(arg1);
                *(arg1 + 0x2c8) = 0;
            }
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha3-512sumsha3sumshake128sumsha…", 0xb))
            {
                uu_hashsum::uu_app_common::he3603fb037840435(arg1);
                *(arg1 + 0x2c8) = 0;
            }
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "sha3sumshake128sumshake256sum", 7))
            {
                uu_hashsum::uu_app_bits::h94948ede73a9a318(arg1);
                *(arg1 + 0x2c8) = 0;
            }
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "shake128sumshake256sum", 0xb))
            {
                uu_hashsum::uu_app_bits::h94948ede73a9a318(arg1);
                *(arg1 + 0x2c8) = 0;
            }
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "shake256sum", 0xb))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h1a4f6e56f6132b9b(arg2, arg3, "b3sum(uutils coreutils) 0.0.30Co…", 5))
                {
                    uu_hashsum::uu_app_custom::h3a63177c817a427e(arg1);
                    *(arg1 + 0x2c8) = 1;
                }
                else
                {
                    uu_hashsum::uu_app_b3sum::hff277f31cb1bc261(arg1);
                    *(arg1 + 0x2c8) = 0;
                }
            }
            else
            {
                uu_hashsum::uu_app_bits::h94948ede73a9a318(arg1);
                *(arg1 + 0x2c8) = 0;
            }
        }
        else
        {
            uu_hashsum::uu_app_length::h30e6017986078ce7(arg1);
            *(arg1 + 0x2c8) = 0;
        }
    }
    else
    {
        uu_hashsum::uu_app_common::he3603fb037840435(arg1);
        *(arg1 + 0x2c8) = 0;
    }
    
    return arg1;
}
