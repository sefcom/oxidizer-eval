long long uu_whoami::whoami(unsigned long long a0)
{
    unsigned long long v0[1][2];  // [bp-0x28]

    uu_whoami::platform::unix::get_username(&v0);
    a0.map_err_context(&v0);
    return a0;
}
