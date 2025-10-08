long long starship::modules::git_status::GitStatusInfo::get_repo_status(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rax

    v0 = v2;
    v3 = a0.get_or_try_init(a0);
    if (*(v3))
        return *(v3) + 16;
    return 0;
}
