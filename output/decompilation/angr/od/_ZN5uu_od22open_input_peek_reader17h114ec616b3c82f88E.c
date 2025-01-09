long long uu_od::open_input_peek_reader::h114ec616b3c82f88(unsigned long long a0[12], unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x40]

    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h6da545f9e2e553ec(&v0, a1, a1 + a2 * 24);
    uu_od::multifilereader::MultifileReader::new::h9647a60ecaa9b78d(&a0[2], &v0);
    a0[0] = a4;
    a0[1] = a5;
    a0[8] = a3;
    a0[9] = 0;
    a0[10] = 1;
    a0[11] = 0;
    return a0;
}
