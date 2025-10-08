void fish::env_dispatch::handle_fish_trace(unsigned long long a0)
{
    char v0;  // [bp-0x28]

    v0.getf_unless_empty(a0, "f", 10, 0);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
    fish::trace::trace_set_enabled(*((long long *)&v0));
    return;
}
