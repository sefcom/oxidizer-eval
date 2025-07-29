double uu_mv::hardlink::HardlinkTracker::new(long long a0)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v0.try_with();
    v2 = v0.expect();
    a0->field_10 = g_5d9f58;
    a0->field_0 = g_5d9f48;
    a0->field_20 = v2;
    a0->field_28 = v3;
    return (unsigned long long)g_5d9f48;
}
