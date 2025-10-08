long long uu_chown::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x2e0]

    uu_chown::uu_app(&v0);
    return uucore::features::perms::chown_base(&v0, a0, a1);
}
