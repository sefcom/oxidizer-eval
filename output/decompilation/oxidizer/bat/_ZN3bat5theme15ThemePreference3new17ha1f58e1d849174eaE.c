fn bat::theme::ThemePreference::new(a0: i64, a1: i64, a2: i64) {
    let v0: u8;  // [bp-0x38]
    let v1: i64;  // [bp-0x30]
    let v2: i8;  // [bp-0x28]
    let v4: struct24;  // r12
    let v5: struct24;  // r15
    let v6: u8;  // cl
    let v9: u64;  // r12

    v4 = 9223372036854775809;
    core::ops::function::FnOnce::call_once(&v0, a1, a2);
    v5 = *(&v2 as &i64);
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v5, "auto") {
        v6 = 1;
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v5, "auto:always") {
            v6 = 2;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v5, "auto:system") {
                bat::theme::ThemeName::new(a0, &v0);
                return;
            }
        }
    }
    return struct16 {
        field_0: v9
        field_8: v6
    };
}
