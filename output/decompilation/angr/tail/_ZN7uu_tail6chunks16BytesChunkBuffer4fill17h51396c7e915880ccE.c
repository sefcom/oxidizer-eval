long long uu_tail::chunks::BytesChunkBuffer::fill(unsigned long long a0[6], unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x4038]
    void* v1;  // [bp-0x4030]
    void* v2;  // [bp-0x3030]
    void* v3;  // [bp-0x2038]
    void* v4;  // [bp-0x2030]
    void* v5;  // [bp-0x1030]
    unsigned long long v7;  // rax
    struct_1 *v8;  // rbx
    struct_0 **v9;  // rax
    struct_1 *v10;  // rax
    void* v11;  // r14
    void* v12;  // rax
    void* v13;  // r15

    v5 = 0;
    v4 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v7;
    memset(&v4, 0, 0x2000);
    memset(&v0, 0, 8200);
    v8 = v0.new();
    while (true)
    {
        v0.fill(v8, a1);
        if ((int)v0 == 1)
        {
            v11 = v1;
            break;
        }
        else if (v1)
        {
            a0[5] = a0[5] + v8->field_2000;
            a0.push_back(v8);
            v9 = a0.get();
            if (!v9)
            {
                core::option::expect_failed("Out of bounds accesssrc/uu/tail/src/follow/files.rs", 20, &g_5732d0); /* do not return */
            }
            else if (a0[5] - *(v9)->field_2000 <= a0[4])
            {
                memcpy(&v0, &v4, 0x2000);
                v3 = 0;
                v8 = v0.new();
            }
            else
            {
                v10 = a0.pop_front();
                if (!v10)
                    core::option::unwrap_failed(&g_5732e8); /* do not return */
                v8 = v10;
                a0[5] = a0[5] - v10->field_2000;
            }
        }
        else
        {
            if (a0[3])
            {
                v12 = a0.pop_front();
                if (!v12)
                    core::option::unwrap_failed(&g_573300); /* do not return */
                v13 = v12;
                v0.from_chunk(v13, (a0[4] <= a0[5] ? a0[5] - a0[4] : 0));
                a0.push_front(v0.new());
                core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v13);
            }
            v11 = 0;
            break;
        }
    }
    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v8);
    return v11;
}
