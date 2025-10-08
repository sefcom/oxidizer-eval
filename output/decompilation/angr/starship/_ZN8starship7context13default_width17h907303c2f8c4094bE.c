long long starship::context::default_width()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return terminal_size::unix::terminal_size().map_or();
}
