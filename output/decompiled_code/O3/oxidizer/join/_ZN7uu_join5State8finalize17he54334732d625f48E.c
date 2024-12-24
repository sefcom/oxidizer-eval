fn uu_join::State::finalize(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0xc8]
    let v1: i64;  // [sp-0xb8]
    let v2: i384;  // [sp-0xa8], Other Possible Types: struct48, struct32
    let v3: i128;  // [bp-0x98]
    let v4: i64;  // [sp-0x70]
    let v5: i128;  // [sp-0x68]
    let v6: i64;  // [sp-0x58]
    let v7: i128;  // [sp-0x50]
    let v8: i64;  // [sp-0x38]
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v13: i128;  // xmm0
    let v14: i128;  // xmm0
    let v15: i128;  // xmm0
    let v16: i256;  // ymm0
    let v17: i256;  // ymm0
    let v18: i256;  // ymm1
    let v19: i256;  // ymm2
    let v20: i64;  // rax
    let v21: i128;  // xmm0
    let v22: i128;  // xmm1
    let v25: i128;  // xmm0
    let v26: i128;  // xmm0
    let v27: i128;  // xmm0

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    if *((a0 + 89) as &i8) {
        v10 = uu_join::State::print_first_line(a0, a1, a3);
        if v10 {
            v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
            return v11;
        }
    }
    v2 = uu_join::State::next_line(a0, a2);
    v13 = *((&v2 as &char + 8) as &i128);
    v0 = v13;
    v1 = *((&v2 as &char + 24) as &i64);
    if v4 != 9223372036854775809 {
        v14 = v2.field_32;
        v7 = v14;
        v15 = v0;
        v17 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
        v5 = v15;
        v6 = v1;
        v4 = v2;
        if v4 == 0x8000000000000000 {
            return 0;
        }
        v8 = 9223372036854775809;
        loop {
            if *((a0 + 89) as &i8) {
                v20 = uu_join::State::print_line(a0, a1, &v4, a3);
                if v20 {
                    v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
                    return v11;
                }
            }
            v21 = v4;
            v22 = *((&v5 as &char + 8) as &i128);
            v18 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
            v19 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
            v2.field_32 = vvar_192{reg 288};
            v3 = v22;
            v2 = v21;
            uu_join::State::reset(a0, &v2, v1);
            v2 = uu_join::State::next_line(a0, a2);
            v25 = *((&v2 as &char + 8) as &i128);
            v0 = v25;
            v1 = *((&v2 as &char + 24) as &i64);
            if v4 == v8 {
                break;
            }
            v26 = v2.field_32;
            v7 = v26;
            v6 = v1;
            v27 = v0;
            v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
            v5 = v27;
            v4 = v2;
            if v4 == 0x8000000000000000 {
                return 0;
            }
        }
    }
    v2 = struct32 {
        field_0: v0
        field_16: <UNKNOWN>
    };
    v11 = alloc::boxed::Box<T>::new(&v2);
    return v11;
}
