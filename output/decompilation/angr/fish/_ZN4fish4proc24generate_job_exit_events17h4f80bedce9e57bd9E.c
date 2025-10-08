long long fish::proc::generate_job_exit_events(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x50]
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if ((!a0->field_4a || !a0.is_foreground()) && (char)a0.posts_job_exit_events())
    {
        v2 = a0.get_last_pid();
        if (v2)
        {
            v0.job_exit(v2, a0->field_30);
            a1.push(&v0, &g_14df7d0);
        }
    }
    v3 = a0.job_id();
    v0.caller_exit(a0->field_30, v3);
    return a1.push(&v0, &g_14df7e8);
}
