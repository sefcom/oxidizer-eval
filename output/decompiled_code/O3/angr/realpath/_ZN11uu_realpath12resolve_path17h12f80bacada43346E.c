long long uu_realpath::resolve_path::h12f80bacada43346(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3, unsigned int a4, unsigned long long a5)
{
    char v0;  // [sp-0x61]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long v4;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x40]
    unsigned long long v6;  // [sp-0x38]
    char v7;  // [bp-0x30]
    unsigned long long v8;  // [bp+0x8]
    char v9;  // [bp+0x10]
    char v10;  // [bp+0x18]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx

    uucore::features::fs::canonicalize::h4be5c7a9ad65d7f1(&v1, a0, a1, a4, a3);
    v11 = *((long long *)&v2);
    if (v4 == 0x8000000000000000)
        return v11;
    v4 = v1;
    v5 = v11;
    v6 = *((long long *)&v3);
    uu_realpath::process_relative::h8c6e307666422bfa(&v7, &v4, *((long long *)&v9), *((long long *)&v10), a5, v8);
    v11 = uucore::mods::display::print_verbatim::hdcaab9bba9aa0144(&v7, v12, v13);
    if (!v11)
    {
        v1 = std::io::stdio::stdout::h077da66234850927();
        v0 = a2;
        v11 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v1, &v0, 1);
        return v11;
    }
    return v11;
}
