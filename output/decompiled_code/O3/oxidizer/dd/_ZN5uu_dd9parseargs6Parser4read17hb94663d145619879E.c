fn uu_dd::parseargs::Parser::read(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x50]
    let v1: i64;  // [sp-0x48]
    let v2: i264;  // [sp-0x40], Other Possible Types: struct33
    let v4: struct8;  // rax
    let v5: i128;  // xmm0

    v0 = a2;
    v1 = a3 * 16 + a2;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v4 {
        do {
            v2 = uu_dd::parseargs::Parser::parse_operand(a1, *(v4 as &i64), *((v4 + 8) as &i64));
            if v2 != 14 {
                v5 = v2;
                *((a0 + 24) as &i128) = *((&v2 as &char + 16) as &i128);
                *((a0 + 8) as &i128) = v5;
                *(a0 as &i64) = 2;
            }
        } while ((v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v4));
    }
}
