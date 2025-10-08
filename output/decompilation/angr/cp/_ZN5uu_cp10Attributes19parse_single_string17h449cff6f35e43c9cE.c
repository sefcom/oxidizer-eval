long long uu_cp::Attributes::parse_single_string(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xb0]
    char v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    char *v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    void* v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    int v11;  // [bp-0x60], Other Possible Types: char
    unsigned long v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    char *v15;  // [bp-0x38]
    unsigned long long v16;  // [bp-0x30]
    void* v17;  // [bp-0x28]
    unsigned short *v19;  // rax
    unsigned long long v20;  // rax

    alloc::str::<impl str>::to_lowercase(&v2, a1, a2);
    if ((char)v3.equal(v4, "all\n\n(uutils coreutils) 0.0.30Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_BACKU", 3))
    {
        *((unsigned long long *)&a0[8]) = 1103823438081;
        *((unsigned int *)&a0[16]) = 65793;
        goto LABEL_49e6c1;
    }
    v1 = 0;
    v0 = 0;
    if ((char)v3.equal(v4, "modefile", 4))
    {
        v19 = &(char)v0;
        goto LABEL_49e6ad;
    }
    if ((char)v3.equal(v4, "ownership/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/perms.rsunexpected end of data/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/pipes.rsunexpected end of pipe/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/buf_copy/linux.rs", 9))
    {
        v19 = &(char)v0;
        goto LABEL_49e6ad;
    }
    if ((char)v3.equal(v4, "timestampslinksxattrall\n\n(uutils coreutils) 0.0.30Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --su", 10))
    {
        v19 = &(char)v0;
        goto LABEL_49e6ad;
    }
    if ((char)v3.equal(v4, "contextTemplateErrorstate/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uucore/src/lib/features/fs.rs", 7))
    {
        v19 = &(char)v0;
        goto LABEL_49e6ad;
    }
    if ((char)v3.equal(v4, "link/", 4) || (char)v3.equal(v4, "linksxattrall\n\n(uutils coreutils) 0.0.30Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SI", 5))
    {
        v19 = &(char)v1;
        goto LABEL_49e6ad;
    }
    else if ((char)v3.equal(v4, "xattrall\n\n(uutils coreutils) 0.0.30Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suffix is '~', unless set with --suffix or SIMPLE_", 5))
    {
        v19 = &(char)v1;
LABEL_49e6ad:
        *(v19) = 257;
        *((unsigned int *)&a0[16]) = v1;
        *((void* *)&a0[8]) = v0;
LABEL_49e6c1:
        v20 = 9223372036854775820;
    }
    else
    {
        v7 = 0;
        v8 = v3;
        v9 = v4;
        v10 = 1;
        v5 = &v7;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v13 = &g_55e998;
        v14 = 1;
        v17 = 0;
        v15 = &v5;
        v16 = 1;
        v11.map_or_else(&v13);
        *((unsigned long *)&a0[24]) = v12;
        a0[8] = v11;
        v20 = 9223372036854775816;
    }
    *((unsigned long long *)a0) = v20;
    core::ptr::drop_in_place<alloc::string::String>(&v2);
    return a0;
}
