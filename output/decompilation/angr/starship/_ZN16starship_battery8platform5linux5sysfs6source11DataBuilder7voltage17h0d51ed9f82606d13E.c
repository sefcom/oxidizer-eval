long long starship_battery::platform::linux::sysfs::source::DataBuilder::voltage(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned int v5;  // ymm0

    v0 = &g_11f9fe0;
    v1 = &g_11fa000;
    v2 = a1;
    v3 = a2;
    if (!((char)v0.find_map(&v2) & 1))
        return a0.not_found("Unable to calculate device voltage valuemanufacturermodel_nameMainsUpsUsbDeviceSystem", 40);
    a0->field_8 = v5;
    a0->field_0 = 9223372036854775810;
    return 9223372036854775810;
}
