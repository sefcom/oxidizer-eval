fn uu_tr::operation::Sequence::single_char(a0: &Result<struct32, struct17>, a1: u32, a2: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0x40]
    let v1: i8;  // [bp-0x28]
    let v3: &u8;  // rax
    let v4: u128;  // xmm0

    v0 = nom::bytes::complete::take::{{closure}}(nom::bytes::complete::take(1), a1, a2);
    match v0 {
        None => {
            v3 = *(*(&v1 as &i64) as &i8) as u8 as u64;
            return Err(struct1 {
                field_8: <UNKNOWN>
            });
        },
        Some(_) => {
            v3 = &v0;
            v4 = v0;
            return Ok(struct32 {
                field_0: v4
                field_16: *(&v1 as &i128)
            });
        },
    }
}
