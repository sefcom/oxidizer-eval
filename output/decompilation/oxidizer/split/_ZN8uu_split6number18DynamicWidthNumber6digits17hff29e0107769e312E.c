fn uu_split::number::DynamicWidthNumber::digits(a1: i192, a2: i8) -> : struct24 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x48], Other Possible Types: struct16, struct8
    let v1: alloc::string::String;  // [bp-0x40]
    let v2: struct24;  // [bp-0x38]
    let v4: struct24;  // r14
    let v5: u64;  // rbp
    let v6: u64;  // rax
    let v7: core::result::Result<alloc::string::String, std::env::VarError>;  // r15
    let v8: struct24;  // r14
    let v10: u32;  // edx
    let v11: u64;  // r13

    v4 = a1;
    v5 = a2;
    v6 = v5 * (v5 - 1);
    v7 = 2;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if v4 {
        do {
            v8 = v4;
        } while ((v0 = alloc::vec::Vec<T,A>::push(v10 as u64), v4 = v11, v8 >= v5));
    }
    v0 = alloc::vec::Vec<T,A>::resize(v7, 0);
    core::slice::<impl [T]>::reverse(1, v2);
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v2
    };
}
