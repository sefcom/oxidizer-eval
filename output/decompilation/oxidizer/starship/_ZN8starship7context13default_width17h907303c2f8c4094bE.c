fn starship::context::default_width() -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    return core::option::Option<T>::map_or(terminal_size::unix::terminal_size() as i8);
}
