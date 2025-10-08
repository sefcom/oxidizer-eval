fn bat::set_terminal_title_to(a0: u64) -> void {
    let v0: &str;  // [bp-0x90]
    let v1: &str;  // [bp-0x80]
    let v2: std::io::stdio::Stdout;  // [bp-0x70]

    v0 = "\x1b]0;";
    v1 = "\x07";
    print!("{}{}{}", &v0 as u64, a0, &v1 as u64);
    v2 = std::io::stdio::stdout();
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdout as std::io::Write>::flush(&v2));
    return;
}
