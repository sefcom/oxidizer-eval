fn uu_dd::Input::new_stdin(a0: &struct24, a1: void*) -> u64 {
    let v0: u64;  // [sp-0xe8]
    let v1: u64;  // [sp-0xc8]
    let v2: struct16;  // [sp-0xc0]
    let v3: u64;  // [sp-0xb8]
    let v4: i8;  // [bp-0x88]
    let v6: u64;  // rdi
    let v8: u64;  // rdx
    let v12: u64;  // rdx

    uu_dd::Source::stdin_as_file();
    v0 = 1;
    v2 = std::fs::File::metadata(&v0);
    if v2.field_0 as i32 != 2 {
        if (0xf000 & *(&v4 as &i32)) == 0x8000 && a1->field_42 {
            v1 = v8;
            show_error!("standard input: not a directory");
            uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        }
        if !(a1->field_80 && uu_dd::Source::skip(&v0, a1->field_80)) {
            return struct24 {
                field_0: 0
                field_8: v10 as u64
                field_16: a1
            };
        }
        v6 = v12;
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
    }
    v6 = v3;
    uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
}
