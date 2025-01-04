fn uu_dd::progress::ProgUpdate::reprint_prog_line(a0: u64, a1: i64, a2: i64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rdx

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    core::result::Result<T,E>::unwrap(uu_dd::progress::ProgUpdate::write_prog_line(a0, &v0, 1, a3, a4, a5), v3, "src/uu/dd/src/progress.rs");
    return v0;
}
