fn fd::filter::owner::Check<T>::parse(a1: &str) -> : struct12 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x30]
    let v1: struct12;  // [bp-0x30]
    let v2: u32;  // [bp-0x2c]
    let v4: u64;  // rsi
    let v5: u64;  // rdx
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: core::option::Option<&str>;  // rax
    let v9: u64;  // r14
    let v10: u32;  // eax
    let v11: u32;  // eax
    let v12: &mut [u8];  // rax:rdx

    if !v4 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v5, 1) {
        return struct8 {
            field_0: 0x200000000
        };
    }
    v0 = 0;
    v12 = core::char::methods::encode_utf8_raw(33, &v0, v5);
    v7 = core::slice::<impl [T]>::starts_with(a1, v5, v12.data_ptr);
    if v7 {
        v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, a1) as u64;
    }
    v1 = fd::filter::owner::OwnerFilter::from_string::{{closure}}(v8, v9);
    if !(v1.field_0 as i8 & 1) {
        v11 = 0;
        return struct12 {
            field_0: v6 as u32
            field_4: v7 as u32
            field_8: v2
        };
    }
    *((a0 + 8) as &i64) = *(&v1.field_8 as &i64);
    v10 = 1;
    return struct8 {
        field_0: 0x200000000
    };
}
