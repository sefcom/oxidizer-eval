long long fish::builtins::wait::wait_for_completion(unsigned long long a0, struct_0 **a1, unsigned long a2, unsigned int a3)
{
    struct_0 **v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x44]
    unsigned long long v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long v6;  // r13
    struct_0 **v7;  // r14
    char v8;  // dl
    unsigned long long v9;  // rbp
    unsigned long long v10;  // r12
    unsigned long long v11;  // r12
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long v19;  // r12

    if (!a2)
        return 0x8200000000;
    v6 = a3;
    v7 = a1;
    v3 = fish::signal::SigChecker::new_sighupint();
    v4 = v8;
    v9 = &a1[a2];
    if ((char)v6)
    {
        v0 = a1;
        if (!v0.any())
        {
            for (v2 = v6; !(char)v3.check(); v1 = v9)
            {
                fish::proc::proc_wait_any(a0);
                v0 = a1;
            }
        }
        else
        {
            v10 = a2 * 8;
            while (true)
            {
                v11 = v10;
                if (*(v7)->field_30)
                {
                    a0.mut_wait_handles().remove(v7);
                    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v14);
                    return 0x8200000000;
                }
                v7 += 1;
                v10 = v11 - 8;
                if (v11 == 8)
                    return 0x8200000000;
            }
        }
    }
    else
    {
        v0 = a1;
        v1 = v9;
        if (!v0.all())
        {
            for (v2 = v6; !(char)v3.check(); v1 = v9)
            {
                fish::proc::proc_wait_any(a0);
                v0 = a1;
            }
        }
        else
        {
            v15 = a2 * 8;
            do
            {
                v16 = v15;
                if (*(v7)->field_30)
                {
                    a0.mut_wait_handles().remove(v7);
                    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v8);
                }
                v7 += 1;
                v19 = v16 - 8;
                v15 = v19;
            } while (v16 != 8);
            return 0x8200000000;
        }
    }
    return 558345748481;
}
