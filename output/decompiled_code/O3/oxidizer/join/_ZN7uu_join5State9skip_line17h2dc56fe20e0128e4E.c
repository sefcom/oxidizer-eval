fn uu_join::State::skip_line(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x98], Other Possible Types: struct16
    let v1: i64;  // [sp-0x90]
    let v2: i128;  // [sp-0x88]
    let v3: i128;  // [sp-0x78]
    let v4: i128;  // [sp-0x68]
    let v5: i128;  // [sp-0x58]
    let v6: Enum;  // [sp-0x48], Other Possible Types: i384
    let v8: i64;  // rax
    let v9: i64;  // rax

    if *((a0 + 89) as &i8) {
        if !*((a0 + &g_10 as &u8) as &i64) {
            core::panicking::panic_bounds_check(); /* do not return */
        }
        v8 = uu_join::State::print_line(*((a0 + 64) as &i64), *((a0 + 88) as &i32), a1, *((a0 + &g_0 as &u8) as &i64), a3);
        if v8 {
            v9 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
            return v9;
        }
    }
    v6 = uu_join::State::next_line(a0, a2);
    v4 = *((&v6 as &char + 16) as &i128);
    if v0 != 9223372036854775809 {
        v3 = *((&v6 as &char + 32) as &i128);
        v0 = struct16 {
            field_0: v10
        };
        v2 = v4;
        uu_join::State::reset(a0, &v0);
        return &g_0;
    }
    v5 = v4;
    if v1 == 9223372036854775809 {
        return &g_0;
    }
    v1 = v5;
    v0 = v1;
    v9 = __rust_alloc(24, &g_0);
    *((v9 + &g_10 as &u8) as &i64) = *((&v1 as &char + 8) as &i64);
    *(v9 as &i64) = v0;
    return v9;
}
