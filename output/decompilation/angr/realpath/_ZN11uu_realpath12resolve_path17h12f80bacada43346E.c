long long uu_realpath::resolve_path::h12f80bacada43346(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    char v0;  // [sp-0x61]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long v4;  // [sp-0x48]
    unsigned long long v5;  // [sp-0x40]
    unsigned long long v6;  // [sp-0x38]
    char v7;  // [bp-0x30]
    unsigned long long v8;  // rax

    uucore::features::fs::canonicalize::h4be5c7a9ad65d7f1(&v1, a0, a1, a4, a3);
    v8 = *((long long *)&v2);
    if (v4 == 0x8000000000000000)
        return v8;
    v4 = v1;
    v5 = v8;
    v6 = *((long long *)&v3);
    uu_realpath::process_relative::h8c6e307666422bfa(&v7, &v4, a7, a8, a5, a6);
    v8 = uucore::mods::display::print_verbatim::hdcaab9bba9aa0144(&v7);
    if (!v8)
    {
        v1 = std::io::stdio::stdout::h077da66234850927();
        v0 = a2;
        v8 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v1, &v0, 1);
        return v8;
    }
    return v8;
}
