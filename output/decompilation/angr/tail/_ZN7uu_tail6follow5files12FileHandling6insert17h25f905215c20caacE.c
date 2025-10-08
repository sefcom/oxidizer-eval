void uu_tail::follow::files::FileHandling::insert(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    int v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x118]
    char v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    int v5;  // [bp-0xf8], Other Possible Types: char
    char v6;  // [bp-0xe8]

    v2.canonicalize_path(a1, a2);
    if (a4)
    {
        v5.clone(v3, v4);
        v1 = *((long long *)&v6);
        v0 = v5;
        core::ptr::drop_in_place<uu_tail::paths::InputKind>(*((long long *)a0), (long long)a0[8]);
        *((unsigned long long *)&a0[16]) = v1;
        *(a0) = v0;
    }
    v1 = v4;
    memcpy(&v0, &v2, 16);
    v5.insert(a0 + 24, &v0, a3);
    core::ptr::drop_in_place<core::option::Option<uu_tail::follow::files::PathData>>(&v5);
    return;
}
