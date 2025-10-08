fn just::signals::die(a0: u64, a1: u64) -> void {
    let v0: struct16;  // [bp-0x238]
    let v1: Result<struct8, struct4>;  // [bp-0x230]
    let v2: u8;  // [bp-0x220]
    let v3: struct16;  // [bp-0x20]
    let v4: struct157;  // [bp-0x18]
    let v5: struct80;  // [bp-0x10]
    let v6: struct24;  // [bp-0x8]
    let v8: struct24;  // r15
    let v9: struct80;  // r14
    let v10: struct157;  // r12
    let v11: struct16;  // rbx
    let v13: u32;  // rdx

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v0 = 0;
    memset(&v2, 0, 0x200);
    just::signals::die::{{closure}}(&v2, &v0, "error: ");
    just::signals::die::{{closure}}(&v2, &v0, a0, a1);
    just::signals::die::{{closure}}(&v2, &v0, "\n");
    v1 = nix::unistd::write(0x2, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v0, &v2, 0x200, "src/signals.rs"), v13);
    std::process::abort(); /* do not return */
}
