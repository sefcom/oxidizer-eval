long long starship::modules::username::is_login_user(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax

    v2 = v0.get_env("LOGNAMESSH_CLIENTSSH_TTYsrc/modules/utils/directory.rsUnable to stat() directory: Error in module `vagrant`:\nsrc/modules/vagrant.rs", 7) & 0xffffffffffffff00 | 1;
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        return v2;
    return starship::modules::username::is_login_user::{{closure}}(a0, a1, &v0);
}
