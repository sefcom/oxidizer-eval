fn uu_dd::parseargs::Parser::read(a1: i64, a2: i64, a3: i64) -> Result<struct216, struct40> {
    let a0: void*;  // rsi
    let v0: u64;  // [bp-0x50]
    let v1: u64;  // [bp-0x48]
    let v2: u272;  // [bp-0x40]
    let v4: i64;  // rax
    let v5: u64;  // rdi
    let v6: i64;  // rdi

    v0 = a1;
    v1 = a2 * 16 + a1;
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v4 {
        do {
            vvar_114{stack -64} = struct33 OrderedDict({0: 𝜙@128b [((5057073, None), vvar_107{stack -64}), ((5057025, None), None)]})
            uu_dd::parseargs::Parser::parse_operand(&v2, a0, *(v4 as &i64), *((v4 + 8) as &i64));
            if v2 as i32 != 14 {
                *((v6 + 24) as &i128) = *((&v2 as &char + 16) as &i128);
                *((v6 + 8) as &i128) = v2;
                *(v6 as &i64) = 2;
                return;
            }
            v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v4);
    }
    memcpy(v5, a0, 216);
    return;
}
