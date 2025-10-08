long long zoxide::util::current_time()
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    unsigned int v6;  // edx

    v2 = std::time::SystemTime::now();
    v3 = v6;
    v4.duration_since(&v2, 0, 0);
    v0.context(&v4);
    if (*((int *)&v1) != 0x3b9aca00)
        return 0;
    return 1;
}
