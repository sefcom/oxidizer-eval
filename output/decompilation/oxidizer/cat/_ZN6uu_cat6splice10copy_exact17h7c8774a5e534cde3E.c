fn uu_cat::splice::copy_exact(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i32;  // [sp-0x406c]
    let v1: i64;  // [sp-0x4068]
    let v2: Result<struct8, struct4>;  // [sp-0x4060]
    let v3: Arguments;  // [bp-0x4060]
    let v4: i64;  // [sp-0x4058]
    let v5: i64;  // [sp-0x4030]
    let v10: i64;  // rbx
    let v12: i64;  // rbx
    let v13: i64;  // rbp
    let v14: i64;  // rdx
    let v15: i64;  // rax

    do {
        v12 = v10;
        v2 = nix::unistd::read(v0 as u64, &v5, 0x4000);
        if !v1 {
            v3 = Arguments {
                pieces: ["unexpected end of pipe"]
                args: []
                fmt: 0
            };
            core::panicking::assert_failed(&v1, &v3, "src/uu/cat/src/splice.rs"); /* do not return */
        }
        v13 = 0;
        v2 = nix::unistd::write(a1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v13, v1, &v5), v14);
        if !(!v2 as i32) {
            goto LABEL_0x4b4b9f;
        }
        v15 = v4;
        if !v15 {
            uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
        }
        v13 += v15;
        if v13 < v1 {
            continue;
        }
        v10 = v12 - v1;
    } while (v12 != v1);
    return 134;
}
