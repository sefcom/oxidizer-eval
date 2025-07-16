fn uu_cat::splice::copy_exact(a0: i32, a1: i64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x4068]
    let v1: u320;  // [bp-0x4060], Other Possible Types: struct12, Result<struct8, struct4>
    let v2: u32;  // [bp-0x405c]
    let v3: u64;  // [bp-0x4058]
    let v4: void*;  // [bp-0x4030]
    let v5: void*;  // [bp-0x3030]
    let v6: void*;  // [bp-0x2030]
    let v7: void*;  // [bp-0x1030]
    let v10: u64;  // rbx
    let v11: u64;  // r13
    let v12: core::result::Result<(), std::io::error::Error>;  // rbp
    let v14: u32;  // rdx

    v7 = 0;
    v6 = 0;
    v5 = 0;
    v4 = 0;
    memset(&v4, 0, 0x4000);
    if !a2 {
        return 134;
    }
    do {
        v10 = a2;
        v1 = nix::unistd::read(a0, &v4, 0x4000);
        if let Err(_) = v1 {
            return v2 as u64;
        }
        v11 = v3;
        v0 = v11;
        if !v11 {
            v1 = struct40 {
                field_0: "unexpected end of pipe"
                field_8: 1
                field_16: 8
                field_24: 0
            };
            core::panicking::assert_failed(&v0, &v1, "src/uu/cat/src/splice.rs"); /* do not return */
        }
        do {
            v1 = nix::unistd::write(a1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v11, &v4), v14);
            if v1.field_0 {
                return v2;
            }
            if !v3 {
                uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
            }
        } while (v12 < v11);
        a2 = v10 - v11;
    } while (v10 != v11);
    return 134;
}
