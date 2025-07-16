fn uu_fmt::parasplit::ParagraphStream::is_mail_header(a0: i64) -> long long {
    let v0: u64;  // [bp-0x20]
    let v1: u64;  // [bp-0x18]
    let v3: u64;  // rbx
    let v4: u64;  // r14
    let v5: u64;  // rax
    let v6: u64;  // rdx
    let v7: u64;  // rsi

    if *((a0 + 24) as &i64) {
        return 0;
    }
    v3 = *((a0 + 8) as &i64);
    v4 = *((a0 + 16) as &i64);
    v5 = core::slice::<impl [T]>::starts_with(v3, v4, "From ");
    if v5 {
        return v5 & -0x100 | 1;
    } else if !core::str::<impl str>::find(v3, v4) {
        return 0;
    } else if !v6 {
        return 0;
    } else {
        v0 = v3;
        v1 = v6 + v3;
        return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), v7);
    }
}
