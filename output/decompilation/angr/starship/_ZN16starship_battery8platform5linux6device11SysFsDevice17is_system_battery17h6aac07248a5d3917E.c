long long starship_battery::platform::linux::device::SysFsDevice::is_system_battery(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x57]
    unsigned long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long v8;  // rax

    v6 = a1.as_ref();
    v4.join(v6, v7, "typeQUITALRMCHLDSizedashV4_1avstcaricham\nfi\ndeno", 4);
    starship_battery::platform::linux::sysfs::fs::type_(&v0, &v4);
    v8 = v1;
    if (v0 != 9223372036854775810)
    {
        *((unsigned long *)&a0->field_9[15]) = v3;
        *((int128_t *)&a0->field_9[0]) = *((int128_t *)&v2);
        a0->field_0 = v0;
        a0->field_8 = v8;
        return v8;
    }
    if ((char)v8)
    {
LABEL_c6e2c5:
        a0->field_8 = 0;
    }
    else
    {
        v4.join(v6, v7, "scopeLinuxDevice", 5);
        starship_battery::platform::linux::sysfs::fs::scope(&v0, &v4);
        v8 = v1;
        if (v0 != 9223372036854775810)
        {
            *((unsigned long *)&a0->field_9[15]) = v3;
            *((int128_t *)&a0->field_9[0]) = *((int128_t *)&v2);
            a0->field_0 = v0;
            a0->field_8 = v8;
            return v8;
        }
        if ((char)v8 != 1)
            goto LABEL_c6e2c5;
        a0->field_8 = 1;
    }
    a0->field_0 = 9223372036854775810;
    return v8;
}
