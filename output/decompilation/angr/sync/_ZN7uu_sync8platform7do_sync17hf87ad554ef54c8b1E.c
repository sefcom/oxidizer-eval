void uu_sync::platform::do_sync()
{
    nix::unistd::sync();
    return;
}
