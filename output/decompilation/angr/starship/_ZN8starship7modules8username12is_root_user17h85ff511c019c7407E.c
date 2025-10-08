char starship::modules::username::is_root_user()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return !geteuid();
}
