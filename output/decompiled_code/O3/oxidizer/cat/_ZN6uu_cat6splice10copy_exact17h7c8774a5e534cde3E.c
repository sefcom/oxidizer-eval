fn uu_cat::splice::copy_exact(a0: u32, a1: u32, a2: u64) -> u64 {
    let v0: u64;  // [bp-0x4068]
    let v1: u64;  // [sp-0x4060], Other Possible Types: Result<struct8, struct4>
    let v2: u64;  // [bp-0x4058], Other Possible Types: i8
    let v3: u64;  // [sp-0x4050]
    let v4: u128;  // [sp-0x4048]
    let v5: void*;  // [sp-0x4030]
    let v10: u32;  // 4096
    let v11: u64;  // rbx
    let v12: void*;  // rbp
    let v13: u32;  // rdx
    let v14: u64;  // rax

    do {
        v11 = a2;
        v1 = nix::unistd::read(v10, &v5, 0x4000);
        match v1 {
            Err(_) => {
LABEL_4b4b9f:
                return *((&v1 as &char + 4) as &i32) as u32 as u64;
            },
            Ok(v0) => {
            },
        }
        if !v0 {
            v1 = "unexpected end of pipe";
            v2 = 1;
            v3 = 8;
            v4 = 0;
            core::panicking::assert_failed(); /* do not return */
        }
        v12 = 0;
        v1 = nix::unistd::write(a1, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v0), v13);
        if !(!v1 as i32) {
            goto LABEL_4b4b9f;
        }
        v14 = v2;
        if !v14 {
            uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
        }
        v12 += v14;
        if v12 < v0 {
            continue;
        }
        a2 = v11 - v0;
    } while (v11 != v0);
    return 134;
}
