long long uu_mv::rename_symlink_fallback::h660b7b06bb83800b(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned long v3;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x30]
    unsigned long long v5;  // [sp-0x28]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    std::fs::read_link::h3e3c7f57b2fb1565(&v0, a0, a1);
    v8 = *((long long *)&v1);
    if (v3 == 0x8000000000000000)
        return v8;
    v3 = *((long long *)&v0);
    v4 = v8;
    v5 = *((long long *)&v2);
    v8 = std::os::unix::fs::symlink::hd7e30b1b9329a440(&v3, a2, a3);
    if (!v8)
        return std::fs::remove_file::hcb36427ac96e504f(a0, a1, v9);
    return v8;
}
