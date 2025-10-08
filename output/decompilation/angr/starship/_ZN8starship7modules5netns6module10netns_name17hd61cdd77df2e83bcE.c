long long starship::modules::netns::module::netns_name(unsigned long long a0, void* a1)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long long v1[6];  // [bp-0x38]

    v1.exec_cmd(a1, "ipError in module `nim`:\nsrc/modules/nim.rs", 2, &g_11f5560, 2);
    if ((char)(((0 ^ v1[0]) & (0 ^ -(v1[0]))) >> 63))
        v0 = 0x8000000000000000;
    else
        starship::bug_report::get_shell_version::{{closure}}(&(char)v0, &v1);
    return a0.filter(&v0);
}
