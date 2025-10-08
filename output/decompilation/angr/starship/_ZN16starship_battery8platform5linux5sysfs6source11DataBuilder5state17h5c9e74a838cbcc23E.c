long long starship_battery::platform::linux::sysfs::source::DataBuilder::state(unsigned long long a0, unsigned long long a1[2])
{
    return a0.try_borrow_with(&a1[4 + 1], a1[0], a1[1]);
}
