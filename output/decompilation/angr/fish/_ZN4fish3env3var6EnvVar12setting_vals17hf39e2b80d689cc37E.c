long long fish::env::var::EnvVar::setting_vals(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    char v4;  // cl
    unsigned long v5;  // rdx

    v0 = v2;
    v3 = a2.from();
    v4 = a1->field_10;
    a0->field_0 = v3;
    a0->field_8 = v5;
    a0->field_10 = v4;
    return a0;
}
