fn just::analyzer::Analyzer::define(a1: i64, a2: &struct72, a3: i64, a4: i64, a5: i8) -> : struct80 {
    let a0: i64;  // rdi
    let v0: i64;  // [bp-0x160]
    let v1: i64;  // [bp-0x158]
    let v2: u64;  // [bp-0x150]
    let v3: u64;  // [bp-0x150]
    let v4: struct24;  // [bp-0x140], Other Possible Types: struct88
    let v5: u64;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: u64;  // [bp-0x118]
    let v8: i64;  // [bp-0x110]
    let v9: i64;  // [bp-0x108]
    let v10: struct72;  // [bp-0xd8]
    let v11: struct88;  // [bp-0x88]
    let v13: void*;  // rax
    let v14: void*;  // r14
    let v16: i64;  // rbx
    let v18: i64;  // r14
    let v19: u64;  // 4096
    let v21: u64;  // rbp
    let v22: u64;  // rdx
    let v23: u64;  // rax
    let v24: iNone;  // xmm1
    let v25: iNone;  // xmm2
    let v26: iNone;  // xmm3
    let v27: u64;  // rdx

    v13 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a1, just::token::Token::lexeme(a2), a2);
    if v13 {
        v14 = v13;
        v2 = v13[16] as i64;
        v1 = v13[24] as i64;
        if !a5 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v13[16] as i64, v13[24] as i64, a3, a4) {
            v16 = *((a2 + 48) as &i64);
            if *((a2 + 48) as &i64) < v14[80] as i64 {
                v0 = a4;
                v3 = v2;
                v18 = v14 + 32;
                v19 = a3;
            } else {
                v16 = v14[80] as i64;
                v0 = v1;
                v18 = a2;
                v19 = v2;
                v1 = a4;
            }
            v21 = a3;
            v10 = struct72 {
                field_0: *(v18 as &i128)
                field_16: *((v18 + 16) as &i128)
                field_32: *((v18 + 32) as &i128)
                field_48: *((v18 + 48) as &i128)
                field_64: *((v18 + 64) as &i64)
            };
            v9 = v16;
            v5 = just::token::Token::lexeme(a2);
            v6 = v22;
            v7 = v21;
            v8 = v1;
            v4 = struct24 {
                field_0: 9223372036854775856
                field_8: v19
                field_16: v0
            };
            just::token::Token::error(a0, &v10, &v4);
            return;
        }
    }
    v23 = just::token::Token::lexeme(a2);
    v24 = *((a2 + 16) as &i128);
    v25 = *((a2 + 32) as &i128);
    v26 = *((a2 + 48) as &i128);
    v4 = struct88 {
        field_0: a3
        field_8: a4
        field_16: *(a2 as &i128)
        field_32: v24
        field_48: v25
        field_64: v26
        field_80: *((a2 + 64) as &i64)
    };
    v11 = hashbrown::map::HashMap<K,V,S,A>::insert(a1, v23, v27, &v4);
    *((a0 + 72) as &i8) = 37;
    return;
}
