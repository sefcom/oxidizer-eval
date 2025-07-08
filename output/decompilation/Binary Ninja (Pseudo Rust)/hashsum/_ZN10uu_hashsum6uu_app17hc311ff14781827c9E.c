
  fn uu_hashsum::uu_app::hc311ff14781827c9(arg1: *mut c_void, arg2: i64, arg3: u64) -> *mut c_void

{
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "md5sumsha1sumsha224sha224sumsha2…", 6) != 0
    {
        uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
        *arg1.byte_offset(0x2c8) = 0;
    }
    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha1sumsha224sha224sumsha256sha2…", 7) != 0
    {
        uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
        *arg1.byte_offset(0x2c8) = 0;
    }
    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha224sumsha256sha256sumsha384sh…", 9) != 0
    {
        uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
        *arg1.byte_offset(0x2c8) = 0;
    }
    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha256sumsha384sha384sumsha512sh…", 9) != 0
    {
        uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
        *arg1.byte_offset(0x2c8) = 0;
    }
    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha384sumsha512sha512sumb2sumb3s…", 9) != 0
    {
        uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
        *arg1.byte_offset(0x2c8) = 0;
    }
    else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha512sumb2sumb3sum", 9) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "b2sumb3sum", 5) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha3-224sumsha3-256sumsha3-384su…", 0xb) != 0
            {
                uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
                *arg1.byte_offset(0x2c8) = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha3-256sumsha3-384sumsha3-512su…", 0xb) != 0
            {
                uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
                *arg1.byte_offset(0x2c8) = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha3-384sumsha3-512sumsha3sumsha…", 0xb) != 0
            {
                uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
                *arg1.byte_offset(0x2c8) = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha3-512sumsha3sumshake128sumsha…", 0xb) != 0
            {
                uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
                *arg1.byte_offset(0x2c8) = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "sha3sumshake128sumshake256sum", 7) != 0
            {
                uu_hashsum::uu_app_bits::h22b67f9230d9f8cc(arg1);
                *arg1.byte_offset(0x2c8) = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "shake128sumshake256sum", 0xb) != 0
            {
                uu_hashsum::uu_app_bits::h22b67f9230d9f8cc(arg1);
                *arg1.byte_offset(0x2c8) = 0;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "shake256sum", 0xb) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h375640a597df572f(arg2, arg3, "b3sum", 5) == 0
                {
                    uu_hashsum::uu_app_custom::h877f20130ce52e37(arg1);
                    *arg1.byte_offset(0x2c8) = 1;
                }
                else
                {
                    uu_hashsum::uu_app_b3sum::hcc6efb9f0c7b8147(arg1);
                    *arg1.byte_offset(0x2c8) = 0;
                }
            }
            else
            {
                uu_hashsum::uu_app_bits::h22b67f9230d9f8cc(arg1);
                *arg1.byte_offset(0x2c8) = 0;
            }
        }
        else
        {
            uu_hashsum::uu_app_length::hb583261ee85cbb7d(arg1);
            *arg1.byte_offset(0x2c8) = 0;
        }
    }
    else
    {
        uu_hashsum::uu_app_common::haf156add4ae409e5(arg1);
        *arg1.byte_offset(0x2c8) = 0;
    }
    
    arg1
}
