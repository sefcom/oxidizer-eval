long long fish::function::FunctionSet::allow_autoload(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    char v4;  // al
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a0.get_props(a1, a2);
    if (v3)
    {
        v4 = fish::function::FunctionSet::allow_autoload::{{closure}}(v3);
        v5 = a0 + 48.get_inner(a1, a2);
        if (v4)
            return 0;
    }
    else
    {
        v5 = a0 + 48.get_inner(a1, a2);
    }
    return v5 & 0xffffffffffffff00 | !v5;
}
