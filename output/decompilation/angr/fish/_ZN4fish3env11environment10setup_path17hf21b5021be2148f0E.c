long long fish::env::environment::setup_path()
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x20]
    void* v3;  // rax
    unsigned long long v4[2];  // rax

    v3 = fish::env::environment::EnvStack::globals();
    v0.getf_unless_empty(v3, "P", 4, 0);
    if (!*((long long *)&v0))
    {
        v4 = once_cell::sync::OnceCell<T>::get_or_try_init();
        v1.to_vec(v4[0], v4[1]);
        v3.set("P", 4, 20, &v1);
    }
    return core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
}
