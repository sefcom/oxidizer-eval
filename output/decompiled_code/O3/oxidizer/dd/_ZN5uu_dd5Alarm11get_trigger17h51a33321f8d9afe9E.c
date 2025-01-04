fn uu_dd::Alarm::get_trigger(a0: &&struct_0) -> u64 {
    let v1: &struct_0;  // rcx
    let v2: u8;  // 4100

    v1 = *(a0);
    v2 = v1->field_10;
    v1->field_10 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x4d67a5;
    }
    return -0x100 | v2;
}
