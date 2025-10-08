char fd::exec::command::execute_commands(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x2f4]
    unsigned long long v1;  // [bp-0x2f0]
    unsigned long long v2[4];  // [bp-0x2e8]
    unsigned long long v3;  // [bp-0x2e0]
    void* v4;  // [bp-0x2d8]
    unsigned long long v5;  // [bp-0x2d0]
    unsigned long long v6;  // [bp-0x2c8]
    unsigned int v7;  // [bp-0x2c4]
    unsigned long long v8;  // [bp-0x2c0]
    unsigned long long v9;  // [bp-0x2b8]
    unsigned long long v10;  // [bp-0x2a8]
    unsigned long long v11;  // [bp-0x2a0]
    unsigned long long v12;  // [bp-0x298]
    unsigned long long v13;  // [bp-0x290]
    unsigned long long v14;  // [bp-0x288]
    unsigned long long v15;  // [bp-0x280]
    unsigned long long v16;  // [bp-0x278]
    unsigned long long v17;  // [bp-0x270]
    unsigned long long v18;  // [bp-0x268]
    unsigned long long v19;  // [bp-0x260]
    int v20;  // [bp-0x258]
    int v21;  // [bp-0x248]
    unsigned long v22;  // [bp-0x238]
    int v23;  // [bp-0x228]
    char v24;  // [bp-0x21c]
    unsigned long long v25;  // [bp-0x200]
    unsigned long long v26;  // [bp-0x1f8]
    int v27;  // [bp-0x1f0]
    unsigned long long v28;  // [bp-0x118]
    unsigned long long v29;  // [bp-0x110]
    char v30;  // [bp-0x108]
    unsigned long long v32;  // rsi
    unsigned long long v33;  // r12
    unsigned long long v34;  // r14
    unsigned long long v35;  // r13
    unsigned long long v36;  // r15
    unsigned int v37;  // ebx
    unsigned long long v38;  // rdx

    v5 = a1;
    *(v2) = 0;
    v3 = 8;
    v4 = 0;
    v22 = a0->field_20;
    *((uint128_t *)&v21) = a0->field_10;
    *((uint128_t *)&v20) = a0->field_0;
    v0 = a2;
    if ((unsigned int)a2)
    {
        v1 = 9223372036854775809;
        while (true)
        {
            v28.next(&v20);
            if (v28 == 9223372036854775809)
            {
                v2.write();
                return 2;
            }
            v32 = v29;
            if (v28 == 0x8000000000000000)
            {
                fd::exec::command::handle_cmd_error(0, v32, v38);
                core::ptr::drop_in_place<fd::exec::command::OutputBuffer>(&v2);
                return 4;
            }
            v25 = v28;
            v26 = v32;
            ::libc.so.0::memcpy(&v27, &v30, 216);
            v10.output(&v25);
            v33 = v10;
            if (v33 == 0x8000000000000000)
                break;
            v34 = v11;
            v35 = v13;
            v36 = v14;
            v37 = v16;
            v17 = v33;
            v18 = v34;
            v19 = v12;
            v6 = v13;
            v8 = v36;
            v9 = v15;
            v2.push(&v17, &(char)v6);
            if ((v37 & 65407))
                goto LABEL_5f25dc;
            core::ptr::drop_in_place<argmax::Command>(&v25);
        }
LABEL_5f25dc:
        v2.write();
        if (!(char)v0)
        {
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v33, v34);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v35, v36);
        }
    }
    else
    {
        v1 = 9223372036854775809;
        while (true)
        {
            v28.next(&v20);
            if (v28 == 9223372036854775809)
            {
                v2.write();
                return 2;
            }
            v32 = v29;
            if (v28 == 0x8000000000000000)
            {
                fd::exec::command::handle_cmd_error(0, v32, v38);
                core::ptr::drop_in_place<fd::exec::command::OutputBuffer>(&v2);
                return 4;
            }
            v25 = v28;
            v26 = v32;
            ::libc.so.0::memcpy(&v27, &v30, 216);
            (char)v6.spawn(&v25);
            if ((int)v6 == 1)
                break;
            memcpy(&v24, &v9, 16);
            *((int128_t *)&v23) = *((int128_t *)&v7);
            v10.wait_with_output(&(char)v23);
            v33 = v10;
            if (v10 == 0x8000000000000000)
                goto LABEL_5f260f;
            v34 = v11;
            v35 = v13;
            v36 = v14;
            if (((short)v16 & 65407))
                goto LABEL_5f25dc;
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v10, v11);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v13, v14);
            core::ptr::drop_in_place<argmax::Command>(&v25);
        }
        v11 = v8;
LABEL_5f260f:
        v6 = v11;
        v2.write();
        fd::exec::command::handle_cmd_error(&v25, v11, a2);
    }
    core::ptr::drop_in_place<argmax::Command>(&v25);
    return 4;
}
