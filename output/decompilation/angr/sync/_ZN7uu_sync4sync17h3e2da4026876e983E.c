long long uu_sync::sync()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    uu_sync::platform::do_sync();
    return 0;
}
