fn uu_dd::progress::ProgUpdate::reprint_prog_line(a0: i64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v4: u64;  // rdx

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    core::result::Result<T,E>::unwrap(uu_dd::progress::ProgUpdate::write_prog_line(a0, &v0, 1), v4, "src/uu/dd/src/progress.rs");
    return &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
}
