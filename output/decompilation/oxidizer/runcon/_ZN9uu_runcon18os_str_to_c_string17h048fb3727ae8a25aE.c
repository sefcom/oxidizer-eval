fn uu_runcon::os_str_to_c_string(a1: &str) -> : struct28 {
    let a0: i64;  // rdi
    let v0: core::result::Result<alloc::ffi::c_str::CString, alloc::ffi::c_str::NulError>;  // [bp-0x28]
    let v4: u64;  // rsi
    let v5: u64;  // rdx
    let v9: u32;  // eax
    let v10: u64;  // rcx
    let v11: u64;  // rsi
    let v12: u64;  // rcx
    let v13: u32;  // eax

    v0 = <&str as alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(v4, v5);
    v9 = 15;
    v10 = 14;
    v11 = &g_41b408;
    return struct32 {
        field_0: v13
        padding_4: <UNKNOWN>
        field_8: v4
        field_16: v12
        field_24: 85899345923
    };
}
