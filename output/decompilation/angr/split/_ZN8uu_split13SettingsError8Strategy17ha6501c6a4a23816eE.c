long long uu_split::SettingsError::Strategy(struct_0 *a0, struct_0 *a1)
{
    unsigned long long v1;  // rax
    int v2;  // xmm0

    v1 = a1->field_20;
    a0->field_20 = v1;
    v2 = a1->field_0;
    a0->field_10 = a1->field_10;
    *((void*)&a0->field_0) = v2;
    return v1;
}
