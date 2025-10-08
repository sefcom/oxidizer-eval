long long fish::exec::create_output_stream_for_builtin(unsigned long long *a0, unsigned int a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x40]
    struct_1 *v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    struct_1 *v3;  // [bp-0x28]
    struct_1 *v5;  // rdx
    unsigned long long v6;  // rax

    v2 = a2.io_for_fd(a1);
    v3 = v5;
    if (!v2)
    {
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<dyn fish::io::IoData>>>(&v2);
        v6 = a0 + 1.new(a1);
        *(a0) = 1;
        return v6;
    }
    v0 = v2;
    v1 = v5;
    goto (long long)(g_9f3d8c[v5->field_18(v2 + (v5->field_10 - 1 & 0xfffffffffffffff0) + 16)] + (char *)&g_9f3d8c[0]);
}
