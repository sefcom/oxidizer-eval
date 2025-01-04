long long uu_head::read_n_bytes::h336678ff3f92cdc9(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    void* v7;  // rbx

    v2 = a0;
    v3 = -1;
    v1 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v1, v5, v6);
    if (!_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h0465faff23cc4d71(&v2, &v0))
    {
        ::0x4b7670::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(v0);
        return 0;
    }
    ::0x4b7670::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(v0);
    return v7;
}
