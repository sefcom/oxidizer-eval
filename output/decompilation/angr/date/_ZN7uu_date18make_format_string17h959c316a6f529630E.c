void uu_date::make_format_string(struct_0 *a0)
{
    unsigned long long v1;  // rax

    v1 = 0x8000000000000000 ^ a0->field_20;
    if (v1 >= 5)
        v1 = 3;
    goto (long long)(g_4fc404[v1] + (char *)&g_4fc404[0]);
}
