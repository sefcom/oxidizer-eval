fn uu_join::State::finalize(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct40;  // [bp-0xc8]
    let v1: u64;  // [bp-0xb8]
    let v2: i8;  // [bp-0xa8]
    let v3: struct40;  // [bp-0xa8]
    let v4: struct8;  // [bp-0xa8]
    let v5: struct40;  // [bp-0xa8]
    let v6: i8;  // [bp-0xa0]
    let v7: struct40;  // [bp-0x98]
    let v8: u64;  // [bp-0x90]
    let v9: struct16;  // [bp-0x88]
    let v10: core::fmt::rt::Argument;  // [bp-0x70]
    let v11: struct40;  // [bp-0x68]
    let v13: u64;  // [bp-0x60]
    let v14: u64;  // [bp-0x58]
    let v15: struct16;  // [bp-0x50]
    let v18: u64;  // rax
    let v19: core::fmt::rt::Argument;  // rax
    let v20: u64;  // rax
    let v21: struct40;  // xmm0
    let v22: struct8;  // rax
    let v24: u64;  // [bp-0x98]

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    if *((a0 + 89) as &i8) {
        v18 = uu_join::State::print_first_line(a0, a1, a3);
        if v18 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
        }
    }
    uu_join::State::next_line(a0, a2, a3);
    v19 = *(&v2 as &i64);
    v0 = *(&v6 as &i128);
    v1 = v8;
    if v19 != 9223372036854775809 {
        v15 = v9;
        v11 = v0;
        v14 = v1;
        v10 = v19;
        if v10 == 0x8000000000000000 {
            return 0;
        }
        loop {
            if *((a0 + 89) as &i8) {
                v20 = uu_join::State::print_line(a0, a1, &v10, a3);
                if v20 {
                    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
                }
            }
            v21 = v10.ty;
            v9 = v15;
            *(&v7.field_0 as &i128) = *(&v13 as &i128);
            v3 = v21;
            v5 as u64 = uu_join::State::reset(v1);
            uu_join::State::next_line(a0, a2, a3);
            v22 = v4.field_16;
            v0 = *(&v3.field_8 as &i128);
            v1 = v8;
            if v22 == 9223372036854775809 {
                break;
            }
            v15 = v9;
            v14 = v1;
            v11 = v0;
            v10 = v22;
            if v10 == 0x8000000000000000 {
                return 0;
            }
        }
    }
    v24 = v1;
    v5 = v0;
    return alloc::boxed::Box<T>::new(&v5 as u64);
}
