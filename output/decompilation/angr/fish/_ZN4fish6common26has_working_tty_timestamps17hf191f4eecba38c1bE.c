char fish::common::has_working_tty_timestamps()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)fish::common::is_windows_subsystem_for_linux(1) ^ 1;
}
