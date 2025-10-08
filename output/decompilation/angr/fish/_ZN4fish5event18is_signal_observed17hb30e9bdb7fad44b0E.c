long long fish::event::is_signal_observed(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (a0 < 0)
    {
        1.unwrap(&g_14d76a8);
        return 0;
    }
    0.unwrap(&g_14d76a8);
    if (a0 > 63)
        return 0;
    return (int)core::sync::atomic::atomic_load(&(&_ZN4fish5event16OBSERVED_SIGNALS17h83e95fa223d442c9E)[4 * a0], 0);
}
