long long uu_du::file_as_vec::ha4cb87d59a25f84c(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x40]
    unsigned long long v3;  // rdx

    std::fs::File::open::hc0282a67b51c44be(&v0, a1, a2);
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha4ed61db034c9bb6(&v1, 0x2000, (unsigned int)core::result::Result$LT$T$C$E$GT$::expect::hc7cbe91f3679df68(&v0));
    return _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::ha82b4e3bbe951e30(a0, &v1, v3);
}
