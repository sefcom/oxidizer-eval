void uu_timeout::unblock_sigchld(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long long a3)
{
    char v0;  // [bp-0x18]

    nix::sys::signal::signal(&v0, 17, 0, a3);
    v0.unwrap();
    return;
}
