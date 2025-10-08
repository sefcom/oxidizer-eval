void fish::global_safety::RelaxedAtomicBool::store(unsigned long long a0, unsigned long long a1)
{
    core::sync::atomic::atomic_store(a0, a1, 0);
    return;
}
