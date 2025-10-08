long long forc_fmt::write_file_formatted(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = std::fs::write(a0, a1, a2, a3);
    if (v3)
        return v3.from();
    return 0;
}
