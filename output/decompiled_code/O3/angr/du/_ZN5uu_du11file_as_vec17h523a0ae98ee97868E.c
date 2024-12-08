long long uu_du::file_as_vec::h523a0ae98ee97868(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x40]
    unsigned long long v3;  // rdx

    std::fs::File::open::h478b8e87240890e4(&v0, a1, a2);
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h7acf8aed51dd223c(&v1, 0x2000, (unsigned int)core::result::Result$LT$T$C$E$GT$::expect::h792db185a07323d3(&v0));
    return _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hd04e8cfddee80efb(a0, &v1, v3);
}
