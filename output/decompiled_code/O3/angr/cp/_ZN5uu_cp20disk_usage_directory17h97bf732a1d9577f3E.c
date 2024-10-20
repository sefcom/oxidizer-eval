long long uu_cp::disk_usage_directory::h97bf732a1d9577f3(unsigned long long a0, unsigned long long a1)
{
    unsigned long long *v0;  // [sp-0x158]
    char v1;  // [sp-0x150]
    char v13;  // [bp-0xe0]
    char v14;  // [bp-0xd8]
    char v18;  // al
    void* v20;  // rbx

    std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v13, a0, a1);
    v18 = v14;
    if (v18 == 2)
        return 1;
    v0 = *((long long *)&v13);
    v1 = v18;
    v20 = 0;
}
