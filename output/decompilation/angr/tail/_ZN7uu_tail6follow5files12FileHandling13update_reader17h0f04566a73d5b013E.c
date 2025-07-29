long long uu_tail::follow::files::FileHandling::update_reader(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x54]
    unsigned long long v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v5[27];  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi

    v5 = a0.get_mut(a1, a2);
    v0.open(a1, a2);
    if (!(v0 & 1))
    {
        v3.with_capacity(0x2000, v1);
        v6 = v3.new();
        v7 = v5[25];
        v8 = v5[26];
        v5[25] = v6;
        v5[26] = &g_637b60;
        ::0x511a60::core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn std::io::BufRead>>>(v7, v8);
        return 0;
    }
    return v2.from();
}
