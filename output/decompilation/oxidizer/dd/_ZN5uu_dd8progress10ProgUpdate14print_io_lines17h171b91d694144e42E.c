fn uu_dd::progress::ProgUpdate::print_io_lines(a0: i32) -> long long {
    let v0: core::result::Result<u64, std::io::error::Error>;  // [bp-0x8], Other Possible Types: u64
    let v2: u64;  // rax

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    core::result::Result<T,E>::unwrap(uu_dd::progress::ProgUpdate::write_io_lines(a0, &v0));
    return &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
}
