fn uu_tr::operation::Sequence::parse_octal_up_to_three_digits_with_warning(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct48;  // [bp-0x30]

    v0 = struct48 {
        field_0: "01234567"
        field_16: 1
        field_24: 3
        field_32: a1
        field_40: a2
    };
    return <nom::internal::MapOpt<F,G> as nom::internal::Parser<I>>::process(a0, &v0, a1, a2);
}
