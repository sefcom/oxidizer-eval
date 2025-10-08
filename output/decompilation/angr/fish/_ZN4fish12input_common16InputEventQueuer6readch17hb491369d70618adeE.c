long long fish::input_common::InputEventQueuer::readch(unsigned long a0, void* a1)
{
    uint128_t v0[3];  // [bp-0x1e0]
    unsigned long long v1;  // [bp-0x1a0]
    unsigned long long v2;  // [bp-0x120]
    unsigned long long v3[2];  // [bp-0xf8]
    int v4;  // [bp-0xe8]
    char v5;  // [bp-0xd8]
    unsigned int v7;  // eax
    unsigned int v8;  // edx
    struct_0 *v9;  // rax
    unsigned int v10;  // esi

    v3.try_pop(*((long long *)a1));
    if (v3[0] == 9223372036854775812)
    {
        v2 = &g_15a99b0;
        v1 = 9223372036854775812;
        core::ptr::drop_in_place<core::option::Option<fish::input_common::CharEvent>>(&v3);
        a1.prepare_to_select();
        v3.try_pop(*((long long *)a1));
        if (v3[0] == 9223372036854775812)
        {
            core::ptr::drop_in_place<core::option::Option<fish::input_common::CharEvent>>(&v3);
            v7 = *((long long *)a1).get_in_fd();
            v8 = 0x3b9aca00;
            if ((char)*((long long *)a1).is_blocked_querying())
            {
                v9 = *((long long *)a1).get_input_data();
                v8 = v9->field_70;
                if (v9->field_70 == 0x3b9aca00)
                    core::option::unwrap_failed(&g_14db068); /* do not return */
                v10 = v9->field_68;
            }
            goto (long long)(g_9f4204[(int)fish::input_common::next_input_event(v7, v10, v8)] + (char *)&g_9f4204[0]);
        }
    }
    v0[2] = *((int128_t *)&v5);
    *((void*)&v0[1]) = v4;
    *((unsigned long long [2])&v0[0]) = v3;
    return v0;
}
