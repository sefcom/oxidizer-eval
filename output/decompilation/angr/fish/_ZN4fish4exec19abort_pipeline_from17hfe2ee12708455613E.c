long long fish::exec::abort_pipeline_from(unsigned long long a0, unsigned long a1, void* a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    void* v3;  // [bp-0x20]
    unsigned long long v5;  // rax
    void* v6;  // r14
    unsigned long long v7;  // rax

    v0 = a0;
    v2 = a1 * 224 + a0;
    while (true)
    {
        v6 = a2;
        if (v6)
        {
            v3 = 0;
            v7 = v0.nth(v6);
            if (!v7)
                return v7;
            v5 = v7.mark_aborted_before_launch();
            a2 = v3;
        }
        else if (v0 != v2)
        {
            v1 = v0 + 224;
            a2 = 0;
            v5 = v0.mark_aborted_before_launch();
            v0 = v1;
        }
        else
        {
            return v5;
        }
    }
}
