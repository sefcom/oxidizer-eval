long long uu_expr::syntax_tree::StringOp::eval::_$u7b$$u7b$closure$u7d$$u7d$::hb548aa121b994615(struct_1 *a0)
{
    char *v1;  // rdx
    char *v2;  // r14
    char *v3;  // r15
    unsigned long long v4;  // rsi

    if (a0->field_14 < 2)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v1 = a0->field_18->field_4;
    if (v1 != -1)
    {
        v2 = a0->field_20->field_4;
        v3 = a0->field_0;
        v4 = a0->field_8;
        if ((unsigned int)v1 > (unsigned int)v2)
            core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        if ((unsigned int)v1)
        {
            if (v4 <= v1)
            {
                if (v4 != v1)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
            else
            {
                if (*((char *)(v3 + v1)) <= 191)
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
            }
        }
        if (!(unsigned int)v2)
        {
            onig_region_free(&a0->padding_10, 0);
            return v3 + v1;
        }
        if (v4 <= v2)
        {
            if (v4 != v2)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
        else
        {
            if (*((char *)(v3 + v2)) <= 191)
                core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
        }
    }
}
