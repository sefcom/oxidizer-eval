long long fish::env::environment::misc_init()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    if (fish::nix::isatty(1))
    {
        v1 = std::io::stdio::stdout();
        v0 = v1.flush();
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
        setvbuf(stdout_stream(), NULL, 2, 0);
    }
    return core::sync::atomic::atomic_store(C_PATH_BSHELL());
}
