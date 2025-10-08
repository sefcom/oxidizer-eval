long long fish::topic_monitor::TopicMonitor::post(void* a0, char a1)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    uint128_t v3;  // [bp-0x38]
    char v5;  // bpl
    unsigned long v6;  // r15
    unsigned long long v7;  // rax
    unsigned long long v8;  // r14

    v5 = fish::topic_monitor::topic_to_bit(a1);
    v6 = a0 + 60;
    do
    {
        v8 = (unsigned long long)core::sync::atomic::atomic_load(v6, 0) & 4294967295;
    } while (((char)core::sync::atomic::atomic_compare_exchange_weak(v6, v8 & 4294967295, (char)v7 & 127 | v5) & 1));
    if ((v8 & 255) >= 129)
    {
        v0 = &g_14e4000;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e4010); /* do not return */
    }
    else if ((v5 & (char)v8) || (char)(v8 - 128))
    {
        return v8 - 128 & 4294967295;
    }
    else
    {
        return a0.post();
    }
}
