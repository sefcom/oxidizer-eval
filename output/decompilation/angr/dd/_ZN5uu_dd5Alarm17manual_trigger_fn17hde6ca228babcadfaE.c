long long uu_dd::Alarm::manual_trigger_fn(unsigned long long *a0)
{
    *(a0).downgrade();
    return *(a0).new();
}
