fn uu_more::setup_term() -> u64 {
    core::result::Result<T,E>::unwrap(crossterm::terminal::enable_raw_mode(), "src/uu/more/src/more.rs");
    return std::io::stdio::stdout();
}
