long long uu_head::read_n_bytes::h68eb7e514a72d45d(unsigned long a0, unsigned long a1, unsigned long a2)
{
    struct_0 *v0;  // [sp-0x28]
    unsigned long v1;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdx
    struct_0 *v7;  // rdi
    struct_0 *v8;  // rdi
    void* v9;  // rdx

    v2 = a0;
    v3 = a1;
    v1 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v1, v5, v6);
    if (!_$LT$std..sys..pal..unix..kernel_copy..Copier$LT$R$C$W$GT$$u20$as$u20$std..sys..pal..unix..kernel_copy..SpecCopy$GT$::copy::h6d59f48c571c6329(&v2, &v0))
    {
        v8 = v0;
        v8->field_c = vvar_107 - 1;
        if (vvar_107 != 1)
            return 0;
        v8->field_0 = 0;
        v8->field_8 = 0;
        if (CasCmpNE(v8->field_8, v8->field_8))
            goto LABEL_0x488b49;
        if ((Not (Load(addr=(vvar_47{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
        std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(&v8->field_8);
    }
    v7 = v0;
    v7->field_c = vvar_106 - 1;
    if (vvar_106 != 1)
        return v9;
    v7->field_0 = 0;
    v7->field_8 = 0;
    if (CasCmpNE(v7->field_8, v7->field_8))
        goto LABEL_0x488b1d;
    if (v7->field_8 == 2)
        goto LABEL_0x488b25;
    goto LABEL_0x488b53;
}
