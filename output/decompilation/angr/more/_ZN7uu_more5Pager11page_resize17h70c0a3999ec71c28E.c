long long uu_more::Pager::page_resize(struct_0 *a0, unsigned short a1, unsigned short a2)
{
    unsigned long v1;  // rax
    unsigned long v2;  // cc_ndep
    unsigned int v3;  // esi

    if (!a2)
    {
        a0->field_90 = ((char)amd64g_calculate_condition(2, 6, (unsigned long long)a1, 1, v2) ? 0 : v3 & 0xffff0000 | a1 - 1);
        return ((char)amd64g_calculate_condition(2, 6, (unsigned long long)a1, 1, v2) ? 0 : v3 & 0xffff0000 | a1 - 1);
    }
    return v1;
}
