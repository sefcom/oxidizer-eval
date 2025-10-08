long long fish::proc::Job::wants_job_id(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v4;  // rax

    if (a0->field_20 > 1)
    {
        return v4 & 0xffffffffffffff00 | 1;
    }
    else if (a0->field_20 == 1)
    {
        return v4 & 0xffffffffffffff00 | 1;
    }
    else
    {
        v0 = v4 & 0xffffffffffffff00 | 1;
        core::panicking::panic_bounds_check(0, 0, &g_14df398); /* do not return */
    }
}
