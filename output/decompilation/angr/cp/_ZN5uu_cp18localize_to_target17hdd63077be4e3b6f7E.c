long long uu_cp::localize_to_target::hdd63077be4e3b6f7(unsigned long long *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long long v1;  // [bp+0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = std::path::Path::strip_prefix::h5d7e53b0b6c79402(a3, a4, a1, a2);
    if (!v3)
    {
        v5 = 7;
    }
    else
    {
        std::path::Path::join::hb28666e9f3e91503(a0 + 1, a5, v1, v3, v4);
        v5 = 13;
    }
    *(a0) = v5;
    return a0;
}
