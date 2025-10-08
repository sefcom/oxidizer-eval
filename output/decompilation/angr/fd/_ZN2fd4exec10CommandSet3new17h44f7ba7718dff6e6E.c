long long fd::exec::CommandSet::new(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x30]

    <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(&v4, a1);
    <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(&v3, &v4);
    v0.collect(&v3);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        a0->field_10 = v2;
        a0->field_18 = 0;
    }
    a0->field_8 = v1;
    a0->field_0 = v0;
    return v0;
}
