long long starship::context::get_current_branch(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    char v1;  // [bp-0x58], Other Possible Types: unsigned long
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rax
    unsigned long long v7;  // r14

    v5 = 0x8000000000000000;
    v1.head_name(a1);
    if (v1 == 9223372036854775814)
    {
        v6 = *((long long *)&v2);
        memcpy(&v0, &v3, 16);
        v7 = v5;
        if (v6 != 9223372036854775809)
        {
            *((void*)&(&a0->field_0)[1]) = v0;
            v7 = v6;
        }
    }
    else
    {
        v6 = (unsigned long long)core::ptr::drop_in_place<core::result::Result<core::option::Option<gix_ref::FullName>,gix::reference::errors::find::existing::Error>>(&v1);
        v7 = v5;
    }
    a0->field_0 = v7;
    return v6;
}
