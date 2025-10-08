long long fish::env_universal_common::is_universal_safe_to_encode_directly(unsigned int a0)
{
    unsigned long long v1;  // rax

    if (!(char)" ".contains(a0))
        return 0;
    v1 = core::char::methods::<impl char>::is_alphanumeric(a0);
    if ((char)v1)
        return v1 & 0xffffffffffffff00 | 1;
    return (v1 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | a0 == 95 | a0 == 47;
}
