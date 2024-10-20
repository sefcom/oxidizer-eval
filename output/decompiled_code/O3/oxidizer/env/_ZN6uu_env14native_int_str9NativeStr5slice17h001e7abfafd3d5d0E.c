fn uu_env::native_int_str::NativeStr::slice(a0: &u64, a1: &u64, a2: u64, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v2: u64;  // rax
    let v3: u64;  // r15
    let v4: u64;  // rsi
    let v5: u64;  // rax
    let v6: u64;  // r15
    let v9: u64;  // rax

    v0 = v2;
    v3 = a1[1];
    v4 = a1[2];
    if *(a1) == 0x8000000000000000 {
        v5 = a3 - a2;
        if a3 < a2 {
            goto LABEL_4a41bb;
        } else {
            if v4 < a3 {
                core::slice::index::slice_end_index_len_fail(); /* do not return */
            }
            v6 = v3 + a2;
        }
    } else if a3 >= a2 {
        if v4 < a3 {
            core::slice::index::slice_end_index_len_fail(); /* do not return */
        }
        v5 = a3 - a2;
        if a3 != a2 {
            v9 = __rust_alloc(v5, 1);
        }
        memcpy(v6, v3 + a2, v5);
    } else {
LABEL_4a41bb:
        core::slice::index::slice_index_order_fail(); /* do not return */
    }
    *(a0) = 0x8000000000000000;
    a0[1] = v6;
    a0[2] = v5;
    return a0;
}
