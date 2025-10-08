fn uu_tsort::Graph::new(a1: i64) -> : struct72 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // r14
    let v4: u64;  // r12
    let v5: u64;  // rax
    let v6: u64;  // rdx

    v0 = v2;
    v3 = *((a1 + 8) as &i64);
    v4 = *((a1 + 16) as &i64);
    v5 = std::thread::local::LocalKey<T>::with();
    return struct72 {
        field_0: *(a1 as &i64)
        field_8: v3
        field_16: v4
        field_24: g_4eb278.field_0
        field_40: g_4eb288.field_0
        field_56: v5
        field_64: v6
    };
}
