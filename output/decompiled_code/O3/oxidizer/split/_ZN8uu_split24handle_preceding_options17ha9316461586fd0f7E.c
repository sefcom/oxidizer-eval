fn uu_split::handle_preceding_options(a0: u32, a1: u32, a2: &struct1, a3: &struct1) -> u64 {
    let v0: struct1;  // [bp-0x3c]
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
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v4, "bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "line-bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "lines") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "additional-suffix") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "filter") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "number") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "suffix-length") as i8 {
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "separator");
        }
        *(a2) = 1;
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-b") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-C") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-l") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-n") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-a") as i8 {
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-t");
    }
    *(a3) = 1;
    v0 = struct1 {
        field_0: 0
    };
    v5 = core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(&v0), 1);
    if !v5 {
        *(a3) = 0;
        *(a2) = 0;
        return v5;
    }
    return v5;
}
