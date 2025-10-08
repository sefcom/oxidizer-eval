fn fuel_core_keygen::wait_for_keypress() -> void {
    let v0: u8;  // [bp-0x9]
    let v1: std::io::stdio::Stdin;  // [bp-0x8]

    v0 = 0;
    core::result::Result<T,E>::expect(crossterm::terminal::enable_raw_mode(), "enable_raw_mode failed", "bin/keygen/src/main.rs");
    v1 = std::io::stdio::stdin();
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdin as std::io::Read>::read_exact(&v1, &v0, 1));
    core::result::Result<T,E>::expect(crossterm::terminal::disable_raw_mode(), "disable_raw_mode failed", "bin/keygen/src/main.rs");
    return;
}
