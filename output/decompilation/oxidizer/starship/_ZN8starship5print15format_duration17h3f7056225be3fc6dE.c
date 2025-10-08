fn starship::print::format_duration(a1: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct192;  // [bp-0x60]
    let v1: &mut [u8];  // [bp-0x58]
    let v2: core::option::Option<&str>;  // [bp-0x50]
    let v3: std::io::stdio::Stdout;  // [bp-0x48]
    let v4: struct92;  // [bp-0x40]
    let v5: Option<struct24>;  // [bp-0x38]
    let v6: &str;  // [bp-0x30]
    let v7: core::option::Option<&str>;  // [bp-0x28]
    let v8: struct24;  // [bp-0x20]
    let v9: struct16;  // [bp-0x18]
    let v11: u64;  // rax
    let v12: u64;  // rcx

    v11 = 1000 * *(a1 as &i64);
    v12 = *((a1 + 8) as &i32) * 1125899907 >> 50;
    v1 = v12 + v11;
    v2 = *(a1 as &i64) / 18446744073709552 + ((v12 + v11 <= v12 ? 1 : 0) & 1);
    if v2 || v1 {
        v0 = &v1;
        v3 = &v0;
        v4 = <&T as core::fmt::Debug>::fmt;
        v5 = &g_11f6f90;
        v6 = 2;
        v9 = 0;
        v7 = &v3;
        v8 = 1;
        core::option::Option<T>::map_or_else(a0, 0, v2 | v1, &v5);
    } else {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "<1ms");
    }
    return;
}
