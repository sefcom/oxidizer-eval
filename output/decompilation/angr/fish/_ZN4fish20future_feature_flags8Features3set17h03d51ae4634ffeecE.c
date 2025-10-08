void fish::future_feature_flags::Features::set(unsigned long a0, char a1, unsigned int a2)
{
    core::sync::atomic::atomic_store(a0 + a1, a2, 4);
    return;
}
