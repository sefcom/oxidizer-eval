long long fish::env_dispatch::handle_term_size_change(unsigned long long a0)
{
    return fish::termsize::handle_columns_lines_var_change(a0, &g_14c7518);
}
