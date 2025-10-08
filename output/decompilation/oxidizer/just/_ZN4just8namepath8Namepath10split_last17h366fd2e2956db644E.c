fn just::namepath::Namepath::split_last(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v1: u64;  // rdx

    core::option::unwrap(a2);
    v1 = a2 - 1;
    return struct24 {
        field_0: a1 + v1 * 72
        field_8: a1
        field_16: v1
    };
}
