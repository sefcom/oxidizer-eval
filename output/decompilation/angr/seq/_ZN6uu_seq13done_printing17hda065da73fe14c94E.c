char uu_seq::done_printing(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x50]
    char v2;  // al
    char v3;  // al

    v0.zero();
    v2 = a1.ge();
    ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v0);
    v3 = (!v2 ? a0.lt() : a0.gt());
    return v3;
}
