fn uu_dd::Input::new_stdin(a0: &struct24, a1: void*) -> u64 {
    let v0: u64;  // [sp-0xe8]
    let v1: u64;  // [sp-0xd0]
    let v2: u64;  // [sp-0xc8]
    let v3: u128;  // [sp-0xc0], Other Possible Types: struct16
    let v4: u64;  // [sp-0xb8]
    let v5: i8;  // [bp-0x88]
    let v8: u64;  // rdx

    uu_dd::Source::stdin_as_file();
    v0 = 1;
    v3 = std::fs::File::metadata(&v0);
    if v3 as i32 == 2 {
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    } else {
        if (0xf000 & v5) == 0x8000 && a1->field_42 {
            v1 = uucore::util_name();
            v2 = v8;
            eprint!("{}: ", &v1);
            eprintln!("standard input: not a directory");
            uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
        }
        if !(a1->field_80 && uu_dd::Source::skip(&v0, a1->field_80)) {
            return struct24 {
                field_0: 0
                field_8: v10 as u64
                field_16: a1
            };
        }
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
    }
}
