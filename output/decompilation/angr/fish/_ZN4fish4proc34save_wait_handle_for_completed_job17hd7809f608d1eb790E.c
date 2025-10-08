long long fish::proc::save_wait_handle_for_completed_job(struct_1 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    uint128_t v4;  // [bp-0x48]
    struct_0 *v6;  // r15
    unsigned long long v7;  // r12
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax
    unsigned long v10;  // r12
    unsigned long long v11;  // rax
    struct_0 *v12;  // rbx
    unsigned long long v13;  // r13
    unsigned long long v14;  // r13
    unsigned long long v15;  // rax
    unsigned long v17;  // r13

    if (!a0.is_completed())
    {
        v1 = &g_14df908;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_14df918); /* do not return */
    }
    if (!a0.is_foreground() && a0->field_20)
    {
        v6 = a0->field_18;
        v7 = a0->field_20 * 224;
        do
        {
            v8 = v7;
            v9 = v6.make_wait_handle(a0->field_30);
            if (v9)
                a1.add(v9);
            v6 = &v6[1].padding_0[48];
            v10 = v8 - 224;
            v7 = v10;
        } while (v8 != 224);
    }
    v11 = a0->field_20;
    if (!v11)
        return v11;
    v12 = a0->field_18;
    v13 = v11 * 224;
    do
    {
        v14 = v13;
        v15 = v12.get_wait_handle();
        if (v15)
        {
            v0 = v15;
            v1 = v12->field_a8;
            v15 + 16.set_status_and_complete((unsigned int)v1.status_value());
            v15 = core::ptr::drop_in_place<alloc::rc::Rc<fish::wait_handle::WaitHandle>>(&v0);
        }
        v12 = &v12[1].padding_0[48];
        v17 = v14 - 224;
        v13 = v17;
    } while (v14 != 224);
    return v15;
}
