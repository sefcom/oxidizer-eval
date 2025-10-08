long long uu_more::Pager::page_resize(struct_0 *a0, unsigned long a1, unsigned short a2, unsigned short a3)
{
    unsigned long v1;  // rax
    unsigned long v2;  // cc_ndep
    unsigned int v3;  // edx

    if (!a3)
    {
        a0->field_58 = ((char)_ccall(2, 6, (unsigned long long)a2, 1, v2) ? 0 : v3 & 0xffff0000 | a2 - 1);
        return ((char)_ccall(2, 6, (unsigned long long)a2, 1, v2) ? 0 : v3 & 0xffff0000 | a2 - 1);
    }
    return v1;
}
