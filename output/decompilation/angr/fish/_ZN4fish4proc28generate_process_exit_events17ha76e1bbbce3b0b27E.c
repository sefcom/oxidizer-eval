long long fish::proc::generate_process_exit_events(struct_1 *a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long v2;  // [bp-0x70]
    char v3;  // [bp-0x68]
    unsigned long long v5;  // rax
    struct_0 *v6;  // rax
    unsigned long v7;  // r14
    unsigned int *v8;  // rax
    unsigned int v9;  // eax

    if (a0->field_4a)
    {
        v5 = a0.is_foreground();
        if ((char)v5)
            return v5;
    }
    v0 = a0->field_18;
    v1 = a0->field_20 * 224 + a0->field_18;
    v6 = v0.find();
    if (!v6)
        return v6;
    while (true)
    {
        if (v6.is_completed())
        {
            v7 = &v6[1].padding_0[41];
            if (!v7.load())
            {
                v7.store(1);
                v8 = v6->padding_0[144].get();
                if (!v8)
                    core::option::unwrap_failed(&g_14df7a0); /* do not return */
                v2 = v6->field_a8;
                v9 = v2.status_value();
                v3.process_exit(*(v8), v9);
                a1.push(&v3, &g_14df7b8);
            }
        }
        v6 = v0.find();
        if (!v6)
            return v6;
    }
}
