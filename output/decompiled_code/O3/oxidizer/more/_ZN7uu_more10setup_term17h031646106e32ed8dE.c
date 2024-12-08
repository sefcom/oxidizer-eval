fn uu_more::setup_term(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v2: u64;  // rdi
    let v3: u64;  // rsi
    let v4: u64;  // rdx
    let v5: u64;  // rcx
    let v6: u64;  // r8
    let v7: u64;  // r9

    core::result::Result<T,E>::unwrap(crossterm::terminal::enable_raw_mode(v2, v3, v4, v5, v6, v7), "src/uu/more/src/more.rs");
    return std::io::stdio::stdout();
}
