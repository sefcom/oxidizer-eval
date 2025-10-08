fn starship::modules::git_metrics::GitDiff::get_variable(a0: i64, a1: u32, a2: void*, a3: u32) -> long long {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: struct40;  // rax

    v0 = v2;
    if a1 {
        v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a2, a3, "0");
        if v3 as u8 {
            return struct8 {
                field_0: 9223372036854775810
            };
        }
    }
    return struct24 {
        field_0: 9223372036854775809
        field_8: a2
        field_16: a3
    };
}
