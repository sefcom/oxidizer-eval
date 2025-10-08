long long starship::modules::memory_usage::display_bs(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x29]
    int v1;  // [bp-0x28], Other Possible Types: char
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax

    bytesize::to_string(&v1, a1, 1);
    v0 = 1;
    v1.retain(&v0);
    v4 = *((long long *)&v2);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v1;
    return v4;
}
