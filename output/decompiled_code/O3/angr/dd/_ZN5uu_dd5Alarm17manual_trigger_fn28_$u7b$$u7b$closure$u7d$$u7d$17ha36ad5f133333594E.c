long long uu_dd::Alarm::manual_trigger_fn::_$u7b$$u7b$closure$u7d$$u7d$::ha36ad5f133333594(struct struct_0 **a0)
{
    struct_0 *v0;  // [sp-0x8]
    struct_0 *v2;  // rax
    struct_0 *v3;  // rcx
    unsigned long long v5;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v9;  // cc_dep2

    v0 = v2;
    v3 = *(a0);
    if (v3 == -1)
        return v0;
    do
    {
        v5 = v3->field_0;
        if (!v5)
            return v0;
        if (v5 < 0)
            _ZN5alloc4sync17Weak$LT$T$C$A$GT$7upgrade17checked_increment18panic_cold_display17h89648ddaf6594ebcE.llvm.14644654341539981079(); /* do not return */
        v7 = v5 + 1;
        v3->field_0 = v7;
        if (v5 == v3->field_0)
        {
            v3->field_0 = v7;
            v9 = v3->field_0;
        }
        else
        {
            v3->field_0 = v7;
            v9 = v3->field_0;
        }
    } while (!((char)(v5 == v9)));
    v0 = v3;
    v3->field_10 = 2;
    v3->field_0 = vvar_64 - 1;
    if (CasCmpNE(v3->field_0, vvar_64))
        goto LABEL_0x4991aa;
    if (!vvar_64 - 1)
        goto LABEL_0x4991b0;
    goto LABEL_0x4991b8;
}
