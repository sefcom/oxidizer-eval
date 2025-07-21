fn uu_join::State::skip_line(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i8;  // [bp-0x40], Other Possible Types: u192
    let v1: struct24;  // [bp-0x28]
    let v3: u64;  // rax

    if *((a0 + 89) as &i8) {
        v3 = uu_join::State::print_first_line(a0, a1, a3);
        if v3 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        }
    }
    uu_join::State::reset_next_line(a0, a2, a3);
    if *(&v0 as &i64) != 9223372036854775809 {
        v1 = v0;
        return alloc::boxed::Box<T>::new(&v1);
    }
    return 0;
}
