long long starship_battery::platform::linux::sysfs::source::DataBuilder::energy_rate(unsigned long long a0, unsigned long long a1)
{
    return a0.try_borrow_with(a1 + 48, a1);
}
