fn uu_stat::write_raw_byte(a0: i8) -> int {
    let v0: u8;  // [bp-0x11]
    let v1: std::io::stdio::Stdout;  // [bp-0x10]

    v1 = std::io::stdio::stdout();
    v0 = a0;
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::write_all(&v1, &v0, 1));
    return;
}
