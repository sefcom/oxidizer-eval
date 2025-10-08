fn uu_join::State::next_line(a0: i64, a1: i64, a2: i64) -> int {
    let v0: u8;  // [bp-0x169]
    let v1: u128;  // [bp-0x168]
    let v2: u64;  // [bp-0x158]
    let v3: struct48;  // [bp-0x148]
    let v4: u64;  // [bp-0x140]
    let v5: u64;  // [bp-0x118]
    let v6: u64;  // [bp-0x110]
    let v7: iNone;  // [bp-0x108]
    let v8: u128;  // [bp-0xf8]
    let v9: u64;  // [bp-0xf0]
    let v10: u64;  // [bp-0xe8]
    let v11: u64;  // [bp-0xe0]
    let v12: u64;  // [bp-0xd8]
    let v13: iNone;  // [bp-0xd0]
    let v14: iNone;  // [bp-0xc0]
    let v15: Result<struct24, struct24>;  // [bp-0x80]
    let v16: u64;  // [bp-0x68]
    let v17: u64;  // [bp-0x60]
    let v18: u8;  // [bp-0x50]
    let v19: alloc::string::String;  // [bp-0x48]
    let v21: core::result::Result<(), std::io::error::Error>;  // rax
    let v22: iNone;  // xmm0
    let v23: struct16;  // xmm1
    let v24: iNone;  // xmm2
    let v25: u64;  // rax
    let v26: u64;  // rdx
    let v27: u64;  // rax

    v3 = uu_join::State::read_line(a1, a2 + 2);
    if v3.field_0 as i64 == 9223372036854775809 {
        return struct24 {
            field_0: 9223372036854775809
            field_8: 0x8000000000000000
            field_16: v12
        };
    }
    v14 = v3.field_32;
    v13 = v3.field_16;
    v11 = v3.field_0;
    v12 = v4;
    if v3.field_0 as i64 == 0x8000000000000000 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    *(&v8 as void*) = v14;
    v7 = v13;
    v5 = v11;
    v6 = v12;
    v21 = *((a2 + 1) as &i8);
    v0 = v21 as u8;
    if v0 == 1 {
        v22 = *(&v11 as &i128);
        v23 = v13;
        v24 = v14;
    } else {
        v10 = uu_join::State::get_current_key(a1);
        v25 = uu_join::Line::get_field(&v5, *((a1 + 64) as &i64));
        v27 = uu_join::Input<Sep>::compare(*(a2 as &i8), v10, v26, v25, v26);
        if v27 == 1 && (v0 == 2 || *((a1 + 91) as &i8) && !*((a1 + 90) as &i8)) {
            v15 as u64 = 0;
            v17 = *((a1 + 24) as &i128);
            v18 = 0;
            v15 = alloc::string::String::from_utf8_lossy(v8 as i64, v9);
            v19 = format!("{}:{}: is not sorted: {}", &v15 as u64, a1 + 80, &v15);
            v1 = *(&v19.vec.buf.inner.cap as &i128);
            v2 = v19.vec.len;
            if v0 == 2 {
                return struct32 {
                    field_0: 9223372036854775809
                    field_8: v1
                    field_24: v2
                };
            }
            v16 = uucore::execution_phrase();
            v17 = v26;
            eprintln!("{}: {}", &v16, &v1 as u8);
            *((a1 + 90) as &i8) = 1;
        }
        v22 = *(&v5 as &i128);
        v23 = v7;
        v24 = v8;
    }
    return struct48 {
        field_0: v22
        field_16: v23
        field_32: v24
    };
}
