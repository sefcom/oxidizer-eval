fn uu_tr::operation::Sequence::single_char(a0: &Result<struct32, struct17>, a1: u32, a2: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0x40]

    v0 = nom::bytes::complete::take::{{closure}}(nom::bytes::complete::take(1), a1, a2);
    return Err(struct17 {
        field_0: v0
        field_16: v2 as i8
    });
}
