long long uu_dd::flush_caches_full_length::h852ee23a16d52f1f(struct_0 *a0, void* a1)
{
    char v1[157];  // r15
    unsigned int v2;  // rdx
    void* v3;  // rcx

    v1 = a0->field_8;
    if (v1[69])
    {
        v3 = v2;
        if (uu_dd::Source::len::hc3b1b96fe0850bcf(a0))
            return v3;
        uu_dd::Input::discard_cache::h2bede2b9be5bf459(a0->field_0, a0->field_4, 0, v2);
    }
    if (v1[156])
    {
        v3 = v2;
        if (uu_dd::Dest::len::hc5f67b7ac477ff9e(a1))
            return v3;
        uu_dd::Output::discard_cache::h9654de1740a6c207(a1, 0, v2);
    }
    return 0;
}
