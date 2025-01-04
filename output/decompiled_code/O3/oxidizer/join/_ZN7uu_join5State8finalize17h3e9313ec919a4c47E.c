fn uu_join::State::finalize(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0xc8]
    let v1: i64;  // [sp-0xb8]
    let v2: i128;  // [sp-0xa8], Other Possible Types: struct48
    let v3: i128;  // [bp-0x98]
    let v4: i128;  // [sp-0x88]
    let v5: i64;  // [sp-0x70]
    let v6: i128;  // [sp-0x68]
    let v7: i64;  // [sp-0x58]
    let v8: i128;  // [sp-0x50]
    let v9: i64;  // [sp-0x38]
    let v11: i64;  // rax
    let v12: i64;  // rax
    let v14: i128;  // xmm0
    let v15: i128;  // xmm0
    let v16: i128;  // xmm0
    let v17: i256;  // ymm0
    let v18: i256;  // ymm0
    let v19: i256;  // ymm1
    let v20: i256;  // ymm2
    let v21: i64;  // rax
    let v22: i128;  // xmm0
    let v23: i128;  // xmm1
    let v24: i128;  // xmm2
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    if *((a0 + 89) as &i8) {
        v11 = uu_join::State::print_first_line(a0, a1, a3);
        if v11 {
            v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
            return v12;
        }
    }
    v2 = uu_join::State::next_line(a0, a2);
    v14 = *((&v2 as &char + 8) as &i128);
    v0 = v14;
    v1 = *((&v2 as &char + 24) as &i64);
    if v5 != 9223372036854775809 {
        v15 = v4;
        v8 = v15;
        v16 = v0;
        v18 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
        v6 = v16;
        v7 = v1;
        v5 = v2;
        if v5 == 0x8000000000000000 {
            return 0;
        }
        v9 = 9223372036854775809;
        loop {
            if *((a0 + 89) as &i8) {
                v21 = uu_join::State::print_line(a0, a1, &v5, a3);
                if v21 {
                    v12 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
                    return v12;
                }
            }
            v22 = v5;
            v23 = *((&v6 as &char + 8) as &i128);
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
            v24 = v8;
            v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
            v4 = v24;
            v3 = v23;
            v2 = v22;
            uu_join::State::reset(a0, &v2, v1);
            v2 = uu_join::State::next_line(a0, a2);
            v26 = *((&v2 as &char + 8) as &i128);
            v0 = v26;
            v1 = *((&v2 as &char + 24) as &i64);
            if v5 == v9 {
                break;
            }
            v27 = v4;
            v8 = v27;
            v7 = v1;
            v28 = v0;
            v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
            v6 = v28;
            v5 = v2;
            if v5 == 0x8000000000000000 {
                return 0;
            }
        }
    }
    v2 = v0;
    v12 = alloc::boxed::Box<T>::new(&v2);
    return v12;
}
