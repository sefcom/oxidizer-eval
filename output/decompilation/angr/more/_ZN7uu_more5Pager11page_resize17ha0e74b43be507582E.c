long long uu_more::Pager::page_resize::ha0e74b43be507582(struct_0 *a0, unsigned long a1, unsigned short a2)
{
    void* v1;  // rax
    unsigned long v2;  // cc_ndep

    if (a2 != 1)
    {
        *((int *)&a0->field_40) = ((char)amd64g_calculate_condition(2, 6, a1 & 65535, 1, v2) ? 0 : (unsigned short)((a1 & 0xffffffffffff0000 | (unsigned short)a1 - 1) & 4294967295 & 4294967295));
        return 0;
    }
    return v1;
}
