long long fish::topic_monitor::GenerationsList::any_valid(struct_0 *a0)
{
    void* v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    int v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rdx
    char v7;  // bl

    v0 = 0;
    v1 = 3;
    *((uint128_t *)&v2) = a0->field_0;
    v3 = a0->field_10;
    v5 = 0;
    if (((char)v0.next() & 1))
    {
        do
        {
            v7 |= v6 != -1;
            v5 = v5 & 0xffffffffffffff00 | v7;
        } while (((char)v0.next() & 1));
    }
    return (unsigned int)v5 & 0xffffff00 | v7 & 1;
}
