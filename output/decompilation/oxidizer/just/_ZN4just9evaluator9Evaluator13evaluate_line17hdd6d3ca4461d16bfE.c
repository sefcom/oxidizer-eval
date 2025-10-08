fn just::evaluator::Evaluator::evaluate_line(a0: i64, a1: u32, a2: u64, a3: u64, a4: u32) -> int {
    let v0: u32;  // [bp-0x114]
    let v1: i64;  // [bp-0x110]
    let v2: void*;  // [bp-0x108]
    let v3: u64;  // [bp-0x100]
    let v4: void*;  // [bp-0xf8]
    let v5: u128;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: u64;  // [bp-0xd0]
    let v9: u64;  // [bp-0xc8]
    let v10: void*;  // [bp-0xc0]
    let v11: iNone;  // [bp-0xb8]
    let v12: u128;  // [bp-0xb1]
    let v13: u128;  // [bp-0xa9]
    let v14: u64;  // [bp-0xa1]
    let v15: struct24;  // [bp-0x98]
    let v16: u8;  // [bp-0x98]
    let v17: u64;  // [bp-0x90]
    let v18: u64;  // [bp-0x88]
    let v19: u64;  // [bp-0x80]
    let v20: u128;  // [bp-0x78]
    let v21: u128;  // [bp-0x68]
    let v22: u128;  // [bp-0x58]
    let v23: u128;  // [bp-0x48]
    let v24: i8;  // [bp-0x38]
    let v26: struct80;  // rax
    let v27: i64;  // rdx
    let v28: struct105;  // rbx
    let v29: i64;  // rdx
    let v30: i64;  // rdx
    let v32: struct24;  // rsi
    let v33: u64;  // rdx
    let v34: iNone;  // xmm0

    v0 = a4;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v8 = a2;
    v9 = a3 * 128 + a2;
    v10 = 0;
    v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
    if v27 {
        v28 = v26;
        do {
            v30 = v27;
            if *(v30 as &i32) == 18 {
                v15 = alloc::str::<impl str>::replace(just::token::Token::lexeme(v30 + 8), a2, "{{{{", "{{");
                v32 = v17;
                if (!v28 & v0) {
                    v33 = v27 + core::str::<impl str>::trim_start_matches(v32, v18);
                }
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v2, v32, v33);
            } else {
                just::evaluator::Evaluator::evaluate_expression(&v16, a1, v30);
                if v16 != 56 {
                    v34 = *((&v15.field_0 as &char + 1) as &i128);
                    v13 = *(&v18 as &i128);
                    v11 = v34;
                    *((v1 + 96) as &i64) = *(&v24 as &i64);
                    *((v1 + 80) as &u128) = v23;
                    *((v1 + 64) as &u128) = v22;
                    *((v1 + 48) as &u128) = v21;
                    *((v1 + 32) as &u128) = v20;
                    *((v1 + 16) as &i128) = (&v11)[15] as i128;
                    *((v1 + 1) as &i128) = v11 as i128;
                    *(v1 as &u8) = v16;
                    return;
                }
                v14 = v19;
                v12 = *(&v17 as &i128);
                v5 = v12;
                v7 = v14;
                <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v2, v6, v14 + v6);
            }
            v28 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v8);
        } while (v29);
    }
    *((v1 + 24) as &i64) = 0;
    *((v1 + 8) as &i128) = *(&v2 as &i128);
    *(v1 as &i8) = 56;
    return;
}
