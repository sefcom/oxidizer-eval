long long fish::highlight::highlight::Highlighter::color_command(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x34]
    unsigned int v1;  // [bp-0x30]
    char v2;  // [bp-0x2c]
    unsigned int v4;  // ebp
    unsigned int v6;  // r14d
    unsigned int *v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v0.try_source_range(a1);
    v4 = 0;
    v6 = 0;
    if (v0)
    {
        v4 = *((int *)&v2);
        v6 = v1;
    }
    v7 = *((long long *)&a0->field_78).get_source(*((long long *)&a0->field_80), v6, v4);
    v8 = v6.as_usize(v4);
    return fish::highlight::highlight::color_string_internal(v7, v9, 0x20000, v8.index_mut(v9, a0->field_50, a0->field_58, &g_14d9648), v9);
}
