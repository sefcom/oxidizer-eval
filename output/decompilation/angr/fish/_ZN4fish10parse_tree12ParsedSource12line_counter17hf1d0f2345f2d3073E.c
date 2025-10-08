void fish::parse_tree::ParsedSource::line_counter(struct_0 *a0, unsigned long a1)
{
    unsigned long v1;  // cc_op
    unsigned long v2;  // cc_dep1
    unsigned long v3;  // cc_dep2
    unsigned long v4;  // cc_ndep

    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a1) + 1, 0, _ccall(v1, v2, v3, v4))))
    {
        a0->field_0 = a1;
        *((uint128_t *)&(&a0->field_0)[1]) = 0;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = 0;
        return;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20851929()
}
