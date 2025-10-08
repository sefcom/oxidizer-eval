long long fish::input::input_get_bind_mode(unsigned long long a0, unsigned long a1, struct_1 *a2)
{
    char v0;  // [bp-0x20]

    a2->field_18(&v0);
    if (*((long long *)&v0))
    {
        a0.as_string(&v0);
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&v0);
    }
    else
    {
        a0.to_vec("d", 7);
    }
    return a0;
}
