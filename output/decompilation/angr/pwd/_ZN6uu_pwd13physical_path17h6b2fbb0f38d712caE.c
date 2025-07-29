long long uu_pwd::physical_path(unsigned long long a0)
{
    std::env::current_dir(a0);
    return a0;
}
