fn uu_join::State::skip_line(a0: i64, a1: u64, a2: void*, a3: u64) -> long long {
    let v0: Option<struct24>;  // [bp-0x40]
    let v1: struct24;  // [bp-0x40]
    let v2: struct24;  // [bp-0x28]
    let v4: u64;  // rax

    if *((a0 + 89) as &i8) {
        v4 = uu_join::State::print_first_line(a0, a1, a3);
        if v4 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
        }
    }
    v0 = uu_join::State::reset_next_line(a0, a2);
    match v0 {
        Some(v2) => {
            return alloc::boxed::Box<T>::new(&v2) as u64;
        },
        None => {
            return 0;
        },
    }
}
