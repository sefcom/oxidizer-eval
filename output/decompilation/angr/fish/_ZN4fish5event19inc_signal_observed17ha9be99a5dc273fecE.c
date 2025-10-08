long long fish::event::inc_signal_observed(unsigned long long a0)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rax

    v1 = a0.from();
    if (v1 > 63)
        return v2;
    atomic_fetch_add(&(&_ZN4fish5event16OBSERVED_SIGNALS17h83e95fa223d442c9E)[4 * v1]);
    return v2;
}
