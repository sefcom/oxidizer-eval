long long uu_chcon::os_str_to_c_string(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rsi
    unsigned int v5;  // eax
    unsigned long long v6;  // rcx

    v0.spec_new_impl(a1, a2);
    v4 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        v5 = 18;
        v6 = *((long long *)&v2);
    }
    else
    {
        core::ptr::drop_in_place<alloc::ffi::c_str::NulError>(v0, v1);
        a0->field_18 = 85899345923;
        v5 = 16;
        v6 = 14;
        v4 = "CString::new()/std::fs::symlink_metadata: warning: It is dangerous to operate recursively on '/'. Use -- to override this failsafe.\nIt is dangerous to operate recursively on  (same as '/'). Use --Circular directory structure.\nThis almost certainly means th";
    }
    a0->field_8 = v4;
    a0->field_10 = v6;
    a0->field_0 = v5;
    return a0;
}
