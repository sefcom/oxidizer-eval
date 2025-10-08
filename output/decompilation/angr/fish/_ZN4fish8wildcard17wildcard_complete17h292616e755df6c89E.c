long long fish::wildcard::wildcard_complete(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, void* a6, unsigned short a7, unsigned int a8)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned short v4;  // [bp-0x8]

    v0 = a0;
    v1 = a1;
    v2 = a4;
    v3 = a5;
    v4 = a7;
    return fish::wildcard::wildcard_complete_internal(a0, a1, a2, a3, &v0, a8, a6, 1);
}
