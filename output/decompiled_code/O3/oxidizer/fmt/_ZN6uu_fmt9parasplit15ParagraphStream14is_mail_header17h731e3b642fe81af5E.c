fn uu_fmt::parasplit::ParagraphStream::is_mail_header(a0: &struct_0) -> u64 {
    let v0: &u8;  // [sp-0x20]
    let v1: u64;  // [sp-0x18]
    let v4: &u8;  // rbx
    let v5: u64;  // r14
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: &u8;  // rdx

    if a0->field_18 {
        return 0;
    }
    v4 = a0->field_8;
    v5 = a0->field_10;
    v6 = core::slice::<impl [T]>::starts_with(v4, v5, "From ");
    if v6 {
        return v6 | -0x100 | 1;
    }
    v7 = core::str::<impl str>::find(v4, v5);
    if !v7 {
        return 0;
    } else if !v8 {
        return 0;
    } else {
        if v8 >= v5 {
            if v8 != v5 {
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if *((v4 + v8) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
        v0 = v4;
        v1 = v8 + v4;
        return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0, v7, v8) as i32);
    }
}
