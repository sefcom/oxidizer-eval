fn uu_dd::progress::ProgUpdate::print_io_lines(a0: u64, a1: i64, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    core::result::Result<T,E>::unwrap(uu_dd::progress::ProgUpdate::write_io_lines(a0, &v0, a2));
    return v0;
}
