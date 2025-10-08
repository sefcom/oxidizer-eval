void fish::proc::proc_update_jiffies(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    struct_1 *v4;  // rax
    unsigned long long v5;  // rcx
    struct_0 **v6;  // r12
    struct_0 **v7;  // r12
    unsigned long long v8;  // xmm0lq
    unsigned long v9;  // r12
    unsigned long long v10[24];  // r15
    unsigned int *v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rdx

    v4 = a0.jobs();
    v5 = v4->field_10;
    if (v5)
    {
        v6 = v4->field_8;
        v7 = v6;
        do
        {
            v9 = v7 + 1;
            v1 = *(v7)->field_28;
            v2 = *(v7)->field_30 * 224 + *(v7)->field_28;
            while (true)
            {
                v10 = v1.find();
                if (!v10)
                    break;
                fish::common::timef();
                v0 = v8;
                v11 = v10[18].get();
                if (!v11)
                    core::option::unwrap_failed(&g_14df580); /* do not return */
                v12 = fish::proc::proc_get_jiffies(*(v11));
                v8 = v0;
                v10[22] = v0;
                v10[23] = v12;
            }
            v7 = v9;
        } while (v7 != &v6[v5]);
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v13);
    return;
}
