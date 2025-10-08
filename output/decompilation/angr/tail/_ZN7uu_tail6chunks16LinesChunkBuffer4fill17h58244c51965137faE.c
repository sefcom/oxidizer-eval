long long uu_tail::chunks::LinesChunkBuffer::fill(struct_3 *a0, unsigned long long a1)
{
    char v0;  // [sp-0x6060]
    char v1;  // [bp-0x6060]
    int v2;  // [bp-0x6058]
    void* v3;  // [bp-0x6030]
    void* v4;  // [bp-0x5030]
    uint128_t v5;  // [bp-0x4060]
    char v6;  // [bp-0x4050]
    char v7;  // [bp-0x4048]
    void* v8;  // [bp-0x4030]
    void* v9;  // [bp-0x3030]
    void* v10;  // [bp-0x2030]
    void* v11;  // [bp-0x1030]
    struct_4 *v13;  // rbx
    struct_0 **v14;  // rax
    struct_4 *v15;  // rax
    unsigned long long v16;  // r14
    struct_2 **v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    struct_1 *v20;  // rax
    unsigned long v21;  // rdx

    v11 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v4 = 0;
    v3 = 0;
    memset(&v10, 0, 0x2000);
    memset(&v0, 0, 8208);
    v6 = a0->field_30;
    v13 = v0.new();
    while (true)
    {
        v0.fill(v13, a1);
        if (*((int *)&v1) == 1)
        {
            v16 = (long long)v2;
            break;
        }
        else if ((long long)v2)
        {
            a0->field_20 = a0->field_20 + v13->field_2008;
            a0.push_back(v13);
            v14 = a0.get();
            if (!v14)
            {
                core::option::expect_failed("Out of bounds accesssrc/uu/tail/src/follow/files.rs", 20, &g_573348); /* do not return */
            }
            else if (a0->field_20 - *(v14)->field_2008 <= a0->field_28)
            {
                memcpy(&v0, &v10, 0x2000);
                v5 = 0;
                v6 = a0->field_30;
                v13 = v0.new();
            }
            else
            {
                v15 = a0.pop_front();
                if (!v15)
                    core::option::unwrap_failed(&g_573360); /* do not return */
                v13 = v15;
                a0->field_20 = a0->field_20 - v15->field_2008;
            }
        }
        else
        {
            if (a0->field_18)
            {
                v17 = a0.get_mut(a0->field_18 - 1);
                if (!v17)
                    core::option::expect_failed("Out of bounds accesssrc/uu/tail/src/follow/files.rs", 20, &g_573378); /* do not return */
                v18 = *(v17).get_buffer();
                v0 = a0->field_30;
                if (!(char)core::slice::<impl [T]>::ends_with(v18, v19, &v0))
                {
                    *(v17)->field_2008 = *(v17)->field_2008 + 1;
                    a0->field_20 = a0->field_20 + 1;
                }
                while (true)
                {
                    v20 = a0.pop_front();
                    if (!v20)
                        core::option::unwrap_failed(&g_573390); /* do not return */
                    v21 = a0->field_20 - v20->field_2008;
                    if (v21 <= a0->field_28)
                        break;
                    a0->field_20 = v21;
                    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v20);
                }
                v7.from_chunk(v20, (a0->field_28 <= a0->field_20 ? a0->field_20 - a0->field_28 : 0));
                a0.push_front(v7.new());
                core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v20);
            }
            v16 = 0;
            break;
        }
    }
    core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::LinesChunk>>(v13);
    return v16;
}
