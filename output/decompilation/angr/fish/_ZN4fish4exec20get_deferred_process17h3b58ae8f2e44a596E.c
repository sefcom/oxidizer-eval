long long fish::exec::get_deferred_process(unsigned int *a0, unsigned long a1)
{
    unsigned int *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    void* v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // rbx
    struct_0 *v6;  // rdx

    if (a1 < 2)
    {
        return 0;
    }
    else if (*(a0) == 4)
    {
        return 0;
    }
    else
    {
        v3 = v5;
        v0 = a0;
        v1 = &a0[56 * a1];
        v2 = 0;
        while (true)
        {
            v0.next_back();
            if (!v6)
            {
                return 0;
            }
            else if (v6->field_0)
            {
                return v6->field_d5 ^ 1;
            }
        }
    }
}
