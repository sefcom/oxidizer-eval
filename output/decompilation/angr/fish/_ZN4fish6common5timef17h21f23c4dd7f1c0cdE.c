long long fish::common::timef()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned int v4;  // edx
    unsigned long long v5;  // rax

    v0 = std::time::SystemTime::now();
    v1 = v4;
    v5 = v2.duration_since(&v0, 0, 0);
    if (!v2)
        return v5;
    return v5;
}
