long long fish::history::in_private_mode(unsigned long long a0, struct_1 *a1)
{
    char v0;  // [bp-0x28]

    a1->field_38(&v0, a0, "f", 17);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
    return vvar_4{reg 56} & 0xffffff00 | *((long long *)&v0);
}
