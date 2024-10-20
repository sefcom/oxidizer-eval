fn uu_test::parser::Parser::expect() -> u32 {
    let v0: i64;  // [sp-0x98]
    let v1: i64;  // [sp-0x90]
    let v2: i64;  // [sp-0x88]
    let v3: i320;  // [sp-0x80], Other Possible Types: Enum
    let v4: i64;  // [sp-0x58]
    let v5: i128;  // [bp-0x50]
    let v6: i64;  // [sp-0x48]
    let v7: i64;  // [sp-0x38]
    let v8: i64;  // [sp-0x30]
    let v9: i64;  // [sp-0x28]
    let v10: i8;  // [sp-0x20]
    let v12: i64;  // rsi
    let v13: i64;  // rcx
    let v14: i64;  // rcx
    let v15: i64;  // r14
    let v16: i64;  // rsi
    let v17: i64;  // rdi
    let v18: i64;  // rdi

    v13 = *((v12 + 24) as &i64);
    *((v12 + 24) as &i64) = 9223372036854775809;
    if v4 != 9223372036854775809 {
        v5 = *((v12 + 32) as &i128);
        v4 = v13;
    } else {
        v14 = *((v12 + 56) as &i64);
        if v14 == *((v12 + 72) as &i64) {
            v4 = 0x8000000000000000;
        } else {
            *((v12 + 56) as &i64) = v14 + 24;
            v6 = *((v14 + 16) as &i64);
            v4 = *(v14 as &i128);
        }
    }
    v3 = uu_test::parser::Symbol::new(&v4);
    v15 = v3;
    if v15 == 3 && *((&v3 as &char + 24) as &i64) == 1 && *(*((&v3 as &char + 16) as &i64) as &i8) == 41 {
        v16 = *((&v3 as &char + 8) as &i64);
        *(v17 as &i64) = 7;
        if v16 {
            return;
        }
    } else {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v9 = 32;
        v10 = 3;
        v4 = 0;
        v6 = 0;
        v7 = &v0;
        v8 = &g_4e1e70;
        if os_display::unix::write(&v4, &g_4193c8, 1, 1) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        *((v18 + 24) as &i64) = v2;
        *((v18 + 8) as &i64) = v0;
        *(v18 as &i64) = 1;
        if v15 != 3 {
            if v15 - 2 <= 3 && *((&v3 as &u8 + (&g_4102c0)[2 + v15]) as &i64) {
                goto LABEL_482976;
            }
        } else {
            if *((&v3 as &char + 8) as &i64) {
LABEL_482976:
            } else {
                return;
            }
        }
    }
    return;
}
