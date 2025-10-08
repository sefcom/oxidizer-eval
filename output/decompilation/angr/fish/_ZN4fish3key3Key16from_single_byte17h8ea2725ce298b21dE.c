long long fish::key::Key::from_single_byte(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = fish::key::canonicalize_control_char(a0);
    if ((unsigned int)v3 != 0x110000)
        return v3;
    return a0;
}
