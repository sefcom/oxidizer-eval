fn uu_sort::FieldSelector::split_key_options(a0: &struct32, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [bp-0x58]
    let v1: i8;  // [bp-0x40]
    let v2: i8;  // [bp-0x30]
    let v4: u64;  // rax
    let v5: u32;  // edx
    let v6: Option<struct32>;  // rax
    let v8: u128;  // xmm0

    v0 = struct24 {
        field_0: a1
        field_8: a1 + a2
        field_16: 0
    };
    v4 = core::iter::traits::iterator::Iterator::try_fold(&v0);
    if v5 == 0x110000 {
        *(a0) = a1;
        a0[1] = a2;
        a0[2] = 1;
        a0[3] = 0;
        v6 = v4;
        return v6;
    } else if !v1 {
        core::str::slice_error_fail(a1, a2, 0, v4, "/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/mod.rs"); /* do not return */
    } else {
        v8 = v1;
        *(&a0[2] as &i8) = v2;
        *(a0) = v8;
        v6 = core::str::<impl str>::split_at_checked(a1, a2, v4);
        return v6;
    }
}
