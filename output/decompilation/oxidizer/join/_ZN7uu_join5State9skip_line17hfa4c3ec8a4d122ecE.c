fn uu_join::State::skip_line(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u8;  // [bp-0x40]
    let v1: u64;  // [bp-0x30]
    let v2: u8;  // [bp-0x28]
    let v3: struct8;  // [bp-0x18]
    let v5: u64;  // rax

    if *((a0 + 89) as &i8) {
        v5 = uu_join::State::print_first_line(a0, a1, a3);
        if v5 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
        }
    }
    uu_join::State::reset_next_line(a0, a2, a3);
    if *(&v0 as &i64) != 9223372036854775809 {
        v3 = v1;
        memcpy(&v2, &v0, 16);
        return alloc::boxed::Box<T>::new(&v2);
    }
    return 0;
}
