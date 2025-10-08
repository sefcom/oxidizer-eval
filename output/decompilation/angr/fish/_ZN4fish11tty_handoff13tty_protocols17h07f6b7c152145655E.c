long long fish::tty_handoff::tty_protocols()
{
    return core::sync::atomic::atomic_load();
}
