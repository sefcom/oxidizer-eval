fn uu_cat::splice::copy_exact(a0: u32, a1: u32, a2: u64) -> u64 {
    let v0: i64;  // [sp-0x4068]
    let v1: i96;  // [sp-0x4060], Other Possible Types: Arguments, Result<struct8, struct4>
    let v2: i64;  // [sp-0x4058]
    let v3: i64;  // [sp-0x4030]
    let v8: i32;  // 4096
    let v9: i64;  // rbx
    let v10: i64;  // rbp
    let v11: i64;  // rdx
    let v12: i64;  // rax

    do {
        v9 = a2;
        v0 = nix::unistd::read(v8, &v3, 0x4000)?;
        if !v0 {
            v1 = Arguments {
                pieces: ["unexpected end of pipe"]
                args: []
                fmt: 0
            };
            core::panicking::assert_failed(&v0, &v1, "src/uu/cat/src/splice.rs"); /* do not return */
        }
        v10 = 0;
        v1 = nix::unistd::write(a1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v10, v0, &v3), v11);
        if !(!v1) {
            goto LABEL_0x4b4b9f;
        }
        v12 = v2;
        if !v12 {
            uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
        }
        v10 += v12;
        if v10 < v0 {
            continue;
        }
        a2 = v9 - v0;
    } while (v9 != v0);
    return 134;
}
