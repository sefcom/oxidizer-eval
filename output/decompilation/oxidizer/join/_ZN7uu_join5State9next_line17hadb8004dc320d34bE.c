fn uu_join::State::next_line(a1: i64, a2: i64) -> : struct48 {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x159]
    let v1: u64;  // [bp-0x158]
    let v2: u64;  // [bp-0x150]
    let v3: i8;  // [bp-0x148]
    let v4: i8;  // [bp-0x138]
    let v5: u64;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: u128;  // [bp-0x118]
    let v8: struct8;  // [bp-0x108]
    let v9: u64;  // [bp-0x100]
    let v10: u128;  // [bp-0xf8]
    let v11: u64;  // [bp-0xe8]
    let v12: void*;  // [bp-0xd8]
    let v13: void*;  // [bp-0xa0], Other Possible Types: u64
    let v14: u64;  // [bp-0x98]
    let v15: u8;  // [bp-0x88]
    let v16: alloc::string::String;  // [bp-0x80]
    let v17: u64;  // [bp-0x70]
    let v18: u128;  // [bp-0x68]
    let v19: struct8;  // [bp-0x58]
    let v20: alloc::borrow::Cow<str>;  // [bp-0x48]
    let v22: u64;  // r13
    let v23: i64;  // rdi
    let v24: i64;  // rdi
    let v25: void*;  // rax
    let v26: u64;  // rdx
    let v27: i64;  // rdi
    let v28: u128;  // xmm0
    let v29: i64;  // rdi

    v22 = 0x8000000000000000;
    uu_join::State::read_line(a0, a1, a2);
    if v1 == 9223372036854775809 {
        *((v23 + 8) as &i64) = 0x8000000000000000;
        *((v23 + 16) as &u64) = v2;
        v22 = 9223372036854775809;
    } else {
        v19 = *(&v4 as &i128);
        v18 = *(&v3 as &i128);
        if v1 != 0x8000000000000000 {
            v5 = v1;
            v6 = v2;
            v8 = v19;
            v7 = v18;
            v0 = *((a1 + 289) as &i8);
            if *((a1 + 289) as &i8) == 1 {
                *((v24 + 32) as &i128) = *(&v8 as &i128);
                *((v24 + 16) as &u128) = v7;
                *(v24 as &u64) = v5;
                *((v24 + 8) as &u64) = v6;
                return;
            }
            v12 = uu_join::State::get_current_key(a0);
            v25 = uu_join::Line::get_field(&v5, *((a0 + 64) as &i64));
            if uu_join::Input<Sep>::compare(*((a1 + 288) as &i32), v12, v26, v25, v26) as i8 == 1 && (v0 == 2 || *((a0 + 91) as &i8) && !*((a0 + 90) as &i8)) {
                v13 = 0;
                v14 = *((a0 + 24) as &i128);
                v15 = 0;
                v20 = alloc::string::String::from_utf8_lossy(v8.field_16, v9);
                v16 = format!("{}:{}: is not sorted: {}", &v13, a0 + 80, &v20);
                v10 = *(&v16.vec.buf.cap as &i128);
                v11 = v17;
                if v0 == 2 {
                    *((v27 + 24) as &u64) = v11;
                    *((v27 + 8) as &u128) = v10;
                    *(v27 as &i64) = 9223372036854775809;
                    return;
                }
                v13 = uucore::execution_phrase();
                v14 = v26;
                eprintln!("{}: {}", &v13, &v10);
                *((a0 + 90) as &i8) = 1;
            }
            v28 = *(&v5 as &i128);
            *((v29 + 32) as &i128) = *(&v8 as &i128);
            *((v29 + 16) as &u128) = v7;
            *(v29 as &u128) = v28;
            return;
        }
    }
    *(v23 as &u64) = v22;
    return;
}
