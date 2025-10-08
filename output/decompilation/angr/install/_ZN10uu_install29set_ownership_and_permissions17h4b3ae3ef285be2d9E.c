long long uu_install::set_ownership_and_permissions(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    unsigned long long v3;  // rdx

    v3 = 493;
    if (a2->field_48)
        v3 = a2->field_4c;
    if (!uu_install::mode::chmod(a0, a1, v3))
        return uu_install::chown_optional_user_group(a0, a1, a2);
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v1, a0, a1);
    v0 = 3;
    return v0.new();
}
