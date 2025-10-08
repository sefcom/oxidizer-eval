fn uu_cat::splice::copy_exact(a0: i32, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x4070]
    let v1: u64;  // [bp-0x4068]
    let v2: Result<struct8, struct4>;  // [sp-0x4060], Other Possible Types: struct12, struct40
    let v3: u32;  // [bp-0x405c]
    let v4: u64;  // [bp-0x4058]
    let v5: void*;  // [bp-0x4030]
    let v6: void*;  // [bp-0x3030]
    let v7: void*;  // [bp-0x2030]
    let v8: void*;  // [bp-0x1030]
    let v10: u32;  // 4096
    let v11: u64;  // r13
    let v12: void*;  // rbp
    let v14: u32;  // rdx

    v8 = 0;
    v7 = 0;
    v6 = 0;
    v5 = 0;
    memset(&v5, 0, 0x4000);
    v10 = a0;
    loop {
LABEL_45d68b:
        v2 = nix::unistd::read(v10, &v5, 0x4000);
        if let Ok(v11) = v2 {
            v0 = a1;
            v1 = v11;
            if !v11 {
                v2 = struct40 {
                    field_0: "unexpected end of pipe"
                    field_8: 1
                    field_16: 8
                    field_24: 0
                };
                core::panicking::assert_failed(1, &v1, &g_4196e0, &v2, "src/uu/cat/src/splice.rs"); /* do not return */
            }
            loop {
                v2 = nix::unistd::write(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v11, &v5, 0x4000, "src/uu/cat/src/splice.rs"), v14);
                if v2.field_0 == 1 {
                    break;
                }
                if !v4 {
                    uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
                }
                v12 += v4;
                if v12 >= v11 {
                    a1 = v0 - v11;
                    v10 = a0;
                    if v0 == v11 {
                        return 134;
                    }
                    goto LABEL_45d68b;
                }
            }
        }
    }
    return v3;
}
