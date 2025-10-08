fn just::compile_error::CompileError::new(a1: i64, a2: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u128;  // xmm1
    let v4: iNone;  // xmm2
    let v5: iNone;  // xmm3

    v0 = v2;
    v3 = *((a1 + 16) as &i128);
    v4 = *((a1 + 32) as &i128);
    v5 = *((a1 + 48) as &i128);
    return struct80 {
        field_0: alloc::boxed::Box<T>::new(a2) as u64
        field_8: *(a1 as &i128)
        field_24: v3
        field_40: v4
        field_56: v5
        field_72: *((a1 + 64) as &i64)
    };
}
