long long starship_battery::platform::linux::sysfs::source::DataBuilder::state_of_charge(unsigned long long a0, unsigned long long a1)
{
    return a0.try_borrow_with(a1 + 64, a1);
}
