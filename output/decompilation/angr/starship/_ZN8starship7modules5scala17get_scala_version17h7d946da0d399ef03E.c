long long starship::modules::scala::get_scala_version(unsigned long long a0, void* a1)
{
    unsigned long long v0[6];  // [bp-0x78]
    char v1;  // [bp-0x48]

    v0.exec_cmd(a1, "scala-cliscalacError in module `shell`: \nsrc/modules/shell.rs", 9, &g_11f60e0, 2);
    v1.filter(&v0);
    if ((char)(((0 ^ *((long long *)&v1)) & (0 ^ -(*((long long *)&v1)))) >> 63))
        *(v0) = 0x8000000000000000;
    else
        starship::bug_report::get_shell_version::{{closure}}(&v0, &v1);
    return a0.or_else(&v0, a1);
}
