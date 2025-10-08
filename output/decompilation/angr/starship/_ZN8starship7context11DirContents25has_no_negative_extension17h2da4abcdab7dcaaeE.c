char starship::context::DirContents::has_no_negative_extension(unsigned long long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a1;
    v1 = a2 * 16 + a1;
    return v0.any(a0) ^ 1;
}
