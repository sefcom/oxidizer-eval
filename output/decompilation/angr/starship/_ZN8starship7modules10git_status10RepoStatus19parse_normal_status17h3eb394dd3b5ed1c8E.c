long long starship::modules::git_status::RepoStatus::parse_normal_status(unsigned long long a0[13], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v1;  // rax

    if (a1.is_deleted(a2))
        a0[8] = a0[8] + 1;
    if ((char)a1.is_modified(a2))
        a0[10] = a0[10] + 1;
    if ((char)a1.is_staged(a2))
        a0[11] = a0[11] + 1;
    v1 = a1.is_typechanged(a2);
    if (!(char)v1)
        return v1;
    a0[12] = a0[12] + 1;
    return v1;
}
