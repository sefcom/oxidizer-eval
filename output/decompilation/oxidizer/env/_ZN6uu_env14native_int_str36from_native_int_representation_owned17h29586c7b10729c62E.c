fn uu_env::native_int_str::from_native_int_representation_owned(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v1: u64;  // rax

    v1 = *((a1 + 16) as &i64);
    return struct24 {
        field_0: *(a1 as &i128)
        field_16: v1
    };
}
