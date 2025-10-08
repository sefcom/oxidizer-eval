long long fish::env_dispatch::handle_function_path_change()
{
    return fish::function::invalidate_path();
}
