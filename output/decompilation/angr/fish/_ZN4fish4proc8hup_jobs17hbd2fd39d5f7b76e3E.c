void fish::proc::hup_jobs(struct_1 *a0)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    unsigned int v8;  // eax
    unsigned long long *v9;  // r14
    unsigned long long v10;  // r13
    unsigned long long v11;  // r13
    unsigned int v12;  // eax
    unsigned long v13;  // r13

    v8 = fish::nix::getpgrp();
    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (a0->field_10)
    {
        v9 = a0->field_8;
        v10 = a0->field_10 * 8;
        do
        {
            v11 = v10;
            v12 = *(v9) + 16.get_pgid();
            if (!v12 == v8 && !!v12 && !*(v9) + 16.is_completed())
            {
                *(v9) + 16.signal(1);
                if ((char)*(v9) + 16.is_stopped())
                    *(v9) + 16.signal(18);
                if ((char)fish::common::is_windows_subsystem_for_linux(1))
                    v0.push(v9);
            }
            v9 += 1;
            v13 = v11 - 8;
            v10 = v13;
        } while (v11 != 8);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v0, 8);
    return;
}
