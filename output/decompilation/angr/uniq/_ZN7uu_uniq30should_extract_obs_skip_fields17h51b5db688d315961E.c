long long uu_uniq::should_extract_obs_skip_fields::h51b5db688d315961(unsigned long long a0, unsigned long long a1, char a2, char a3)
{
    unsigned long v0;  // [bp-0x28]
    unsigned int v1;  // [sp-0x24]
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v6;  // rax

    v0 = v3;
    v1 = 0;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(a0, a1, ::0x4bc1a0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v1), v4))
    {
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(a0, a1, "--", 2))
        {
            return 0;
        }
        else if (a2)
        {
            return 0;
        }
        else if (a3)
        {
            return 0;
        }
        else if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(a0, a1, "-s", 2) && !(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(a0, a1, "-f", 2))
        {
            v6 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(a0, a1, "-wsrc/uu/uniq/src/uniq.rs", 2);
            return v6 & 0xffffffffffffff00 | (char)v6 ^ 1;
        }
    }
    return 0;
}
