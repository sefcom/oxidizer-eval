fn uu_test::parser::Parser::maybe_boolop() -> u32 {
    let v0: i128;  // [bp-0xf8], Other Possible Types: Enum
    let v1: i64;  // [bp-0xf0]
    let v2: i128;  // [bp-0xe8]
    let v3: i64;  // [sp-0xd8]
    let v4: i64;  // [sp-0xc8]
    let v5: i128;  // [sp-0xb8]
    let v6: i64;  // [sp-0xa8]
    let v7: i256;  // [sp-0xa0], Other Possible Types: struct32, struct24, Enum
    let v8: i64;  // [sp-0x80], Other Possible Types: Enum
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i320;  // [sp-0x58], Other Possible Types: Enum
    let v13: i64;  // rsi
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v17: i64;  // r15
    let v19: i64;  // r13
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v27: i64;  // r15
    let v29: i64;  // rbp
    let v32: i128;  // xmm0
    let v34: i64;  // r15
    let v35: i64;  // rdx
    let v36: i64;  // rbx
    let v37: i64;  // rbx
    let v38: i64;  // rax
    let v39: i64;  // rcx
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i64;  // rdi
    let v43: i64;  // rax
    let v44: i64;  // rdi
    let v45: i64;  // rcx
    let v46: i64;  // rbp

    v14 = *((v13 + 24) as &i64);
    if v14 == 9223372036854775809 {
        v15 = *((v13 + 56) as &i64);
        v14 = 0x8000000000000000;
        if v15 != *((v13 + 72) as &i64) {
            *((v13 + 56) as &i64) = v15 + 24;
            v14 = *(v15 as &i64);
            v0 = *((v15 + 8) as &i128);
        }
        *((v13 + 24) as &i64) = v14;
        *((v13 + 32) as &i128) = v0;
    }
    if v14 == 0x8000000000000000 {
        v8 = 0x8000000000000000;
    } else {
        v17 = *((v13 + 40) as &i64);
        if v17 {
            if v17 < 0 {
                v4 = 0;
            }
            v4 = 1;
        }
        memcpy(v9, *((v13 + 32) as &i64), v17);
        v8 = v17;
        v9 = v19;
        v10 = v17;
    }
    v0 = uu_test::parser::Symbol::new(&v8);
    if v0 == 2 {
        v22 = *((v13 + 24) as &i64);
        *((v13 + 24) as &i64) = 9223372036854775809;
        if v0 != 9223372036854775809 {
            v1 = *((v13 + 32) as &i128);
            v0 = v22;
        } else {
            v23 = *((v13 + 56) as &i64);
            if v23 == *((v13 + 72) as &i64) {
                v0 = 0x8000000000000000;
            } else {
                *((v13 + 56) as &i64) = v23 + 24;
                v2 = *((v23 + 16) as &i64);
                v0 = *(v23 as &i128);
            }
        }
        v11 = uu_test::parser::Symbol::new(&v0);
        v24 = *((v13 + 24) as &i64);
        if v24 == 9223372036854775809 {
            v25 = *((v13 + 56) as &i64);
            v24 = 0x8000000000000000;
            if v25 != *((v13 + 72) as &i64) {
                *((v13 + 56) as &i64) = v25 + 24;
                v24 = *(v25 as &i64);
                v0 = *((v25 + 8) as &i128);
            }
            *((v13 + 24) as &i64) = v24;
            *((v13 + 32) as &i128) = v0;
        }
        if v24 == 0x8000000000000000 {
            v0 = 0x8000000000000000;
        } else {
            v27 = *((v13 + 40) as &i64);
            memcpy(v1, *((v13 + 32) as &i64), v27);
            v0 = v27;
            v1 = v29;
            v2 = v27;
        }
        v8 = uu_test::parser::Symbol::new(&v0);
        if v8 == 6 {
            goto *((4297376 + (stack_base)[88] as i64 * 4) as &i32) + 4297376;
        }
        v4 = &v8;
        v3 = *((&v11 as &char + 32) as &i64);
        v32 = v11;
        v2 = *((&v11 as &char + 16) as &i128);
        v0 = v32;
        v7 = std::sys::os_str::bytes::Slice::to_owned(&g_4193ad, 2);
        v34 = v0;
        if v34 == 2 && *((&v2 as &char + 8) as &i64) == v35 && !bcmp(v2, *((&v7 as &char + 8) as &i64), v35) as i64 {
            v7 = uu_test::parser::Parser::term(v13);
            v36 = v7;
            if v36 != 7 {
                v6 = *((&v7 as &char + 24) as &i64);
                v5 = *((&v7 as &char + 8) as &i128);
                goto LABEL_484313;
            }
        } else {
            v7 = uu_test::parser::Parser::expr(v13);
            v36 = v7;
            if v36 != 7 {
                v6 = *((&v7 as &char + 24) as &i64);
                v5 = *((&v7 as &char + 8) as &i128);
                if v34 - 2 < 2 {
                    goto LABEL_484313;
                }
                if !(v34 == 4 || v34 == 5) {
LABEL_48432c:
                    v45 = v44;
                    *((v45 + 24) as &i64) = v6;
                    *((v45 + 8) as &i128) = v5;
                    *(v45 as &i64) = v36;
LABEL_484346:
                    return;
                }
LABEL_484313:
                goto LABEL_48432c;
            }
        }
        v37 = *((v13 + 16) as &i64);
        if v37 == *(v13 as &i64) {
            alloc::raw_vec::RawVec<T,A>::grow_one(v13);
        }
        v38 = *((v13 + 8) as &i64);
        v39 = v37 * 5;
        *((v38 + v39 * 8 + 32) as &i64) = *((&v11 as &char + 32) as &i64);
        v40 = v11;
        *((v38 + v39 * 8 + 16) as &i128) = *((&v11 as &char + 16) as &i128);
        *((v38 + v39 * 8) as &i128) = v40;
        *((v13 + 16) as &i64) = v37 + 1;
        uu_test::parser::Parser::maybe_boolop();
        if v0 != 7 {
            v41 = v0;
            v43 = v42;
            *((v43 + 16) as &i128) = v2;
            *(v43 as &i128) = v41;
            goto LABEL_484346;
        }
    }
    *(v46 as &i64) = 7;
    goto LABEL_484346;
}
