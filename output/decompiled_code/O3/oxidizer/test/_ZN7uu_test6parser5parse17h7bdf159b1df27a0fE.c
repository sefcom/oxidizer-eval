fn uu_test::parser::parse() -> u32 {
    let v0: Enum;  // [bp-0x100]
    let v1: u64;  // [sp-0xf0]
    let v2: u64;  // [sp-0xe8]
    let v3: u8;  // [bp-0xe0]
    let v4: &u64;  // [sp-0xd0]
    let v5: &u64;  // [sp-0xc8], Other Possible Types: u64
    let v6: u64;  // [sp-0xc0]
    let v7: u64;  // [sp-0xb8]
    let v8: void*;  // [sp-0xb0]
    let v9: u64;  // [sp-0xa8]
    let v10: void*;  // [sp-0xa0]
    let v11: u128;  // [sp-0x98]
    let v12: u64;  // [sp-0x88]
    let v13: u128;  // [sp-0x80], Other Possible Types: Enum
    let v14: u8;  // [bp-0x70]
    let v15: u64;  // [sp-0x68], Other Possible Types: void*, Enum
    let v16: void*;  // [sp-0x58]
    let v17: u64;  // [sp-0x48]
    let v18: u64;  // [sp-0x40]
    let v19: u64;  // [sp-0x38]
    let v20: u8;  // [sp-0x30]
    let v22: &struct_0;  // rsi
    let v23: &u64;  // rcx
    let v24: u64;  // r12
    let v25: u64;  // r14
    let v26: &u64;  // rax
    let v27: &u64;  // rax
    let v28: &struct_2;  // rdi
    let v29: &struct_2;  // rdi
    let v30: u64;  // r15
    let v31: u64;  // r12
    let v33: u64;  // rsi
    let v34: &struct_2;  // rdi

    v23 = v22->field_8;
    v4 = v23;
    v5 = v23;
    v6 = v22->field_0;
    v7 = &v23[3 * v22->field_10];
    *(&v0 as &Enum) = Enum {
        field_24: 0
        field_32: 0
    };
    v15 = uu_test::parser::Parser::expr(&v0);
    v24 = v15;
    if v24 != 7 {
        v12 = *((&v15 as &char + 24) as &i64);
        v11 = *((&v15 as &char + 8) as &i128);
        goto LABEL_484f36;
    }
    v25 = v2;
    v2 = 9223372036854775809;
    if v25 != 9223372036854775809 {
        v27 = &v3;
        goto LABEL_484d4c;
    }
    v26 = v5;
    if v26 == v7 {
        *((&v28->field_8 as &char + 8) as &u64) = v1;
        *(&(&v28->field_0)[1] as &i128) = *(&v0.field_24 as &i128);
        v28->field_0 = 7;
        goto LABEL_484e8f;
    } else {
        v5 = v26 + 3;
        v25 = *(v26);
        v27 = v26 + 1;
LABEL_484d4c:
        if v25 != 0x8000000000000000 {
            v30 = *(v27);
            v31 = v27[1];
            v8 = 0;
            v9 = 1;
            v10 = 0;
            v19 = 32;
            v20 = 3;
            v15 = 0;
            v16 = 0;
            v17 = &v8;
            v18 = &g_4e1e70;
            v13 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v30, v31);
            if (!v13 as i64 ? os_display::unix::write(&v15, *((&v13 as &char + 8) as &i64), *(&v14 as &i64), 1) as i8 : os_display::unix::write_escaped(&v15, v30, v31) as i8) {
                core::result::unwrap_failed(); /* do not return */
            }
            v11 = *(&v8 as &i128);
            v12 = v10;
            v24 = 2;
LABEL_484f36:
            *((&v34->field_8 as &char + 8) as &u64) = v12;
            (&v34->field_0)[1] = v11;
            v34->field_0 = v24;
        } else {
            *((&v29->field_8 as &char + 8) as &u64) = v1;
            *(&(&v29->field_0)[1] as &i128) = *(&v0.field_24 as &i128);
            v29->field_0 = 7;
LABEL_484e8f:
            v33 = v2;
        }
        return;
    }
}
