long long uu_dd::progress::SignalHandler::install_signal_handler::h8b823b4956c58b26(struct_2 *a0, unsigned long long a1, struct_1 *a2)
{
    unsigned long long *v0;  // [bp-0xf0], Other Possible Types: char
    char v1;  // [bp-0xec]
    char v2;  // [bp-0xe8], Other Possible Types: unsigned long
    int v3;  // [sp-0xe0]
    unsigned long long *v4;  // [sp-0xd0]
    int v5;  // [sp-0xc8]
    int v20;  // [sp-0x28]
    unsigned long long *v22;  // rcx
    struct struct_0 **v24;  // rax
    int v25;  // xmm0
    unsigned long long *v26;  // rdx
    unsigned long v27;  // cc_ndep
    unsigned long v28;  // cc_ndep
    unsigned long long v29;  // cc_dep1

    std::os::unix::net::stream::UnixStream::pair::hacebe27d739a4e6d(&v0);
    if (*((int *)&v0))
        goto LABEL_4b206c;
    signal_hook::iterator::backend::SignalDelivery$LT$R$C$E$GT$::with_pipe::hed8f5f35a5076e44(&v0, *((int *)&v1), *((int *)&v2), 10);
    v22 = v0;
    if (!v22)
    {
LABEL_4b206c:
        *((unsigned long *)&a0->padding_8[0]) = v2;
        a0->field_0 = 0;
        if (a2->field_0)
            v24(a1);
        if (a2->field_8)
        {
            __rust_dealloc(a1);
            return a0;
        }
        return a0;
    }
    v25 = v3;
    v26 = v4;
    v20 = v5;
    *(v22) = vvar_180 + 1;
    if (CasCmpNE(*(v22), vvar_180))
        goto LABEL_0x4b20e1;
    v28 = amd64g_calculate_rflags_c(20, v22, 0, v27);
    v29 = vvar_180 + 1;
    if ((char)amd64g_calculate_condition(14, 24, vvar_180 + 1, 0, amd64g_calculate_rflags_c(20, v22, 0, v27)))
        goto LABEL_0x4b2217;
}
