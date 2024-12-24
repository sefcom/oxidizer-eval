long long uu_cp::TargetType::determine::h3cb1137767b9e3b1(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    if (a0 <= 1)
    {
        v0 = v2;
        v3 = std::path::Path::is_dir::h9ac0db933706da51(a1, a2);
        if (!(char)v3)
            return v3 | -0x100 | 1;
    }
    return 0;
}
