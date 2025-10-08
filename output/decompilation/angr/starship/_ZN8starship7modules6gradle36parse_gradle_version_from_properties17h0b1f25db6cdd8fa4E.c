long long starship::modules::gradle::parse_gradle_version_from_properties(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    char v3;  // [bp-0x78], Other Possible Types: unsigned long long
    char v4;  // [bp-0x70]
    void* v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    char v7;  // [bp-0x48]
    unsigned short v8;  // [bp-0x18]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v7.into_searcher(10, a1, a2);
    v5 = 0;
    v6 = a2;
    v8 = 0;
    v10 = v5.try_fold();
    if (v10)
    {
        core::str::<impl str>::rsplit_once(&v0, v10, a2, 47);
        if (*((long long *)&v0))
        {
            v11 = "gradle-gradle/wrapper/gradle-wrapper.propertiesError in module `guix_shell`:\nsrc/modules/guix_shell.rs".strip_prefix_of(7, v1, v2);
            if (v11)
            {
                core::str::<impl str>::rsplit_once(&v3, v11, a2, 45);
                if (v3)
                    return a0.to_vec(v3, *((long long *)&v4));
            }
        }
    }
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
