fn ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line(a1: &struct40, a2: i64, a3: i64) -> Option<struct40> {
    let a0: i64;  // rdi
    let v0: core::option::Option<(&str, &str)>;  // [bp-0x88], Other Possible Types: struct56, struct80
    let v1: u32;  // [bp-0x88]
    let v2: struct16;  // [bp-0x80]
    let v3: u128;  // [bp-0x70]
    let v4: u64;  // [bp-0x60]
    let v8: struct104;  // rax
    let v9: struct16;  // xmm0
    let v10: struct16;  // rdx
    let v11: struct16;  // rdx
    let v12: struct16;  // xmm0
    let v13: struct16;  // xmm0
    let v14: struct16;  // xmm0
    let v15: struct16;  // xmm0
    let v16: &mut [u8];  // rax:rdx

    v0 = core::str::<impl str>::split_once(*(a2 as &i64), *((a2 + 8) as &i64), a3);
    if !v0 as i64 {
        v4 = *((a1 + 32) as &i64);
        v15 = *(a1 as &i128);
        v3 = *((a1 + 16) as &i128);
        v2 = v15;
        v0 = 0x8000000000000000;
        v10 = "crates/ruff_python_formatter/src/string/docstring.rs";
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((a1 + 24) as &i64), *((a1 + 32) as &i64), v0 as i64, *((&v0 as &char + 8) as &i64)) {
        v1 = 0;
        v16 = core::char::methods::encode_utf8_raw(32, &v1, a2);
        v8 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v16.data_ptr, v16.length, *((&v0 as &char + 16) as &i64), *((&v0 as &char + 24) as &i64)) as u64;
        if v8 || !*((&v0 as &char + 24) as &i64) {
            v12 = *(a2 as &i128);
            v0 = struct56 {
                field_0: v12
                field_16: *((a2 + 16) as &i128)
                field_32: *((a2 + 32) as &i64)
                field_40: v8
                field_48: v11
            };
            alloc::vec::Vec<T,A>::push(a1, &v0, "crates/ruff_python_formatter/src/string/docstring.rs");
            v0 = 9223372036854775812;
            alloc::collections::vec_deque::VecDeque<T,A>::push_back(a3, &v0, "crates/ruff_python_formatter/src/string/docstring.rs");
            v13 = *(a1 as &i128);
            return Some(struct40 {
                field_0: v13
                field_16: *((a1 + 16) as &i128)
                field_32: *((a1 + 32) as &i64)
            });
        }
        v4 = *((a1 + 32) as &i64);
        v9 = *(a1 as &i128);
        v3 = *((a1 + 16) as &i128);
        v2 = v9;
        v0 = 0x8000000000000000;
        v10 = "crates/ruff_python_formatter/src/string/docstring.rs";
    } else {
        v4 = *((a1 + 32) as &i64);
        v14 = *(a1 as &i128);
        v3 = *((a1 + 16) as &i128);
        v2 = v14;
        v0 = 0x8000000000000000;
        v10 = "crates/ruff_python_formatter/src/string/docstring.rs";
    }
    alloc::collections::vec_deque::VecDeque<T,A>::push_back(a3, &v0, v10);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
