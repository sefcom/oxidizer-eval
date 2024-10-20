fn uu_cat::splice::copy_exact(a0: u32, a1: u32, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x4070]
    let v1: u64;  // [sp-0x4068]
    let v2: u64;  // [sp-0x4060]
    let v3: u64;  // [sp-0x4058]
    let v4: u64;  // [sp-0x4050]
    let v5: u128;  // [sp-0x4048]
    let v6: void*;  // [sp-0x4030]
    let v7: void*;  // [sp-0x3030]
    let v8: void*;  // [sp-0x2030]
    let v9: void*;  // [sp-0x1030]
    let v11: &&struct_0;  // rax
    let v12: u64;  // rax
    let v13: u64;  // r15
    let v14: void*;  // r14
    let v15: u64;  // rax
    let v16: u64;  // r14

    v9 = 0;
    v8 = 0;
    v7 = 0;
    v6 = 0;
    memset(&v6, 0, 0x4000);
    if !a2 {
        return 134;
    }
    v11 = read;
    loop {
LABEL_488bbd:
        v0 = v16 - v13;
        v12 = v11();
        if v12 == -1 {
            break;
        }
        v13 = v12;
        v1 = v12;
        if !v12 {
            v2 = "unexpected end of pipe";
            v3 = 1;
            v4 = 8;
            v5 = 0;
            core::panicking::assert_failed(); /* do not return */
        }
        if v13 > 0x4000 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v14 = 0;
        loop {
            v15 = write(1, &v6 + v14, v13 - v14);
            if v15 == -1 {
                break;
            }
            if !v15 {
                uu_cat::splice::copy_exact::panic_cold_explicit(); /* do not return */
            }
            v14 += v15;
            if v14 >= v13 {
                v16 = v0;
                if v16 == v13 {
                    return 134;
                    goto LABEL_488c52;
                }
                goto LABEL_488bbd;
            }
        }
    }
LABEL_488c52:
    return nix::errno::consts::from_i32(*(__errno_location() as &i32));
}
