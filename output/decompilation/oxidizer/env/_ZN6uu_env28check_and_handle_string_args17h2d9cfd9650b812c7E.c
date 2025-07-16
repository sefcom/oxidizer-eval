fn uu_env::check_and_handle_string_args(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> Result<struct16, struct9> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: std::env::Vars;  // [bp-0x98]
    let v4: u64;  // [bp-0x90]
    let v5: core::option::Option<(alloc::string::String, alloc::string::String)>;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u64;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: u192;  // [bp-0x68]
    let v10: struct32;  // [bp-0x50]
    let v11: u64;  // rax
    let v12: u64;  // rdx
    let v13: u8;  // bpl

    v1 = a1;
    v2 = a2;
    v0 = 0x8000000000000000;
    v4 = a3;
    v5 = a4;
    v3 = 0x8000000000000000;
    v11 = core::slice::<impl [T]>::strip_prefix(a1, a2, a3, a4);
    if v11 {
        if a6 {
            uu_env::debug_print_args(*((a6 + 8) as &i64), *((a6 + 16) as &i64));
        }
        uu_env::parse_args_from_str(v11, v12, a3);
        if v6 == 0x8000000000000000 {
            return Ok(struct16 {
                field_0: v7
                field_8: v8
            });
        }
        v9 = v6;
        v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
        v13 = 1;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a5, &v10);
    }
    return struct9 {
        field_0: 0
        field_8: v13
    };
}
