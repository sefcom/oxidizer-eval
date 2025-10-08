long long fish::wildcard::file_get_desc(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3, char a4)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdi

    v0 = v2;
    if (a3)
    {
        if (a2)
        {
            v3 = &_ZN4fish8wildcard31COMPLETE_DIRECTORY_SYMLINK_DESC17h10bfdabfe296e9d3E;
        }
        else if (!a4 && (int)fish::wutil::waccess(a0, a1, 1))
        {
            v3 = &_ZN4fish8wildcard21COMPLETE_SYMLINK_DESC17hbdf211016f5e67b7E;
        }
        else
        {
            v3 = &_ZN4fish8wildcard23COMPLETE_EXEC_LINK_DESC17hb7e5eb23916e0db4E;
        }
    }
    else
    {
        if (a2)
        {
            v3 = &_ZN4fish8wildcard23COMPLETE_DIRECTORY_DESC17h34fcb4b0ab1a278fE;
        }
        else if (!a4 && (int)fish::wutil::waccess(a0, a1, 1))
        {
            v3 = &_ZN4fish8wildcard18COMPLETE_FILE_DESC17h2c96603ac1fc3629E;
        }
        else
        {
            v3 = &_ZN4fish8wildcard18COMPLETE_EXEC_DESC17hba1638a0996d8230E;
        }
    }
    return *((long long *)v3.get_or_try_init(v3));
}
