long long uu_join::State::print_line(struct_1 *a0, unsigned long long a1, void* a2, struct_0 *a3)
{
    unsigned long v0;  // [bp-0x28]
    char v1;  // [bp-0x21]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v0 = v3;
    if (a3->field_140)
    {
        v4 = a3.print_format(a1, a2, a0);
        if (v4)
            return v4;
    }
    else
    {
        v5 = a2.get_field(*((long long *)&a0->field_40));
        if (!v5)
        {
            v5 = a3->field_120;
            v6 = a3->field_128;
        }
        v7 = a1.write_all(v5, v6);
        if (v7)
            return v7;
        v8 = a3->field_108.print_fields(a3->field_110, a1, a2, *((long long *)&a0->field_40));
        if (v8)
            return v8;
    }
    v1 = a3->field_148;
    return a1.write_all(&v1, 1);
}
