long long uu_dd::flush_caches_full_length::h852ee23a16d52f1f(struct_0 *a0, void* a1, unsigned long a2)
{
    char v1[157];  // r15
    unsigned int v2;  // rdx
    void* v3;  // rcx

    v1 = a0->field_8;
    if (v1[69])
    {
        if (!uu_dd::Source::len::hc3b1b96fe0850bcf(a0))
            uu_dd::Input::discard_cache::h2bede2b9be5bf459(a0->field_0, a0->field_4, 0, v2);
        else
            return v3;
    }
    if (v1[156])
    {
        if (!uu_dd::Dest::len::hc5f67b7ac477ff9e(a1))
            uu_dd::Output::discard_cache::h9654de1740a6c207(a1, 0, v2);
        else
            return v3;
    }
    return 0;
}
