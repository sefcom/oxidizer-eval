long long uu_dd::Alarm::get_trigger::h51a33321f8d9afe9(struct struct_0 **a0)
{
    struct_0 *v1;  // rcx
    char v2;  // 4100

    v1 = *(a0);
    v2 = v1->field_10;
    v1->field_10 = 0;
    if (CasCmpNE(v1->field_10, v2))
        goto LABEL_0x4d67a5;
    return v2;
}
