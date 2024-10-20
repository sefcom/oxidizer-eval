fn uu_more::setup_term(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [sp-0x10]
    let v3: u64;  // rdi
    let v4: u64;  // rsi
    let v5: u64;  // rax

    v5 = crossterm::terminal::sys::unix::enable_raw_mode(v3, v4);
    if v5 {
        v0 = v5;
        core::result::unwrap_failed(); /* do not return */
    }
    return std::io::stdio::stdout();
}
