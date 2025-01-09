long long uu_head::read_n_bytes::h6fceecc1df8e2d16(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10]
    unsigned long v5;  // rdx
    void* v6;  // rbx

    v2 = std::io::Read::take::h5ffd87fcf87038c8(a0, a1);
    v3 = v5;
    v1 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v1);
    if (!_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h5bd4b7aa700d4712(&v2, &v0))
    {
        ::0x4b7670::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42();
        return 0;
    }
    ::0x4b7670::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42();
    return v6;
}
