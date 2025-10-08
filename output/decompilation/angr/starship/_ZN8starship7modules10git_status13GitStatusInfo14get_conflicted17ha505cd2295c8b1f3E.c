long long starship::modules::git_status::GitStatusInfo::get_conflicted(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    if (!a0.get_repo_status())
        return 0;
    return 1;
}
