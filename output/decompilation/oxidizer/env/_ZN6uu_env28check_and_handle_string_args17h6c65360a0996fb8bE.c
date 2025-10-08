fn uu_env::check_and_handle_string_args(a0: i64, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64, a6: i64) -> void {
    let v0: struct24;  // [bp-0x80]
    let v1: struct24;  // [bp-0x80]
    let v2: i64;  // [bp-0x78]
    let v3: i64;  // [bp-0x70]
    let v4: struct24;  // [bp-0x68]
    let v5: struct32;  // [bp-0x50]
    let v6: u64;  // rax
    let v7: u64;  // rdx

    v6 = core::slice::<impl [T]>::strip_prefix(a1, a2, a3, a4);
    if !v6 {
        return struct16 {
            field_0: 0
            field_8: 0
        };
    }
    if a6 {
        uu_env::debug_print_args(*((a6 + 8) as &i64), *((a6 + 16) as &i64));
    }
    v0 = uu_env::parse_args_from_str(v6, v7);
    if v0.field_0 as i64 != 0x8000000000000000 {
        v4 = v1;
        v5 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
        alloc::vec::Vec<T,A>::extend_trusted(a5, &v5);
        return struct16 {
            field_0: 0
            field_8: 1
        };
    }
    return struct16 {
        field_0: v2
        field_8: v3
    };
}
