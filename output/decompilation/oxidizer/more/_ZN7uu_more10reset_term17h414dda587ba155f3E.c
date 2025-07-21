fn uu_more::reset_term(a0: i64) -> void {
    let v0: struct40;  // [bp-0x38]

    core::result::Result<T,E>::unwrap(crossterm::terminal::disable_raw_mode(), "src/uu/more/src/more.rs");
    core::result::Result<T,E>::unwrap(crossterm::command::write_command_ansi(a0, 4), "src/uu/more/src/more.rs");
    v0 = struct40 {
        field_0: "\r"
        field_8: 1
        field_16: 8
        field_24: 0
    };
    print!("\r");
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::flush(a0), "src/uu/more/src/more.rs");
    return;
}
