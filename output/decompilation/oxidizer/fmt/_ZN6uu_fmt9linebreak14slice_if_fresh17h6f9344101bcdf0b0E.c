fn uu_fmt::linebreak::slice_if_fresh(a1: i32, a2: i64, a3: i64, a4: i64, a5: i8, a6: i8, a7: i8, a8: i8) -> : struct24 {
    let a0: u32;  // esi
    let v0: u64;  // [bp-0x28]
    let v1: u64;  // rax
    let v2: core::option::Option<&str>;  // rax
    let v3: void*;  // rdi
    let v4: u64;  // rdi
    let v6: void*;  // rsi
    let v7: u64;  // rdx
    let v8: core::option::Option<&str>;  // rdx
    let v9: u64;  // rsi
    let v10: i64;  // rdi

    v0 = v1;
    if a0 {
        v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a3, a1, a2) as u64;
        v6 = 0;
        v8 = v7;
    } else {
        v3 = (a7 & a5 | a6) + 1;
        if a5 {
            v4 = v3;
        } else {
            v4 = 0;
        }
        v9 = v4;
        if a4 {
            v6 = v3;
            v8 = a2;
        } else {
            v6 = v9;
            v8 = a2;
        }
    }
    *(v10 as &void*) = v6;
    *((v10 + 8) as &core::option::Option<&str>) = v2;
    *((v10 + 16) as &core::option::Option<&str>) = v8;
    return;
}
