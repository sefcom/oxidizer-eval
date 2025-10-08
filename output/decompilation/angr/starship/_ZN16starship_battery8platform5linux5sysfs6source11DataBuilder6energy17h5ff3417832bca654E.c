long long starship_battery::platform::linux::sysfs::source::DataBuilder::energy(unsigned long long a0, unsigned long long a1)
{
    return a0.try_borrow_with(a1 + 24, a1);
}
