long long uu_tail::follow::watch::Observer::add_stdin::h1e883df612f432c4(struct_2 *a0, void* a1, unsigned int a2, unsigned long long a3, struct_1 *a4, unsigned int a5)
{
    struct_1 *v0;  // [sp-0x68]
    unsigned long long v1;  // [sp-0x60]
    unsigned long long v2;  // [sp-0x50]
    char v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char v7;  // al
    unsigned long long v8;  // rcx
    void* v9;  // rax
    struct struct_0 **v10;  // rax

    v7 = a0->field_8e;
    if (v7 != 2 && !(v7 & 1))
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, "/dev/stdin: inotify cannot be used, reverting to polling: Too many open files\nsrc/uu/tail/src/follow/watch.rs has been replaced with an untailable file\n has become accessible\n: file truncated\n has been replaced;  following new file\n has appeared;  following new file\n has been replaced with an untailable file; giving up on this name\n", 10);
        v2 = *((long long *)&v3);
        v8 = *((long long *)&v4);
        v1 = a5;
        v0 = a4;
        v9 = uu_tail::follow::watch::Observer::add_path::h076e7fd78e606d41(a0, v8, *((long long *)&v5), a1, a2, a3);
        if (v2)
        {
            __rust_dealloc(v8);
            return v9;
        }
        return v9;
    }
    if (a3)
    {
        if (a4->field_0)
            v10(a3);
        if (a4->field_8)
            __rust_dealloc(a3);
    }
    return 0;
}
