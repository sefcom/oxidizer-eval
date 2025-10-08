long long starship_battery::platform::linux::sysfs::source::DataBuilder::manufacturer(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]

    v0.join(a1, a2, "manufacturermodel_nameMainsUpsUsbDeviceSystem", 12);
    return starship_battery::platform::linux::sysfs::fs::get_string(a0, &v0);
}
