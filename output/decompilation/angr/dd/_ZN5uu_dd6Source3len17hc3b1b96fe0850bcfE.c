long long uu_dd::Source::len::hc3b1b96fe0850bcf(unsigned int *a0)
{
    char v0;  // [bp-0xb0]
    char v1;  // [bp-0x60]

    if (*(a0))
        return 0;
    std::fs::File::metadata::he899a18112e6f19e(&v0, a0 + 1);
    if (*((int *)&v0) == 2)
    {
        return 1;
    }
    else if (*((long long *)&v1) >= 9223372036854775807)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}
