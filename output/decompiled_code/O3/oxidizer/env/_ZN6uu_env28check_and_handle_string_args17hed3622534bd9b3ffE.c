fn uu_env::check_and_handle_string_args(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0xb0]
    let v1: i64;  // [sp-0xa8]
    let v2: i64;  // [sp-0xa0]
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: struct24;  // [sp-0x80]
    let v7: struct24;  // [sp-0x68], Other Possible Types: i64
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: struct32;  // [sp-0x50], Other Possible Types: i256
    let v11: i64;  // [bp+0x8]
    let v12: i64;  // rax
    let v13: i64;  // rax
    let v14: i8;  // bpl
    let v15: i64;  // rdx
    let v16: i64;  // rdx

    v1 = a1;
    v2 = a2;
    v0 = 0x8000000000000000;
    v4 = a3;
    v5 = a4;
    v3 = 0x8000000000000000;
    v12 = core::slice::<impl [T]>::strip_prefix(a1, a2, a3, a4);
    if !v12 {
        v14 = 0;
        goto LABEL_4cdbaf;
    } else {
        v13 = v11;
        if v13 {
            uu_env::debug_print_args(*((v13 + 8) as &i64), *((v13 + 16) as &i64), v15);
        }
        v6 = uu_env::parse_args_from_str(v12, v16);
        if v7 == 0x8000000000000000 {
            *(a0 as &i64) = v8;
            *((a0 + 8) as &i64) = v9;
        } else {
            v7 = struct24 {
                field_0: v15
                field_8: v17
                field_16: v18
            };
            v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
            v14 = vvar_43{reg 56} | -0x100 | 1;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a5, &v10);
LABEL_4cdbaf:
            *((a0 + 8) as &i8) = v14;
            *(a0 as &i64) = 0;
        }
    }
    return;
}
