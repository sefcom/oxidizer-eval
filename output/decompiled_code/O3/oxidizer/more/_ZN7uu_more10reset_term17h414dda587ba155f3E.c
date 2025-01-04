fn uu_more::reset_term(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v1: u64;  // rsi
    let v2: u64;  // rdx

    core::result::Result<T,E>::unwrap(crossterm::terminal::disable_raw_mode(a0, a1, a2, a3, a4, a5), "src/uu/more/src/more.rs");
    core::result::Result<T,E>::unwrap(crossterm::command::write_command_ansi(a0, 4), "src/uu/more/src/more.rs");
    print!("\r");
    return core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::flush(a0, v1, v2), "src/uu/more/src/more.rs");
}
