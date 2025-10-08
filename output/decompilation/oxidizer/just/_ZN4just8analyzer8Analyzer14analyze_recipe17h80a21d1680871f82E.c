fn just::analyzer::Analyzer::analyze_recipe(a0: i64, a1: i64) -> int {
    let v0: u8;  // [bp-0x119]
    let v1: i64;  // [bp-0x118]
    let v2: u64;  // [bp-0x108]
    let v3: struct24;  // [bp-0x100], Other Possible Types: struct80
    let v4: struct712;  // [bp-0x100]
    let v5: iNone;  // [bp-0xf0]
    let v6: iNone;  // [bp-0xe0]
    let v7: iNone;  // [bp-0xd0]
    let v8: iNone;  // [bp-0xc0]
    let v9: struct24;  // [bp-0xb0]
    let v10: u64;  // [bp-0xa8]
    let v11: struct24;  // [bp-0x98], Other Possible Types: u64
    let v12: u64;  // [bp-0x98]
    let v13: u32;  // [bp-0x98]
    let v14: u32;  // [bp-0x98]
    let v15: u64;  // [bp-0x98]
    let v16: u64;  // [bp-0x80]
    let v17: iNone;  // [bp-0x78], Other Possible Types: u64
    let v18: iNone;  // [bp-0x68]
    let v19: u64;  // [bp-0x58]
    let v20: &str;  // [bp-0x50]
    let v21: u64;  // [bp-0x40]
    let v22: u64;  // [bp-0x38]
    let v24: u64;  // rbx
    let v25: i64;  // r15
    let v26: u64;  // rbp
    let v28: u64;  // rbx
    let v29: u64;  // rdx
    let v31: u32;  // 4098
    let v32: u64;  // rbx
    let v33: i64;  // r15
    let v34: u64;  // rbx
    let v35: u64;  // rbx
    let v36: u8;  // al
    let v37: u64;  // r12
    let v39: &u64;  // rax
    let v40: u64;  // rdi
    let v41: u64;  // rax
    let v42: &mut [u8];  // rax:rdx
    let v43: &mut [u8];  // rax:rdx

    v9 = struct24 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: 0
    };
    if *((a1 + 88) as &i64) {
        do {
            v28 = v24;
            if !alloc::collections::btree::map::BTreeMap<K,V,A>::get(v9.field_0, v10, just::token::Token::lexeme(v25), v29) {
                alloc::collections::btree::map::BTreeMap<K,V,A>::insert(&v9, just::token::Token::lexeme(v25), v29);
                v31 = *((v25 - 128) as &i32);
                if !((~(v26) | v31 != 18) & 1) && *((v25 + 73) as &i8) != 2 {
                    v11 = struct24 {
                        field_0: 9223372036854775857
                        field_8: just::token::Token::lexeme(v25)
                        field_16: v29
                    };
                    v3 = just::token::Token::error(v25, &v11);
                }
            } else {
                v16 = just::token::Token::lexeme(v25);
                v17 = v29;
                v11 = struct24 {
                    field_0: 9223372036854775836
                    field_8: just::token::Token::lexeme(a1 + 144)
                    field_16: v29
                };
                v3 = just::token::Token::error(v25, &v11);
                goto LABEL_655e1f;
            }
            v25 += 208;
            v32 = v28 - 208;
            v24 = v32;
        } while (v28 != 208);
    }
    v33 = *((a1 + 8) as &i64);
    v34 = *((a1 + 16) as &i64) * 32;
    v0 = *((a1 + 254) as &i8);
    if (*((a1 + 254) as &i8) & 1) {
        while (v34) {
            v34 -= 32;
            just::line::Line::is_continuation(*((v33 + 8) as &i64), *((v33 + 16) as &i64));
        }
    } else {
        v35 = v34 + v33;
        for (v36 = 0; v33 != v35; v36 = just::line::Line::is_continuation(*((v33 + 8) as &i64), *((v33 + 16) as &i64))) {
            v12 = v11;
            if !(v36 & 1) {
                v12 = v11;
                if *((v33 + 16) as &i64) {
                    v12 = v11;
                    if *(*((v33 + 8) as &i64) as &i32) == 18 {
                        v37 = *((v33 + 8) as &i64) + 8;
                        v2 = just::token::Token::lexeme(v37);
                        v13 = 0;
                        v42 = core::char::methods::encode_utf8_raw(32, &v13, v29);
                        if !core::slice::<impl [T]>::starts_with(v2, v29, v42.data_ptr, v42.length) {
                            v14 = 0;
                            v43 = core::char::methods::encode_utf8_raw(9, &v14, v29);
                            v12 = v15;
                            if core::slice::<impl [T]>::starts_with(v2, v29, v43.data_ptr, v43.length) {
                                goto LABEL_655ca1;
                            }
                        } else {
LABEL_655ca1:
                            v11 = 9223372036854775843;
                            v3 = just::token::Token::error(v37, &v11);
                        }
                    }
                }
            }
            v11 = v12;
        }
    }
    if !(v0 & 1) {
        v39 = just::attribute_set::AttributeSet::get(a1 + 216, 4);
        if !v39 {
            goto LABEL_655da9;
        }
        v40 = a1 + 144;
        v41 = just::token::Token::lexeme(v40);
        <just::attribute::Attribute as core::clone::Clone>::clone(&v3 as u8, v39);
        v20 = "Recipe";
        v21 = v41;
        v22 = v29;
        v11 = v3;
        v17 = v6;
        v18 = v7;
        v19 = v7 as i64;
        v3 = just::token::Token::error(v40, &v11);
LABEL_655e1f:
        *((v1 + 64) as void*) = v8;
        *((v1 + 48) as void*) = v7;
        *((v1 + 32) as void*) = v6;
        *((v1 + 16) as void*) = v5;
        *(v1 as &struct712) = v4;
    } else {
LABEL_655da9:
        *((a0 + 72) as &i8) = 37;
    }
    return;
}
