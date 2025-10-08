fn uu_join::State::finalize(a0: i64, a1: u64, a2: void*, a3: void*) -> long long {
    let v0: u64;  // [bp-0xd8]
    let v1: iNone;  // [bp-0xd0], Other Possible Types: u128
    let v4: u64;  // [bp-0xc0]
    let v5: iNone;  // [bp-0xb8]
    let v6: struct48;  // [bp-0x98]
    let v7: struct48;  // [bp-0x98]
    let v8: struct48;  // [bp-0x98]
    let v9: u64;  // [bp-0x80]
    let v10: iNone;  // [bp-0x78]
    let v11: iNone;  // [bp-0x68]
    let v12: u64;  // [bp-0x58]
    let v13: u128;  // [bp-0x48]
    let v14: u64;  // [bp-0x38]
    let v16: u64;  // rax
    let v17: u64;  // rax
    let v18: i64;  // rdi
    let v19: u64;  // rax
    let v20: iNone;  // xmm0
    let v21: u64;  // rax

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    if *((a0 + 89) as &i8) {
        v16 = uu_join::State::print_first_line(a0, a1, a3);
        if v16 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        }
    }
    v6 = uu_join::State::next_line(a0, a2);
    v17 = v6.field_0;
    v11 = *((&v6.field_0 as &char + 8) as &i128);
    v12 = v9;
    if v17 == 9223372036854775809 {
        return alloc::boxed::Box<T>::new(v18) as u64;
    }
    v5 = v10;
    v1 = v11;
    v4 = v12;
    v0 = v17;
    if v0 == 0x8000000000000000 {
        return 0;
    }
    loop {
        if *((a0 + 89) as &i8) {
            v19 = uu_join::State::print_line(a0, a1, &v0, a3);
            if v19 {
                return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
            }
        }
        v20 = *(&v0 as &i128);
        v7 = struct48 {
            field_0: *(&v0 as &i128)
            field_8: <UNKNOWN>
            field_16: (&v1)[8] as i128
            field_32: v5
        };
        uu_join::State::reset(a0, &v7);
        v8 = uu_join::State::next_line(a0, a2);
        v21 = v8.field_0;
        v13 = *((&v8.field_0 as &char + 8) as &i128);
        v14 = v9;
        if v21 == 9223372036854775809 {
            break;
        }
        v5 = v10;
        v4 = v14;
        v1 = v13;
        v0 = v21;
        if v0 == 0x8000000000000000 {
            return 0;
        }
    }
    return alloc::boxed::Box<T>::new(v18) as u64;
}
