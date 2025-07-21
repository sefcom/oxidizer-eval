fn uu_numfmt::format::parse_implicit_precision(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x38]
    let v1: core::option::Option<(&str, &str)>;  // [bp-0x20]
    let v2: u64;  // [bp-0x10]
    let v4: u8;  // cl

    v1 = core::str::<impl str>::split_once(a0, a1, v4);
    match v1 {
        None => {
            return 0;
        },
        Some(_) => {
            v0 = struct24 {
                field_0: v2
                field_8: *((&v1 as &char + 24) as &i64) + v2
                field_16: 0
            };
            v0 = struct17 {
                field_0: v2
                field_8: *((&v1 as &char + 24) as &i64) + v2
                field_16: 0
            };
            return <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v0);
        },
    }
}
