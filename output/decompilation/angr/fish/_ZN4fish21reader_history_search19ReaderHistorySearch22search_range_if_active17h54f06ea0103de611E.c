long long fish::reader_history_search::ReaderHistorySearch::search_range_if_active(unsigned int a0[3], struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rdi
    unsigned int v6;  // rdx

    v0 = v2;
    v3 = 0;
    if (a1->field_120)
    {
        v4 = a1->field_110;
        if (v4)
        {
            if (v4 < a1->field_10)
            {
                v5 = v4 * 32;
                if ((char)__CFADD__(a1->field_118, *((long long *)(a1->field_8 + v5 + 24))))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14e13d0); /* do not return */
                a1.search_string();
                a0[1] = a1->field_118 + *((long long *)(a1->field_8 + v5 + 24)).new(v6);
                a0[2] = v6;
                v3 = 1;
            }
            else
            {
                core::panicking::panic_bounds_check(v4, a1->field_10, &g_14e13b8); /* do not return */
            }
        }
    }
    a0[0] = v3;
    return a0;
}
