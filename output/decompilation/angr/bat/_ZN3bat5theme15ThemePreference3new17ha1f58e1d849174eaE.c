long long bat::theme::ThemePreference::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long long v5;  // r15
    char v6;  // cl

    v0.call_once(a1, a2);
    v5 = *((long long *)&v2);
    if (!(char)v1.equal(v5, "auto.inf", 4))
    {
        v6 = 1;
        if (!(char)v1.equal(v5, "auto:alwaysauto:systemlightMonokai Extended LightTheme 'auto:system' is only supported on macOS, using default.src/vscreen.rs", 11))
        {
            v6 = 2;
            if (!(char)v1.equal(v5, "auto:systemlightMonokai Extended LightTheme 'auto:system' is only supported on macOS, using default.src/vscreen.rs", 11))
            {
                if ((char)v1.equal(v5, "darkdash", 4))
                {
                    a0->field_0 = 9223372036854775811;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
                }
                else if ((char)v1.equal(v5, "lightMonokai Extended LightTheme 'auto:system' is only supported on macOS, using default.src/vscreen.rs", 5))
                {
                    a0->field_0 = 9223372036854775812;
                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
                }
                else
                {
                    return a0.new(&v0);
                }
            }
        }
    }
    a0->field_8 = v6;
    a0->field_0 = 9223372036854775809;
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
