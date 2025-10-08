long long starship::modules::rust::RustToolingEnvironmentInfo::get_rustup_settings(unsigned long long a0, unsigned long long a1)
{
    return a0.get_or_try_init(a1);
}
