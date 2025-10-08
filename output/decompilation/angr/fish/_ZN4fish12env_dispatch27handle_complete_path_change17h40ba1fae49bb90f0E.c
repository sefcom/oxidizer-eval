void fish::env_dispatch::handle_complete_path_change()
{
    fish::complete::complete_invalidate_path();
    return;
}
