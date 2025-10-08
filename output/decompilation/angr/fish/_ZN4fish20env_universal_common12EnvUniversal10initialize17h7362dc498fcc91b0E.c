long long fish::env_universal_common::EnvUniversal::initialize(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]

    fish::env_universal_common::default_vars_path(&v0);
    a0.initialize_at_path(a1, &v0);
    return a0;
}
