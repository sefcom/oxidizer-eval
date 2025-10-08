fn uu_cat::is_appending() -> char {
    let v0: u64;  // [bp-0x10]
    let v2: u32;  // edx

    std::io::stdio::stdout();
    v0 = 4;
    return ~(nix::fcntl::fcntl(1, &v0) as u8) & v2 >> 10 & 1;
}
