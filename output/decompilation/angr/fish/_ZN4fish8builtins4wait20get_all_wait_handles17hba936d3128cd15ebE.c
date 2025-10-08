long long fish::builtins::wait::get_all_wait_handles(unsigned long a0, unsigned long long a1)
{
    struct_0 *v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    int v2;  // [bp-0x48], Other Possible Types: char
    char v3;  // [bp-0x38]
    unsigned long long v6;  // rdx
    struct_2 *v7;  // rax
    struct_1 **v8;  // r14
    unsigned long long v9[9];  // rcx
    unsigned long v10;  // rbp
    unsigned long long v11;  // r15
    unsigned long long v12;  // r15
    unsigned long long v13;  // rax
    unsigned long v14;  // r15
    unsigned long long v15;  // rax

    v2.get_list(a1.get_wait_handles());
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
    v7 = a1.jobs();
    if (v7->field_10)
    {
        v8 = v7->field_8;
        v1 = &v7->field_8[v7->field_10];
        do
        {
            if ((char)fish::builtins::wait::can_wait_on_job(&*(v8)->padding_0[16]))
            {
                v9 = *(v8);
                if (v9[6])
                {
                    v10 = v9[5];
                    v11 = v9[6] * 224;
                    do
                    {
                        v12 = v11;
                        v13 = v10.make_wait_handle(v9[8]);
                        if (v13)
                            v2.push(v13, &g_14d54e8);
                        v10 += 224;
                        v14 = v12 - 224;
                        v11 = v14;
                    } while (v12 != 224);
                }
            }
            v8 += 1;
        } while (v8 != v1);
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
    v15 = *((long long *)&v3);
    v0->field_10 = v15;
    *((void*)&v0->field_0) = v2;
    return v15;
}
