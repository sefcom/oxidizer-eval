fn just::variables::Variables::new(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: i64;  // rax

    v0 = v2;
    v3 = alloc::alloc::Global::alloc_impl(8, 8);
    *(v3 as &u64) = a1;
    return struct24 {
        field_0: 1
        field_8: v3
        field_16: 1
    };
}
