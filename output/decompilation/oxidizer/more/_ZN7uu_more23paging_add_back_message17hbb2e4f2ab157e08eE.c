fn uu_more::paging_add_back_message(a0: i16, a1: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rbx
    let v3: core::result::Result<(), std::io::error::Error>;  // rax

    if !a0 {
        return 0;
    }
    v0 = v2;
    v3 = crossterm::command::write_command_ansi(a1, 1);
    if let Err(_) = v3 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
    }
    v3 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
    if let Ok(_) = v3 {
        v3 = <std::io::stdio::Stdout as std::io::Write>::write_all(a1, "\n\r...back 1 page\n");
        if let Ok(_) = v3 {
            return 0;
        }
    }
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
}
