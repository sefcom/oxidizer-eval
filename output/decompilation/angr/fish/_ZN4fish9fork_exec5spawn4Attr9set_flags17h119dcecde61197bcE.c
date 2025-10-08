long long fish::fork_exec::spawn::Attr::set_flags(unsigned long a0, unsigned short a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return posix_spawnattr_setflags();
}
