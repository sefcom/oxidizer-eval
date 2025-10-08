char fd::walk::ReceiverBuffer<W>::print(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x68]
    char *v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char *v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    void* v7;  // [bp-0x30]
    char v8;  // [bp-0x20]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    v10 = fd::output::print_entry(&a0->padding_0[16], a1, a0->field_60);
    if (v10)
    {
        v0 = v10;
        if ((char)v10.kind() != 11)
        {
            v1 = &v0;
            v2 = <std::io::error::Error as core::fmt::Display>::fmt;
            v3 = &g_802618;
            v4 = 1;
            v7 = 0;
            v5 = &v1;
            v6 = 1;
            v8.map_or_else(0, v11, &v3);
            fd::error::print_error(&v8);
            core::ptr::drop_in_place<std::io::error::Error>(&v0);
            return 4;
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    if (!(char)core::sync::atomic::atomic_load(a0->field_70, 0))
        return 6;
    a0.flush();
    return 5;
}
