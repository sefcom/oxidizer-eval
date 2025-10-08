long long fish::reader::check_exit_loop_maybe_warning(struct_1 *a0)
{
    unsigned int v1;  // ebx
    unsigned int v2;  // ebx
    struct_0 *v3;  // r14

    v2 = v1 & 0xffffff00 | 1;
    if (fish::reader::reader_received_sighup())
        return v2;
    if (!a0)
        return 0;
    v3 = a0->field_0;
    if (v3->field_84b == 1)
    {
        if ((char)v3.try_warn_on_background_jobs(a0->field_8))
            v3->field_84b = 0;
        else
            return v2;
    }
    return 0;
}
