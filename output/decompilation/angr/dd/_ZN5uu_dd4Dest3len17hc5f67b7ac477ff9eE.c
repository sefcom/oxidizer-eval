long long uu_dd::Dest::len::hc5f67b7ac477ff9e(char *a0)
{
    char v0;  // [bp-0xb0]
    unsigned long long v3;  // rax

    if (*(a0) != 1)
        return 0;
    std::fs::File::metadata::he899a18112e6f19e(&v0, a0 + 4);
    if (*((int *)&v0) == 2)
        v3 = 1;
    else
        v3 = 0;
    return v3;
}
