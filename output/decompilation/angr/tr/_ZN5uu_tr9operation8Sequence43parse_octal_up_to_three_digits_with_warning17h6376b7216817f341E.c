long long uu_tr::operation::Sequence::parse_octal_up_to_three_digits_with_warning(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]

    v0 = "01234567";
    v1 = 8;
    v2 = 1;
    v3 = 3;
    v4 = a1;
    v5 = a2;
    return a0.process(&v0, a1, a2);
}
