fn uu_join::State::next_line(a1: i64, a2: i64) -> : struct48 {
    let a0: i64;  // rsi
    let v0: u8;  // [bp-0x159]
    let v1: i64;  // [bp-0x158], Other Possible Types: u64
    let v2: u64;  // [bp-0x150]
    let v3: i8;  // [bp-0x148], Other Possible Types: u64
    let v4: u64;  // [bp-0x140]
    let v5: i64;  // [bp-0x138], Other Possible Types: char
    let v6: u64;  // [bp-0x130]
    let v7: u64;  // [bp-0x128]
    let v8: u64;  // [bp-0x120]
    let v9: u128;  // [bp-0x118]
    let v10: u128;  // [bp-0x108]
    let v11: u64;  // [bp-0x100]
    let v12: u128;  // [bp-0xf8]
    let v13: u64;  // [bp-0xe8]
    let v14: void*;  // [bp-0xd8]
    let v15: struct24;  // [bp-0xd0], Other Possible Types: u64
    let v16: u64;  // [bp-0xc8]
    let v17: i64;  // [bp-0xc0]
    let v18: u64;  // [bp-0xb8]
    let v19: void*;  // [bp-0xb0]
    let v20: void*;  // [bp-0xa0], Other Possible Types: u64
    let v21: u128;  // [bp-0x98]
    let v22: u8;  // [bp-0x88]
    let v23: u128;  // [bp-0x80]
    let v24: u64;  // [bp-0x70]
    let v25: u128;  // [bp-0x68]
    let v26: u128;  // [bp-0x58]
    let v27: alloc::borrow::Cow<str>;  // [bp-0x48]
    let v29: u64;  // r13
    let v30: i64;  // rdi
    let v31: i64;  // rdi
    let v32: void*;  // rax
    let v33: u64;  // rdx
    let v34: i64;  // rdi
    let v35: u128;  // xmm0
    let v36: i64;  // rdi

    v29 = 0x8000000000000000;
    uu_join::State::read_line(a0, a1 + 2, a2);
    if v1 == 9223372036854775809 {
        *((v30 + 8) as &i64) = 0x8000000000000000;
        *((v30 + 16) as &u64) = v2;
        v29 = 9223372036854775809;
    } else {
        v26 = *(&v5 as &i128);
        v25 = *(&v3 as &i128);
        if v1 != 0x8000000000000000 {
            v7 = v1;
            v8 = v2;
            v10 = v26;
            v9 = v25;
            v0 = *((a1 + 1) as &i8);
            if *((a1 + 1) as &i8) == 1 {
                *((v31 + 32) as &u128) = v10;
                *((v31 + 16) as &u128) = v9;
                *(v31 as &u64) = v7;
                *((v31 + 8) as &u64) = v8;
                return;
            }
            v14 = uu_join::State::get_current_key(a0);
            v32 = uu_join::Line::get_field(&v7, *((a0 + 64) as &i64));
            if uu_join::Input<Sep>::compare(*(a1 as &i8), v14, v33, v32, v33) as i8 == 1 && (v0 == 2 || *((a0 + 91) as &i8) && !*((a0 + 90) as &i8)) {
                v20 = 0;
                v21 = *((a0 + 24) as &i128);
                v22 = 0;
                v27 = alloc::string::String::from_utf8_lossy(v10 as i64, v11);
                v1 = &v20;
                v2 = <os_display::Quoted as core::fmt::Display>::fmt;
                v3 = a0 + 80;
                v4 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                v5 = &v27;
                v6 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
                v15 = &g_532728;
                v16 = 3;
                v19 = 0;
                v17 = &v1;
                v18 = 3;
                v15 = core::option::Option<T>::map_or_else(a1);
                v12 = v23;
                v13 = v24;
                if v0 == 2 {
                    *((v34 + 24) as &u64) = v13;
                    *((v34 + 8) as &u128) = v12;
                    *(v34 as &i64) = 9223372036854775809;
                    return;
                }
                v20 = uucore::execution_phrase();
                v21 = v33;
                eprintln!("{}: {}", &v20, &v12);
                *((a0 + 90) as &i8) = 1;
            }
            v35 = *(&v7 as &i128);
            *((v36 + 32) as &u128) = v10;
            *((v36 + 16) as &u128) = v9;
            *(v36 as &u128) = v35;
            return;
        }
    }
    *(v30 as &u64) = v29;
    return;
}
