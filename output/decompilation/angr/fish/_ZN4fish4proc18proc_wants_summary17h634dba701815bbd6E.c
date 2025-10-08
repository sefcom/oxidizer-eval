long long fish::proc::proc_wants_summary(struct_1 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x14]
    unsigned int v3;  // ebx

    if (a1.is_completed() && a1->padding_0[144].get())
    {
        v0 = a1->field_a8;
        if ((char)v0.signal_exited() && (int)v0.signal_code() != 13)
        {
            v3 = (unsigned int)a1 & 0xffffff00 | 1;
            if (a0->field_48 != 1)
                return v3;
            v1 = v0.signal_code();
            if (v1.slice_contains(&g_a1fd3c, 6))
                return v3;
        }
    }
    return 0;
}
