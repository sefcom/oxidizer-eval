fn starship::modules::aws::get_profile_creds(a0: u64, a1: u64) -> long long {
    if a1 {
        return ini::Ini::section(a0, a1);
    }
    return ini::Ini::section(a0, "default");
}
