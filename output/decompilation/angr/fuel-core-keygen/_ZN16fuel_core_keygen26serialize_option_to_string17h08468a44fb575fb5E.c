void fuel_core_keygen::serialize_option_to_string(unsigned long long a0, unsigned int *a1)
{
    char v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    if (*(a1) == 1)
    {
        v0.to_string(a1 + 2);
        a0.serialize_str(v1, *((long long *)&v2));
        core::ptr::drop_in_place<alloc::string::String>(&v0);
    }
    else
    {
        a0.serialize_none();
    }
    return;
}
