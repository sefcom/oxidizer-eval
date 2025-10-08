fn uu_fmt::linebreak::slice_if_fresh(a1: i32, a2: &str, a3: i64, a4: i8, a5: i8, a6: i8, a7: i8) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v1: u64;  // rax
    let v2: core::option::Option<&str>;  // rax
    let v3: void*;  // rsi
    let v4: void*;  // rdi
    let v5: void*;  // rdi
    let v7: void*;  // rsi
    let v8: u64;  // rcx

    v0 = v1;
    if a1 {
        v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a3, a2) as u64;
    } else {
        v4 = (a7 & a5 | a6) + 1;
        if a5 {
            v5 = v4;
        } else {
            v5 = 0;
        }
        v7 = v5;
        if a4 {
            v3 = v4;
        } else {
            v3 = v7;
        }
    }
    return struct24 {
        field_0: v3
        field_8: v2
        field_16: v8
    };
}
