long long uu_dd::Alarm::get_trigger(struct_0 **a0)
{
    char v1;  // 4100

    v1 = *(a0)->field_10;
    vvar_14 = CAS((Load(addr=vvar_0, size=8, endness=Iend_LE) + 0x10<64>), 0x0<8>, vvar_13)
    if (CasCmpNE(vvar_14, v1))
        goto LABEL_0x4cd345;
    return v1;
}
