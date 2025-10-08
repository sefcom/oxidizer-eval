void fish::event::PendingSignals::mark(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx

    if (a0 < 0)
    {
        1.unwrap(&g_14d7660);
        return;
    }
    v0 = v2;
    0.unwrap(&g_14d7660);
    if (a0 > 63)
        return;
    core::sync::atomic::atomic_store(&(&_ZN4fish5event15PENDING_SIGNALS17h4995e538f545ebfbE)[a0], 1, 0);
    atomic_fetch_add(&g_15aa74c);
    return;
}
