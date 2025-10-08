fn bat::theme::ThemeName::new(a1: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]

    v0 = <T as core::convert::Into<U>>::into(a1);
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, v0.field_16, "default") {
        return Some(struct24 {
            field_0: v0.field_0
            field_16: v0.field_16
        });
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
