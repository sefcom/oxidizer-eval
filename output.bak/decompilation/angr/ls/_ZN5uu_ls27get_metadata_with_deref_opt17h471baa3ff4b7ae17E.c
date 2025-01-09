long long uu_ls::get_metadata_with_deref_opt::h471baa3ff4b7ae17(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    if (!a3)
    {
        std::fs::symlink_metadata::haff3ff196e1dc22b(a0, a1, a2);
        return a0;
    }
    std::fs::metadata::h459aac21f85cb4df(a0, a1, a2);
    return a0;
}
