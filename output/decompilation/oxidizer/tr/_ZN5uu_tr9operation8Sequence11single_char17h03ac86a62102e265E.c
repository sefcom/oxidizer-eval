fn uu_tr::operation::Sequence::single_char(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct40;  // [bp-0x40]
    let v1: u128;  // [bp-0x38]
    let v2: i64;  // [bp-0x28]

    v0 = <nom::bytes::Take<Error> as nom::internal::Parser<I>>::process(nom::bytes::take(), a1, a2);
    if v0.field_0 as i32 != 1 {
        return struct32 {
            field_0: 3
            field_8: v1
            field_24: *(v2 as &i8)
        };
    }
    return struct32 {
        field_0: v1
        field_16: *(&v0.field_24 as &i128)
    };
}
