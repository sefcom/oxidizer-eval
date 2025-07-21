fn uu_uniq::handle_preceding_options(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u32;  // [bp-0x3c]
    let v1: i64;  // [bp-0x38]
    let v3: i64;  // r13
    let v4: core::option::Option<&str>;  // rax
    let v5: void*;  // r13
    let v6: u32;  // edx
    let v7: u64;  // rdx
    let v8: struct40;  // rax
    let v9: &str;  // rax:rdx

    v3 = a2;
    if core::slice::<impl [T]>::starts_with() {
        v1 = a2;
        v4 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get() as u64;
        v5 = v4;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v6, "skip-chars") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "skip-fields") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "check-chars") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "group") as i8 {
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "all-repeated");
        }
        v3 = v1;
        *(v1 as &i8) = 1;
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-s") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-f") as i8 {
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-w");
    }
    *(a3 as &i8) = 1;
    v0 = 0;
    v9 = core::char::methods::encode_utf8_raw(45, &v0, v7);
    v8 = core::slice::<impl [T]>::starts_with();
    if v8 as u8 {
        return v8;
    }
    *(a3 as &i8) = 0;
    *(v3 as &i8) = 0;
    return v8;
}
