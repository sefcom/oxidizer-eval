fn just::parser::Parser::advance(a0: i64, a1: i64) -> double {
    let v0: struct80;  // [bp-0xd8], Other Possible Types: u128
    let v1: struct24;  // [bp-0xd0]
    let v2: struct89;  // [bp-0x68]
    let v3: u128;  // [bp-0x60]
    let v4: u128;  // [bp-0x50]
    let v5: iNone;  // [bp-0x40]
    let v6: struct16;  // [bp-0x30]
    let v8: struct80;  // rsi
    let v9: u64;  // rdi
    let v10: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // rax
    let v11: u64;  // rcx
    let v12: core::option::Option<&str>;  // rdx
    let v13: struct80;  // xmm0
    let v14: core::fmt::rt::Argument;  // xmm1
    let v15: struct12;  // xmm2
    let v16: struct80;  // xmm0

    alloc::collections::btree::map::BTreeMap<K,V,A>::clear(a1 + 56);
    v8 = *((a1 + 32) as &i64);
    v9 = *((a1 + 88) as &i64);
    if v9 != v8 {
        v10 = *((a1 + 24) as &i64);
        v11 = v9 * 72;
        v12 = 0;
        do {
            if *((v10 + v11 + 64) as &i8) != 36 {
                *((a1 + 88) as &core::option::Option<&str>) = v9 - v12 + 1;
                v13 = *((v10 + v11) as &i128);
                v14 = *((v10 + v11 + 16) as &i128);
                v15 = *((v10 + v11 + 32) as &i128);
                return struct80 {
                    field_0: v13
                    field_16: v14
                    field_32: v15
                    field_48: *((v10 + v11 + 48) as &i128)
                    field_64: *((v10 + v11 + 64) as &i64)
                    field_72: 37
                };
            }
            v11 += 72;
            v12 -= 1;
        } while (v8 * 72 != v11);
        *((a1 + 88) as &core::option::Option<&str>) = v9 - v12;
    }
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("`Parser::advance()` advanced past end of token stream");
    v0 = 9223372036854775848;
    v2 = just::parser::Parser::error(a1, &v0);
    v16 = *(&v2.field_72 as &i128);
    v0 = v3;
    return struct80 {
        field_0: v3
        field_16: v4
        field_32: v5
        field_48: v6
        field_64: v16
    };
}
