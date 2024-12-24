fn uu_test::eval::panic_cold_explicit() -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    core::panicking::panic_explicit(); /* do not return */
}
