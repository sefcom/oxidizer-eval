fn uu_dd::parseargs::Parser::parse_status_level(a0: &Option<struct1>, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "none") as i8 {
        a0->field_8 = 2;
        goto LABEL_4d35f2;
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "noxfer") as i8 {
        a0->field_8 = 1;
        goto LABEL_4d35f2;
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "progress") as i8 {
        <T as alloc::slice::hack::ConvertVec>::to_vec(&a0->field_8, a1, a2);
        v1 = 10;
    } else {
        a0->field_8 = 0;
LABEL_4d35f2:
        v1 = 14;
    }
    return struct8 {
        field_0: v1
    };
}
