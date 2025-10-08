fn just::color::Color::stdout(a0: u64, a1: void*) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    std::io::stdio::stdout();
    return just::color::Color::redirect(a0, a1);
}
