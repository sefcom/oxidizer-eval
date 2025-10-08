long long fish::history::file::complete_lines(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    v0 = a1;
    v1 = a2;
    v2 = 0;
    v0.next_back();
    v4 = *((long long *)&v2);
    a0->field_10 = v4;
    a0->field_0 = *((int128_t *)&v0);
    return v4;
}
