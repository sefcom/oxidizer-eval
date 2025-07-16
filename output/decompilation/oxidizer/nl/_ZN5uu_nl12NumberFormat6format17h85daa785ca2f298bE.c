fn uu_nl::NumberFormat::format(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: i64;  // [bp-0xa0]
    let v4: u384;  // [bp-0x80]
    let v5: u64;  // [bp-0x50]
    let v6: u64;  // [bp-0x48]
    let v14: u32;  // eax
    let v15: u64;  // rax

    v5 = a2;
    v14 = *(a1 as &i8);
    v4 = struct48 {
        field_0: v15
        field_8: 1
        field_16: &v0
        field_24: 2
        field_32: &v6
        field_40: 1
    };
    core::option::Option<T>::map_or_else(a0, &v4);
    return a0;
}
