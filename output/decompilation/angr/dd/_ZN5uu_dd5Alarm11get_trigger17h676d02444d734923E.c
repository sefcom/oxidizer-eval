long long uu_dd::Alarm::get_trigger(unsigned long long *a0)
{
    return (char)atomic_exchange(*(a0) + 16, 0);
}
