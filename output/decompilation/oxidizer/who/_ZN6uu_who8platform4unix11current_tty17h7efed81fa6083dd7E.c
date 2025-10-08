fn uu_who::platform::unix::current_tty(a0: i64) -> int {
    let v0: Result<struct24, struct24>;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: struct24;  // [bp-0x30]
    let v3: struct24;  // [bp-0x28]
    let v5: u64;  // rax
    let v8: u32;  // rdx

    v5 = ttyname(0);
    if !v5 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v0 = alloc::ffi::c_str::<impl core::ffi::c_str::CStr>::to_string_lossy(v5, strlen(v5) + 1);
    v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::<impl str>::trim_start_matches(v1, v2), v8);
    return struct24 {
        field_0: v3.field_0
        field_16: v3.field_16
    };
}
