fn uu_tr::operation::Sequence::parse_char_repeat(a0: i64, a1: i64, a2: i64) -> double {
    let v0: struct48;  // [bp-0x60]
    let v1: Result<struct40, struct40>;  // [bp-0x30]
    let v2: u128;  // [bp-0x28]
    let v4: u64;  // rdi

    v0 = struct48 {
        field_0: "["
        field_16: "*"
        field_32: "]"
    };
    v1 = <nom::sequence::Preceded<F,G> as nom::internal::Parser<I>>::process(&v0, a1, a2);
    v4 = a0 + 8;
    match v1 {
        Err(_) => {
            *((v4 + 16) as &i128) = *((&v1 as &char + 24) as &i128);
            *(v4 as &u128) = v2;
            return struct8 {
                field_0: 1
            };
        },
        Ok(_) => {
            uu_tr::operation::Sequence::parse_char_repeat::{{closure}}(v4, &v1);
            return struct8 {
                field_0: 0
            };
        },
    }
}
