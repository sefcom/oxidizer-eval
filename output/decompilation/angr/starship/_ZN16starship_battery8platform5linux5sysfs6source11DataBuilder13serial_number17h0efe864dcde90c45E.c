long long starship_battery::platform::linux::sysfs::source::DataBuilder::serial_number(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]

    v0.join(a1, a2, "serial_numbertechnologystatetemperaturepercentagecycle_countenergyenergy_fullenergy_full_designenergy_ratevoltagetime_to_fulltime_to_emptyUnknownEmptyDischargingli-ionpblipli-polyramLithiumIonLithiumPolymerNickelMetalHydrideNickelCadmiumNickelZincLithiumIr", 13);
    return starship_battery::platform::linux::sysfs::fs::get_string(a0, &v0);
}
