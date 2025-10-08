long long uu_runcon::os_str_to_c_string(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx

    v0.spec_new_impl(a1, a2);
    v4 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v5 = 17;
        v6 = *((long long *)&v2);
    }
    else
    {
        core::ptr::drop_in_place<alloc::string::String>(v0, v1);
        a0->field_18 = 85899345923;
        v5 = 15;
        v6 = 14;
        v4 = "CString::new() failed failed on No command is specifiedruncon may be used only on a SELinux kernelMissingCommandSELinuxNotEnabledCommandLineSELinuxIo1RunconErrorinner";
    }
    a0->field_8 = v4;
    a0->field_10 = v6;
    a0->field_0 = v5;
    return v5;
}
