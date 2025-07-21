fn uu_split::handle_preceding_options(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u32;  // [bp-0x3c]
    let v1: i64;  // [bp-0x38]
    let v3: struct32;  // r13
    let v4: core::option::Option<&str>;  // rax
    let v5: void*;  // r13
    let v6: u32;  // edx
    let v7: u64;  // rdx
    let v8: u64;  // rsi
    let v9: u64;  // rax
    let v10: &mut [u8];  // rax:rdx

    v3 = a2;
    if core::slice::<impl [T]>::starts_with() {
        v1 = a2;
        v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get() as u64;
        v5 = v4;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "line-bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "lines") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "additional-suffix") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "filter") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "number") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "suffix-length") as i8 {
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "separator");
        }
        v3 = v1;
        *(v1 as &i8) = 1;
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-b") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-C") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-l") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-n") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-a") as i8 {
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-t");
    }
    *(a3 as &i8) = 1;
    v0 = 0;
    v10 = core::char::methods::encode_utf8_raw(&v0 as u32, v8, v7);
    v9 = core::slice::<impl [T]>::starts_with();
    if v9 {
        return v9;
    }
    *(a3 as &i8) = 0;
    *(v3 as &i8) = 0;
    return v9;
}
