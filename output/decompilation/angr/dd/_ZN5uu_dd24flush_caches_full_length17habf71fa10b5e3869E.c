long long uu_dd::flush_caches_full_length(struct_0 *a0, char *a1)
{
    unsigned int v1;  // edx
    unsigned long v3;  // rdx

    if (a0->field_8->field_45)
    {
        if (!a0.len())
            a0.discard_cache(0, v1);
        else
            return v3;
    }
    if (a0->field_8->field_9c)
    {
        if (!a1.len())
            a1.discard_cache(0, v1);
        else
            return v3;
    }
    return 0;
}
