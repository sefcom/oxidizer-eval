fn uu_dd::Output::sync(a0: void*) -> u64 {
    let v1: &u64;  // rax

    v1 = a0->field_10;
    if !(!*((&v1[18] as &char + 5) as &i8)) {
        goto LABEL_0x4d7320;
    }
    if !(!*((&v1[18] as &char + 4) as &i8)) {
        goto LABEL_0x4d7350;
    }
    return 0;
}
