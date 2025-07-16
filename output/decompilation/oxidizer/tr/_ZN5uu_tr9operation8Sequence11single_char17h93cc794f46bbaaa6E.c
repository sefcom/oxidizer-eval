fn uu_tr::operation::Sequence::single_char(a1: i64, a2: i64) -> Result<struct32, struct25> {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x40]
    let v1: u128;  // [bp-0x38]
    let v2: i8;  // [bp-0x28], Other Possible Types: struct_0 *

    v0 = nom::bytes::complete::take::{{closure}}(nom::bytes::complete::take(1), a1, a2);
    if !v0.field_0 {
        return struct34 {
            field_0: 3
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    }
    return Ok(struct32 {
        field_0: v1
        field_16: *(&v2 as &i128)
    });
}
