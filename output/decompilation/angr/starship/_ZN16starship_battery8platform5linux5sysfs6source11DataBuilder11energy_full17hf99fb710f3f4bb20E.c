long long starship_battery::platform::linux::sysfs::source::DataBuilder::energy_full(unsigned long long a0, unsigned long long a1)
{
    return a0.try_borrow_with(a1 + 32, a1);
}
