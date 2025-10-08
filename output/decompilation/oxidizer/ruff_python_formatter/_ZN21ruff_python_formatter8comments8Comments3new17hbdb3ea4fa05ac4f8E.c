fn ruff_python_formatter::comments::Comments::new(a0: i64, a1: u64) -> long long {
    let v0: struct104;  // [bp-0x68]

    v0 = struct104 {
        field_0: 1
        field_8: 1
        field_16: *(a0 as &i128)
        field_32: *((a0 + 16) as &i128)
        field_48: *((a0 + 32) as &i128)
        field_64: *((a0 + 48) as &i128)
        field_80: *((a0 + 64) as &i128)
        field_96: a1
    };
    return alloc::boxed::Box<T>::new(&v0) as u64;
}
