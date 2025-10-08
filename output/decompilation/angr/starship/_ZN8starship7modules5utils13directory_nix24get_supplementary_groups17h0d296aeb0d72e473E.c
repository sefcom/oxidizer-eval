void starship::modules::utils::directory_nix::get_supplementary_groups(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x30]

    nix::unistd::getgroups(&v0);
    v1.unwrap_or_default(&v0);
    v0.into_iter(&v1);
    a0.collect(&v0);
    return;
}
