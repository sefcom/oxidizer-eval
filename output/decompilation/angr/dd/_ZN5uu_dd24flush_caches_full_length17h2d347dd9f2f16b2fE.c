long long uu_dd::flush_caches_full_length(struct_0 *a0, unsigned int a1[2])
{
    unsigned long v1;  // rdx

    if (a0->field_8->field_45)
    {
        if (!((char)a0.len() & 1))
            a0->field_0.discard_cache(a0->field_4, 0, v1);
        else
            return v1;
    }
    if (a0->field_8->field_9c)
    {
        if (!((char)a1.len() & 1))
            a1[0].discard_cache(a1[1], 0, v1);
        else
            return v1;
    }
    return 0;
}
