fn uu_more::reset_term(a0: u64) -> void {
    core::result::Result<T,E>::unwrap(crossterm::terminal::disable_raw_mode(), "src/uu/more/src/more.rs");
    core::result::Result<T,E>::unwrap(crossterm::command::write_command_ansi(a0), "src/uu/more/src/more.rs");
    print!("\r");
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::flush(a0), "src/uu/more/src/more.rs");
    return;
}
