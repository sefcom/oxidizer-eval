fn uu_dd::parseargs::Parser::read(a1: i64, a2: i64, a3: i64) -> Result<struct216, struct40> {
    let a0: void*;  // rsi
    let v0: struct16;  // [bp-0x50]
    let v1: struct33;  // [bp-0x40]
    let v3: i64;  // rax
    let v4: u64;  // rdi
    let v5: i64;  // rdi

    v0 = struct16 {
        field_0: a1
        field_8: a2 * 16 + a1
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v3 {
        do {
            vvar_114{stack -64} = struct33 OrderedDict({0: 𝜙@128b [((5057073, None), vvar_107{stack -64}), ((5057025, None), None)]})
            uu_dd::parseargs::Parser::parse_operand(&v1, a0, *(v3 as &i64), *((v3 + 8) as &i64));
            if v1.field_0 as i32 != 14 {
                *((v5 + 24) as &u128) = v1.field_9;
                *((v5 + 8) as &i128) = *(&v1.field_0 as &i128);
                *(v5 as &i64) = 2;
                return;
            }
            v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v3);
    }
    memcpy(v4, a0, 216);
    return;
}
