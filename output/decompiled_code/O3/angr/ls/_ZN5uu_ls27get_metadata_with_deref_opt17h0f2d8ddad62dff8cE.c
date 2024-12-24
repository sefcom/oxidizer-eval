long long uu_ls::get_metadata_with_deref_opt::h0f2d8ddad62dff8c(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    if (!a3)
    {
        std::fs::symlink_metadata::h7200cb6a2092cc2c(a0, a1, a2);
        return a0;
    }
    std::fs::metadata::hd4f38c47306d1d10(a0, a1, a2);
    return a0;
}
