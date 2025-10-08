long long starship::modules::gcloud::GcloudContext::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    unsigned long v1;  // [bp-0x38]
    int v2;  // [bp-0x30], Other Possible Types: char
    char v3;  // [bp-0x20]

    v0.to_vec(a1, a2);
    v2.to_vec(a3, a4);
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v3);
    *((void*)&(&a0->field_10)[1]) = v2;
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    *((unsigned int *)&a0->padding_30[168]) = 0;
    return v1;
}
