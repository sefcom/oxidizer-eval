fn uu_dd::Alarm::get_trigger(a0: i64) -> long long {
    let v1: u8;  // 4100

    v1 = *((*(a0 as &i64) + 16) as &i8);
    vvar_14 = CAS((Load(addr=vvar_0, size=8, endness=Iend_LE) + 0x10<64>), 0x0<8>, vvar_13)
    if BinaryOp CasCmpNE {
        goto LABEL_0x4d67a5;
    }
    return v1;
}
