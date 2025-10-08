long long fish::env::environment::EnvStack::set_empty(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    void* v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    void* v2;  // [bp-0x8]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    return a0.set(a1, a2, a3, &v0);
}
