long long fish::exec::allow_exec_with_background_jobs(struct_1 *a0)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // rbp
    unsigned long long v4;  // r15
    struct_0 *v5;  // r12
    unsigned long long v7;  // rdx

    v3 = vvar_43{reg 56} & 0xffffffffffffff00 | 1;
    if (a0->field_5a == 1)
    {
        fish::proc::jobs_requiring_warning_on_exit(&v0, a0);
        if (*((long long *)&v1))
        {
            v4 = fish::reader::reader_run_count();
            v5 = a0.libdata_mut();
            if (fish::nix::isatty(0))
            {
                if (!v4)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d7f78); /* do not return */
                if (v4 - 1 == v5->field_70)
                    goto LABEL_13a8c36;
                fish::proc::print_exit_warning_for_jobs(&v0);
                v5->field_70 = v4;
                v3 = 0;
            }
            else
            {
LABEL_13a8c36:
                fish::proc::hup_jobs(a0.jobs());
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v7);
                v3 = v3 & 0xffffffffffffff00 | 1;
            }
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v7);
        }
        else
        {
            v3 = v3 & 0xffffffffffffff00 | 1;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>(&v0);
    }
    return v3 & 4294967295;
}
