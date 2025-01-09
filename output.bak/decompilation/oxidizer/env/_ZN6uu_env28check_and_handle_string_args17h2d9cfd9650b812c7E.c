fn uu_env::check_and_handle_string_args(a0: &Result<struct16, struct1>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: struct24;  // [sp-0x80]
    let v7: struct24;  // [bp-0x68]
    let v10: i256;  // [sp-0x50], Other Possible Types: struct32
    let v11: i64;  // [bp+0x8]
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v16: i64;  // rdx

    v1 = a1;
    v2 = a2;
    v0 = 0x8000000000000000;
    v4 = a3;
    v5 = a4;
    v3 = 0x8000000000000000;
    v12 = core::slice::<impl [T]>::strip_prefix(a1, a2, a3, a4);
    if v12 {
        v13 = v11;
        if v13 {
            uu_env::debug_print_args(*((v13 + 8) as &i64), *((v13 + 16) as &i64));
        }
        v6 = uu_env::parse_args_from_str(v12, v16);
        return Ok(struct16 {
            field_0: v8
            field_8: v9
        });
        *(&v7.field_0 as &struct24) = struct24 {
            field_0: v15
            field_8: v17
            field_16: v18
        };
        v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a5, &v10);
    }
    return Err(struct1 {
        field_0: v14
    });
}
