fn uu_env::check_and_handle_string_args(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: struct24;  // [sp-0x80]
    let v7: i64;  // [bp-0x68], Other Possible Types: struct24
    let v8: struct32;  // [sp-0x50]
    let v9: i64;  // rax
    let v10: i64;  // rdx

    v1 = a1;
    v2 = a2;
    v0 = 0x8000000000000000;
    v4 = a3;
    v5 = a4;
    v3 = 0x8000000000000000;
    v9 = core::slice::<impl [T]>::strip_prefix(a1, a2, a3, a4);
    if v9 {
        if a6 {
            uu_env::debug_print_args(*((a6 + 8) as &i64), *((a6 + 16) as &i64));
        }
        v6 = uu_env::parse_args_from_str(v9, v10);
        if v7 != 0x8000000000000000 {
            *(&v7.field_0 as &struct24) = struct24 {
                field_0: v11
                field_8: v12
                field_16: v13
            };
            v8 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a5, &v8);
        }
    }
    return;
}
