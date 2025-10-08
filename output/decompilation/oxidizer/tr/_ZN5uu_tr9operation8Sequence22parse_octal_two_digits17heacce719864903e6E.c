fn uu_tr::operation::Sequence::parse_octal_two_digits(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct32;  // [bp-0x20]

    v0 = struct32 {
        field_0: "01234567"
        field_16: 2
        field_24: 2
    };
    return <nom::internal::MapOpt<F,G> as nom::internal::Parser<I>>::process(a0, &v0, a1, a2);
}
