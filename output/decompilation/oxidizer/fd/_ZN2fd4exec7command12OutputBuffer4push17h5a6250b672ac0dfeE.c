fn fd::exec::command::OutputBuffer::push(a0: u64, a1: i64, a2: i64) -> long long {
    let v0: struct48;  // [bp-0x38]

    v0 = struct48 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
        field_24: *(a2 as &i128)
        field_40: *((a2 + 16) as &i64)
    };
    return alloc::vec::Vec<T,A>::push(a0, &v0);
}
