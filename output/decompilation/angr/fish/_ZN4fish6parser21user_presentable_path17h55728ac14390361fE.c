long long fish::parser::user_presentable_path(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    return fish::expand::replace_home_directory_with_tilde(a0, a1, a2, a3, &g_14c7518);
}
