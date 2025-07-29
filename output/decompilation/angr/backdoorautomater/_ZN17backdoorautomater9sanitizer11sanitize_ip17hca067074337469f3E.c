long long backdoorautomater::sanitizer::sanitize_ip(struct_0 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    *((long long *)&a1->padding_1[7]).from_str(a1->field_10, a2, a3).expect();
    v4 = a1->field_10;
    a0->field_10 = v4;
    *((int128_t *)&a0->field_0) = *((int128_t *)&a1->field_0);
    return v4;
}
