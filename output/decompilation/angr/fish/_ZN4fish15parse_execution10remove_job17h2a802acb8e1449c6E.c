void fish::parse_execution::remove_job(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3[3];  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned long long v7;  // rdx

    v0 = v2;
    v3 = a0.jobs_mut();
    v4 = 18446744073709551615;
    while (true)
    {
        v5 = v4;
        if (!(v3[2]) + v5 == -1)
            break;
        v4 = v5 + 1;
        if (*((long long *)(v3[1] + v5 * 8 + 8)) == a1)
        {
            v0 = v3.remove(v5 + 1);
            core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v0);
            break;
        }
    }
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v7);
    return;
}
