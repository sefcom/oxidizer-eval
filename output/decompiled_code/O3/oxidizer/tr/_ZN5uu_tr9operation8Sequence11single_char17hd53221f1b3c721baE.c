fn uu_tr::operation::Sequence::single_char(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0x40]
    let v1: u8;  // [bp-0x38]
    let v2: u8;  // [bp-0x28]
    let v4: u64;  // rax
    let v5: u128;  // xmm0

    v0 = nom::bytes::complete::take::{{closure}}(nom::bytes::complete::take(1), a1, a2);
    match v0 {
        None => {
            v4 = *(*(&v2 as &i64) as &i8) as u8 as u64;
            return struct25 {
                field_0: 3
                field_8: *(&v1 as &i128)
                field_24: v4 as u8
            };
        },
        Some(_) => {
            v5 = *(&v1 as &i128);
            return struct32 {
                field_0: v5
                field_16: *(&v2 as &i128)
            };
        },
    }
}
