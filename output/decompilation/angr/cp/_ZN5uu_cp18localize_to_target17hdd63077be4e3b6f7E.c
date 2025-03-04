long long uu_cp::localize_to_target::hdd63077be4e3b6f7(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax

    v0 = v1;
    v2 = std::path::Path::strip_prefix::h5d7e53b0b6c79402(a3, a4, a1, a2);
    if (!v2)
    {
        v4 = 7;
    }
    else
    {
        std::path::Path::join::hb28666e9f3e91503(a0 + 1, a5, a6, v2, v3);
        v4 = 13;
    }
    *(a0) = v4;
    return a0;
}
