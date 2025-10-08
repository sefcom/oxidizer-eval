long long uu_cp::TargetType::determine(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (a0 <= 1)
    {
        v0 = v2;
        v3 = a1.is_dir(a2);
        if (!(char)v3)
            return v3 & 0xffffffffffffff00 | 1;
    }
    return 0;
}
