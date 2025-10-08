long long fish::reader::Reader::try_warn_on_background_jobs(struct_0 *a0, unsigned long long *a1)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    unsigned int v3;  // ebp

    fish::threads::assert_is_main_thread();
    if (!a0->field_84c)
    {
        fish::reader::reader_data_stack();
        if (g_15a90b0 <= 1)
        {
            fish::proc::jobs_requiring_warning_on_exit(&v0, a1);
            v3 = vvar_21{reg 56} & 0xffffff00 | *((long long *)&v1);
            if (*((long long *)&v1))
            {
                fish::proc::print_exit_warning_for_jobs(&v0);
                a0->field_84c = 1;
            }
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>(&v0);
            return v3;
        }
    }
    return 0;
}
