long long uu_join::State::skip_line(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v5;  // rax

    if (a0->field_59)
    {
        v5 = a0.print_first_line(a1, a3);
        if (v5)
            return v5.from();
    }
    v0.reset_next_line(a0, a2);
    if (*((long long *)&v0) != 9223372036854775809)
    {
        v3 = v1;
        memcpy(&v2, &v0, 16);
        return v2.new();
    }
    return 0;
}
