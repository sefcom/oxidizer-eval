int fish::signal::signal_unblock_all()
{
    unsigned int v0[32];  // [bp-0x88]

    sigemptyset(&v0);
    return sigprocmask(2, &v0, NULL);
}
