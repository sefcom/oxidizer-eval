fn uu_more::setup_term() -> long long {
    let v1: std::io::stdio::Stdout;  // rax

    v1 = std::io::stdio::stdout();
    core::result::Result<T,E>::unwrap(crossterm::terminal::enable_raw_mode(), "src/uu/more/src/more.rs");
    return v1;
}
