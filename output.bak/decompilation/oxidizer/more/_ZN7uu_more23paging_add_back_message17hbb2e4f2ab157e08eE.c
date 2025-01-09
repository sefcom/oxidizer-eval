fn uu_more::paging_add_back_message(, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rbx
    let v3: u64;  // rax

    if !a0 {
        return 0;
    }
    v0 = v2;
    v3 = crossterm::command::write_command_ansi(a1, 1);
    if v3 {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
    }
    v3 = <std::io::stdio::Stdout as std::io::Write>::flush(a1);
    if !v3 {
        v3 = <std::io::stdio::Stdout as std::io::Write>::write_all(a1, &g_418e60, 17);
        if !v3 {
            return 0;
        }
    }
}
