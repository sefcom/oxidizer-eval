long long uu_head::read_n_lines::hae3a156ed2e97641(unsigned long a0, unsigned long a1, char a2)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    char v3;  // [sp-0x38]
    char v4;  // [bp-0x30]
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdx
    void* v8;  // rbx

    v1 = a0;
    v2 = a1;
    v3 = a2;
    v0 = std::io::stdio::stdout::h077da66234850927();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h11330ad61641d6f2(&v4, 0x4000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v0, v6, v7));
    if (!_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h1978edcb2509def4(&v1, &v4))
    {
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9de5d1b0f1603542(&v4);
        return 0;
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h9de5d1b0f1603542(&v4);
    return v8;
}
