long long uu_cp::Attributes::parse_single_string::hf0de3a52359f0529(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [sp-0xb8]
    unsigned int v1;  // [sp-0xb0]
    char v2;  // [bp-0xa8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x98]
    char *v5;  // [sp-0x90]
    unsigned long long v6;  // [sp-0x88]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x70]
    unsigned long v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x60]
    struct struct_0 **v11;  // [sp-0x58]
    unsigned long long v12;  // [sp-0x50]
    void* v13;  // [sp-0x48]
    void* v14;  // [sp-0x38]
    int v15;  // [sp-0x30]
    char v16;  // [sp-0x20]
    unsigned long long v18;  // r14
    unsigned long long v19;  // r15
    char *v20;  // rax

    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v2, a1, a2);
    v18 = *((long long *)&v3);
    v19 = *((long long *)&v4);
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "allThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backupsDo not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. Also, if\n--preserve=links is also specified (like with cp", 3))
    {
        a0[1] = 1103823438081;
        *((unsigned int *)&a0[2]) = 65793;
        goto LABEL_5019f1;
    }
    v1 = 0;
    v0 = 0;
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "mode", 4))
    {
        v20 = &v0;
        goto LABEL_5019dd;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "ownership", 9))
    {
        v20 = &v0;
        goto LABEL_5019dd;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "timestamps", 10))
    {
        v20 = &v0;
        goto LABEL_5019dd;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "context", 7))
    {
        v20 = &v0;
        goto LABEL_5019dd;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "link", 4) || (char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "links", 5))
    {
        v20 = &v1;
        goto LABEL_5019dd;
    }
    else if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(v18, v19, "xattr", 5))
    {
        v14 = 0;
        *((int128_t *)&v15) = *((int128_t *)&v3);
        v16 = 1;
        v5 = &v14;
        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v9 = &g_5b5c40;
        v10 = 1;
        v13 = 0;
        v11 = &v5;
        v12 = 1;
        ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v7, &v9);
        a0[3] = *((long long *)&v8);
        *((int128_t *)&a0[1]) = *((int128_t *)&v7);
        a0[0] = 9;
    }
    else
    {
        v20 = &v1;
LABEL_5019dd:
        *((unsigned short *)&v20) = 257;
        *((unsigned int *)&a0[2]) = v1;
        a0[1] = v0;
LABEL_5019f1:
        a0[0] = 13;
    }
    ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v2);
    return a0;
}
