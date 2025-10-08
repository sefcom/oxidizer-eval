fn ruff_python_formatter::comments::format::strip_comment_prefix(a1: &str) -> : struct20 {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x1c]
    let v2: u64;  // rbx
    let v3: u64;  // r14
    let v4: u64;  // r15
    let v5: u64;  // rdx
    let v7: core::option::Option<&str>;  // rax
    let v8: u64;  // rax
    let v10: u64;  // rsi
    let v11: u64;  // rax
    let v12: &mut [u8];  // rax:rdx

    v0 = struct32 {
        field_0: 0
        field_4: <UNKNOWN>
        field_12: <UNKNOWN>
        field_20: <UNKNOWN>
    };
    v12 = core::char::methods::encode_utf8_raw(35, &v0, v5);
    v7 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v12.data_ptr, v12.length, a1) as u64;
    match v7 {
        Some(_) => {
            v8 = v7;
        },
        None => {
            v8 = &g_48a7af;
        },
    }
    v10 = v8;
    return struct24 {
        field_0: (v7) as u8 as u32 * 4
        padding_4: <UNKNOWN>
        field_8: v10
        field_16: v11
    };
}
