fn uu_split::number::DynamicWidthNumber::digits(a0: i64, a1: u64, a2: u8) -> long long {
    let v0: void*;  // [bp-0x50], Other Possible Types: struct16, struct8
    let v1: u64;  // [bp-0x48]
    let v2: void*;  // [bp-0x40]
    let v3: void*;  // [bp-0x38]
    let v6: i64;  // rbx
    let v7: i64;  // rax
    let v8: u64;  // r15
    let v9: u64;  // r14
    let v11: u32;  // edx
    let v12: u64;  // rbp

    v6 = a2;
    v7 = v6 * (v6 - 1);
    v8 = 2;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if a1 {
        do {
            v9 = v12;
            v0 = alloc::vec::Vec<T,A>::push(v11, "src/uu/split/src/number.rs");
        } while (v9 >= v6);
    }
    v0 = alloc::vec::Vec<T,A>::resize(v8);
    core::slice::<impl [T]>::reverse(1, v2);
    *(&v3[16] as &void*) = v2;
    *(v3 as &i128) = *(&v0.field_0 as &i128);
    return v2;
}
