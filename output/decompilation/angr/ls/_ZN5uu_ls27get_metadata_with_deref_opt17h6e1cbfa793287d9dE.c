long long uu_ls::get_metadata_with_deref_opt(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    if (a3)
        std::fs::metadata(a0, a1, a2);
    else
        std::fs::symlink_metadata(a0, a1, a2);
    return a0;
}
