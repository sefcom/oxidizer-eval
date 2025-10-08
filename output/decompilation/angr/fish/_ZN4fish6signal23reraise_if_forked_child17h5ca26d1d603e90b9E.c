char fish::signal::reraise_if_forked_child(unsigned int a0)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    v1 = fish::nix::getpid();
    v2 = core::sync::atomic::atomic_load(&_ZN4fish6signal8MAIN_PID17h85b18cfc02663442E);
    if (v1 != v2)
    {
        signal(a0, NULL);
        raise(a0);
    }
    return v1 != v2;
}
