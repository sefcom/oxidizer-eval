fn uu_fmt::parasplit::ParagraphStream::is_mail_header(a0: i64) -> long long {
    let v0: struct16;  // [bp-0x28]
    let v2: u64;  // rbx
    let v3: u64;  // r14
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: core::option::Option<&str>;  // rax
    let v7: u64;  // rsi

    if !*((a0 + 24) as &i64) {
        v2 = *((a0 + 8) as &i64);
        v3 = *((a0 + 16) as &i64);
        v4 = core::slice::<impl [T]>::starts_with(v2, v3, "From ");
        if v4 {
            return v4 & -0x100 | 1;
        } else if (v5 & core::str::<impl str>::find(v2, v3)) == 1 {
            v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v5, v2, v3) as u64;
            v0 = struct16 {
                field_0: v6
                field_8: v5 + v6
            };
            return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), v7);
        }
    }
    return 0;
}
