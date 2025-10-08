fn uu_cat::splice::copy_exact::panic_cold_explicit() -> int {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax

    v0 = v2;
    core::panicking::panic_explicit(); /* do not return */
}
