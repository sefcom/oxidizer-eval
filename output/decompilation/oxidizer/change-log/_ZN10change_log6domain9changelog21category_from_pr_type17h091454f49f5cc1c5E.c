fn change_log::domain::changelog::category_from_pr_type(a0: u32, a1: u32) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: void*;  // rbx
    let v4: u32;  // rdx

    v0 = v2;
    v3 = core::str::<impl str>::trim_end_matches(a0, a1);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "feat") {
        return &g_4bf5c8;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "fix") {
        return &g_4cacf1;
    } else {
        return ((<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "chore") & 255) ? &g_4caceb : 0);
    }
}
