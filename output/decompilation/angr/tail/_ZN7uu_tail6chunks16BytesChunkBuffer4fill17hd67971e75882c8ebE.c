long long uu_tail::chunks::BytesChunkBuffer::fill(unsigned long long a0[6], unsigned long long a1)
{
    void* v0;  // [bp-0x4030]
    void* v1;  // [bp-0x3030]
    void* v2;  // [bp-0x2038]
    void* v3;  // [bp-0x2030]
    void* v4;  // [bp-0x1030]
    struct_0 *v6;  // rbx
    struct_0 **v7;  // rax
    struct_0 *v8;  // rax
    void* v9;  // r14
    void* v10;  // r15

    v4 = 0;
    v3 = 0;
    v1 = 0;
    v0 = 0;
    memset(&v3, 0, 0x2000);
    memset(&vvar_56{reg 16}, 0, 8200);
    v6 = vvar_56{reg 16}.new();
    while (true)
    {
        vvar_56{reg 16}.fill(v6, a1);
        if (((char)vvar_56{reg 16} & 1))
        {
            v9 = v0;
            break;
        }
        else if (v0)
        {
            a0[5] = a0[5] + v6->field_2000;
            a0.push_back(v6, &g_637790);
            v7 = a0.get();
            if (!v7)
            {
                core::option::expect_failed("Out of bounds access/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 20, &g_6377a8); /* do not return */
            }
            else if (a0[5] - *(v7)->field_2000 <= a0[4])
            {
                memcpy(&vvar_56{reg 16}, &v3, 0x2000);
                v2 = 0;
                v6 = vvar_56{reg 16}.new();
            }
            else
            {
                v8 = a0.pop_front();
                if (!v8)
                    core::option::unwrap_failed(&g_6377c0); /* do not return */
                v6 = v8;
                a0[5] = a0[5] - v8->field_2000;
            }
        }
        else
        {
            if (a0[3])
            {
                v10 = a0.pop_front();
                if (!v10)
                    core::option::unwrap_failed(&g_6377d8); /* do not return */
                vvar_56{reg 16}.from_chunk(v10, (a0[4] <= a0[5] ? a0[5] - a0[4] : 0));
                a0.push_front(vvar_56{reg 16}.new(), &g_6377f0);
                ::0x50a0d0::core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v10);
            }
            v9 = 0;
            break;
        }
    }
    ::0x50a0d0::core::ptr::drop_in_place<alloc::boxed::Box<uu_tail::chunks::BytesChunk>>(v6);
    return v9;
}
