fn uu_dd::progress::ProgUpdate::print_transfer_stats(a0: u64, a1: u32) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v4: u64;  // rdx

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    core::result::Result<T,E>::unwrap(uu_dd::progress::ProgUpdate::write_transfer_stats(a0, &v0, a1), v4, "src/uu/dd/src/progress.rs");
    return &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
}
