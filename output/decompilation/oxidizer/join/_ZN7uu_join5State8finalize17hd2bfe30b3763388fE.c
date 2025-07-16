fn uu_join::State::finalize(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u128;  // [bp-0xc8]
    let v1: u64;  // [bp-0xb8]
    let v2: u8;  // [bp-0xa8]
    let v3: u128;  // [bp-0xa8]
    let v4: struct8;  // [bp-0xa8]
    let v5: u8;  // [bp-0xa0]
    let v6: u128;  // [bp-0x98]
    let v7: u64;  // [bp-0x90]
    let v8: u128;  // [bp-0x88]
    let v9: u64;  // [bp-0x70]
    let v10: u128;  // [bp-0x68]
    let v12: u64;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: u128;  // [bp-0x50]
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v19: u64;  // rax
    let v20: u128;  // xmm0
    let v21: struct8;  // rax
    let v23: u64;  // [bp-0x98]

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    if *((a0 + 89) as &i8) {
        v17 = uu_join::State::print_first_line(a0, a1, a3);
        if v17 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
        }
    }
    uu_join::State::next_line(a0, a2, a3);
    v18 = *(&v2 as &i64);
    memcpy(&v0, &v5, 16);
    v1 = v7;
    if v18 != 9223372036854775809 {
        v14 = v8;
        v10 = v0;
        v13 = v1;
        v9 = v18;
        if v9 == 0x8000000000000000 {
            return 0;
        }
        loop {
            if *((a0 + 89) as &i8) {
                v19 = uu_join::State::print_line(a0, a1, &v9, a3);
                if v19 {
                    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
                }
            }
            v20 = *(&v9 as &i128);
            v8 = v14;
            v6 = *(&v12 as &i128);
            v3 = v20;
            v2 = uu_join::State::reset(v1);
            uu_join::State::next_line(a0, a2, a3);
            v21 = v4.field_16;
            memcpy(&v0, &v5, 16);
            v1 = v7;
            if v21 == 9223372036854775809 {
                break;
            }
            v14 = v8;
            v13 = v1;
            v10 = v0;
            v9 = v21;
            if v9 == 0x8000000000000000 {
                return 0;
            }
        }
    }
    v23 = v1;
    memcpy(&v2, &v0, 16);
    return alloc::boxed::Box<T>::new(&v2);
}
