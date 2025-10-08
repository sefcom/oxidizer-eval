char uu_seq::done_printing(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    char v3;  // al
    char v4;  // al

    v0.zero();
    v3 = a1.ge();
    core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(v0, *((long long *)&v1));
    v4 = (!v3 ? a0.lt() : a0.gt());
    return v4;
}
