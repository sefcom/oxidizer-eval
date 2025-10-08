fn fd::exec::CommandSet::new(a0: i64, a1: void*) -> long long {
    let v0: u8;  // [bp-0x60]
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v4: struct24;  // [bp-0x30]

    v4 = <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(a1);
    v3 = <clap_builder::builder::value_parser::ValueParser as core::convert::From<clap_builder::builder::value_parser::_AnonymousValueParser>>::from(&v4);
    core::iter::traits::iterator::Iterator::collect(&v0, &v3);
    return struct32 {
        field_0: v0
        field_8: v1
        field_16: v2
        field_24: 0
    };
}
