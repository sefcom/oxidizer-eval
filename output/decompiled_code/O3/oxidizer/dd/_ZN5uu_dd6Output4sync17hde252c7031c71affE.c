fn uu_dd::Output::sync(a0: &struct_0) -> u64 {
    let v1: &u64;  // rax

    v1 = a0->field_10;
    if *((&v1[18] as &char + 5) as &i8) {
        goto *((4322332 + a0->padding_0[0] * 4) as &i32) + 4322332;
    } else {
        if !*((&v1[18] as &char + 4) as &i8) {
            return 0;
        }
        goto *((4322348 + a0->padding_0[0] * 4) as &i32) + 4322348;
    }
}
