fn uu_fmt::parasplit::ParagraphStream::is_mail_header(a0: i64) -> long long {
    let v0: struct16;  // [bp-0x20]
    let v2: u64;  // rbx
    let v3: u64;  // r14
    let v4: core::fmt::Arguments;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rcx
    let v7: u64;  // rsi

    if *((a0 + 24) as &i64) {
        return 0;
    }
    v2 = *((a0 + 8) as &i64);
    v3 = *((a0 + 16) as &i64);
    v4 = core::slice::<impl [T]>::starts_with(v2, v3, "From ");
    if v4 as u8 {
        return v4 & -0x100 | 1;
    } else if !core::str::<impl str>::find(v2, v3) {
        return 0;
    } else {
        v6 = v5;
        if v5 {
            v0 = struct16 {
                field_0: v2
                field_8: v5 + v2
            };
            return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), v7);
        }
        return 0;
    }
}
