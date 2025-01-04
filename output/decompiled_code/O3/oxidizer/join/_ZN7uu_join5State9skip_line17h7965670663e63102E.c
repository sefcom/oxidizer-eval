fn uu_join::State::skip_line(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: Option<struct24>;  // [sp-0x40], Other Possible Types: i192
    let v1: i192;  // [bp-0x28]
    let v3: i64;  // rax

    if *((a0 + 89) as &i8) {
        v3 = uu_join::State::print_first_line(a0, a1, a3);
        if v3 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
        }
    }
    v0 = uu_join::State::reset_next_line(a0, a2);
    match v0 {
        Some(_) => {
            v1 = v0;
            return alloc::boxed::Box<T>::new(&v1);
        },
        None => {
            return 0;
        },
    }
}
