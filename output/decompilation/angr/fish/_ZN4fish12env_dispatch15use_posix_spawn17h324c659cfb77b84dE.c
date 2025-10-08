char fish::env_dispatch::use_posix_spawn()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)core::sync::atomic::atomic_load(&_ZN4fish12env_dispatch15USE_POSIX_SPAWN17h8ce3e54ffcba1379E, 0);
}
