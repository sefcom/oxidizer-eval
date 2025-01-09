fn uu_dd::parseargs::Parser::read(a0: &Result<struct216, struct32>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: i64;  // [sp-0x48]
    let v2: i272;  // [sp-0x40], Other Possible Types: struct33
    let v4: struct8;  // rax

    v0 = a2;
    v1 = a3 * 16 + a2;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v4 {
        do {
            v2 = uu_dd::parseargs::Parser::parse_operand(a1, *(v4 as &i64), *((v4 + 8) as &i64));
            if v2 != 14 {
                return Err(struct32 {
                    field_0: v5
                    field_16: *((&v2 as &char + 16) as &i128)
                });
            }
        } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v4));
    }
    return memcpy(a0, a1, 216);
}
