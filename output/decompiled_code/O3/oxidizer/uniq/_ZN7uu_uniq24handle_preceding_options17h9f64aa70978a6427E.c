fn uu_uniq::handle_preceding_options(a0: u32, a1: u32, a2: &struct1, a3: &struct1) -> u64 {
    let v0: struct4;  // [bp-0x3c]
    let v2: u64;  // rax
    let v3: u64;  // r13
    let v4: u64;  // rdx
    let v5: u64;  // rax

    if core::slice::<impl [T]>::starts_with(a0, a1, "--") as i8 {
        v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a0, a1);
        if !v2 {
            core::str::slice_error_fail(); /* do not return */
        }
        v3 = v2;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v4, "skip-chars") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "skip-fields") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "check-chars") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "group") as i8 {
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "all-repeated");
        }
        *(a2) = 1;
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-s") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-f") as i8 {
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-w");
    }
    *(a3) = 1;
    v0 = struct4 {
        field_0: 0
        field_1: 0
        field_2: <UNKNOWN>
        field_3: <UNKNOWN>
    };
    v5 = core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(45, &v0), v4);
    if !v5 {
        *(a3) = 0;
        *(a2) = 0;
        return v5;
    }
    return v5;
}
