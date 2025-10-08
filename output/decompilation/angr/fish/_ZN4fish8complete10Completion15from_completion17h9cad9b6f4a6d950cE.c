long long fish::complete::Completion::from_completion(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    void* v2;  // [bp-0x10]

    v0 = 0;
    v1 = 4;
    v2 = 0;
    a0.with_desc(a1, &v0);
    return a0;
}
