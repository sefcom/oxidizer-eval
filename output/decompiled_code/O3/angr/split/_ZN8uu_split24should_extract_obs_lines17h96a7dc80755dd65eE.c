long long uu_split::should_extract_obs_lines::h96a7dc80755dd65e(unsigned long long a0, unsigned long long a1, char a2, char a3)
{
    unsigned long v0;  // [bp-0x28]
    unsigned int v1;  // [sp-0x24]
    unsigned long v3;  // rax
    unsigned long long v5;  // rax

    v0 = v3;
    v1 = 0;
    if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, ::0x4c9550::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v1), 1))
    {
        if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, "--", 2))
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
        else if (!(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, "-a", 2) && !(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, "-b", 2) && !(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, "-C", 2) && !(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, "-l", 2) && !(char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, "-n", 2))
        {
            v5 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf8db72e21166909e(a0, a1, "-tsrc/uu/split/src/split.rs", 2);
            return v5 | -0x100 | (char)v5 ^ 1;
        }
    }
    return 0;
}
