fn uu_mktemp::find_last_contiguous_block_of_xs(a0: &struct24, a1: &u8, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x28]
    let v2: u64;  // rax
    let v5: u64;  // rdx
    let v6: &u8;  // rdx

    v0 = v2;
    if !core::str::<impl str>::rfind(a1, a2) {
        return struct8 {
            field_0: v3
        };
    }
    v6 = v5 + 3;
    if v5 + 3 {
        if v6 >= a2 {
            if v6 != a2 {
                core::str::slice_error_fail(a1, a2, 0, v6, "src/uu/mktemp/src/mktemp.rs"); /* do not return */
            }
        } else {
            if *((a1 + v6) as &i8) <= 191 {
                core::str::slice_error_fail(a1, a2, 0, v6, "src/uu/mktemp/src/mktemp.rs"); /* do not return */
            }
        }
    }
    *(&a0[1] as &long long) = core::option::Option<T>::map_or(core::str::<impl str>::rfind(a1, v6), v5);
    a0[2] = v6;
    return struct8 {
        field_0: v3
    };
}
