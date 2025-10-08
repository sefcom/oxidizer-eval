fn forc_crypto::wait_for_keypress() -> void {
    let v0: u8;  // [bp-0x9]
    let v1: std::io::stdio::Stdin;  // [bp-0x8]

    v0 = 0;
    v1 = std::io::stdio::stdin();
    core::result::Result<T,E>::unwrap(<std::io::stdio::Stdin as std::io::Read>::read_exact(&v1, &v0, 1));
    return;
}
