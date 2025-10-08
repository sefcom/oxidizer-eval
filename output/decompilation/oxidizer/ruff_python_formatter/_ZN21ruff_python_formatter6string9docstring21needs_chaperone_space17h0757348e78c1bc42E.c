fn ruff_python_formatter::string::docstring::needs_chaperone_space(a0: i8, a1: &[u8], a2: i8) -> u64 {
    let v0: struct16;  // [bp-0x30]
    let v1: struct21;  // [bp-0x2c]
    let v3: u32;  // ebx
    let v4: u32;  // ebx
    let v5: u64;  // rdx
    let v7: core::option::Option<&str>;  // rax
    let v8: u64;  // rdx
    let v10: &mut [u8];  // rax:rdx
    let v11: &mut [u8];  // rax:rdx

    v4 = v3 & -0x100 | 1;
    if (ruff_python_formatter::string::docstring::count_consecutive_chars_from_end(a1) & 1) {
        return v4;
    }
    if (a2 & 1) {
        if (a0 & 2) {
            v0 = 0;
            v11 = core::char::methods::encode_utf8_raw((!(a0 & 1)) * 5 + 34, &v0, v5);
            v7 = <&str as core::str::pattern::Pattern>::strip_suffix_of(v11.data_ptr, v11.length, a1) as u64;
        }
    } else {
        if (a0 & 2) {
            v1 = 0;
            v10 = core::char::methods::encode_utf8_raw((!(a0 & 1)) * 5 + 34, &v1, v8);
            return core::slice::<impl [T]>::ends_with(a1, v8, v10.data_ptr);
        }
    }
    return 0;
}
