fn uu_uniq::handle_preceding_options(a0: &[u8], a1: i64, a2: i64) -> u64 {
    let v0: u32;  // [bp-0x3c]
    let v1: core::fmt::Arguments;  // [bp-0x38]
    let v3: i64;  // r13
    let v4: u32;  // edi
    let v5: u32;  // esi
    let v6: u32;  // rdi
    let v7: u32;  // rsi
    let v8: core::option::Option<&str>;  // rax
    let v9: void*;  // r13
    let v10: u32;  // rdx
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v13: &mut [u8];  // rax:rdx

    v3 = a1;
    if core::slice::<impl [T]>::starts_with(v4, v5) {
        v1 = a1;
        v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v6, v7) as u64;
        v9 = v8;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v10, "skip-chars") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "skip-fields") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "check-chars") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "group") {
            <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, v10, "all-repeated");
        }
        v3 = v1;
        *(v1 as &i8) = 1;
    }
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v7, &g_41b1cf) && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v7, &g_41b1cd) {
        <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, v7, &g_41b1d3);
    }
    *(a2 as &i8) = 1;
    v0 = 0;
    v13 = core::char::methods::encode_utf8_raw(45, &v0, v11);
    v12 = core::slice::<impl [T]>::starts_with(v6, v7);
    if v12 {
        return v12;
    }
    *(a2 as &i8) = 0;
    *(v3 as &i8) = 0;
    return v12;
}
