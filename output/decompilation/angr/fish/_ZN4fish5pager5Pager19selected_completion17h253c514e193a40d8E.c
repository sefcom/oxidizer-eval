long long fish::pager::Pager::selected_completion(unsigned long long a0[22], struct_0 *a1)
{
    unsigned long long v1;  // rdx

    if (!((char)a0.visual_selected_completion_index(a1->field_f0, *((long long *)&a1->field_f8)) & 1))
    {
        return 0;
    }
    else if (v1 < a0[21])
    {
        return a0[20] + v1 * 144 + 48;
    }
    else
    {
        core::panicking::panic_bounds_check(v1, a0[21], &g_14dc620); /* do not return */
    }
}
