long long uu_cp::platform::linux::copy_fifo_contents::h9b01689231ae8f64(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [sp-0xf0]
    unsigned int v1;  // [sp-0xec]
    char v2;  // [bp-0xe8]
    char v3;  // [bp-0xe4]
    unsigned int v4;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned int v5;  // [sp-0xd4]
    char v6;  // [bp-0xd0], Other Possible Types: unsigned int
    char v7;  // [sp-0xcf]
    char v8;  // [bp-0xcc], Other Possible Types: unsigned short
    char v9;  // [bp-0xa0]
    unsigned long long v12;  // rsi
    unsigned int v13;  // eax

    v4 = 0x1b600000000;
    v6 = 0;
    v8 = 0;
    v6 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v4, a0, a1);
    if (*((int *)&v2))
        return 1;
    v0 = *((int *)&v3);
    v13 = 6291616(0, v12);
    6291616(v13);
    v4 = 0;
    v8 = 0;
    v6 = 0;
    v8 = 1;
    v7 = 1;
    v5 = ~(v13) & 402;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v4, a2, a3);
    v1 = *((int *)&v3);
    if (!_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h7a750bfa1523b6ae(&v0, &v1))
    {
        std::fs::File::metadata::he899a18112e6f19e(&v4, &v0);
        if (v4 != 2 && !std::fs::File::set_permissions::h14239b20adbb1b7d(&v1, *((int *)&v9)))
        {
            close(v1);
            close(v0);
            return 0;
        }
    }
    close(v1);
    close(v0);
    return 1;
}
