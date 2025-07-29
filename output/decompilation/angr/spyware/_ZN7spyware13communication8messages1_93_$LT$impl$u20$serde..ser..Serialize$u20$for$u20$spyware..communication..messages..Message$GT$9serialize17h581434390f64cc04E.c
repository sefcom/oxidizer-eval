void spyware::communication::messages::_::<impl serde::ser::Serialize for spyware::communication::messages::Message>::serialize(unsigned long a0, unsigned long long *a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rcx

    v0 = v2;
    v3 = 0x8000000000000000 ^ *(a1);
    if (v3 >= 10)
        v3 = 5;
    goto (long long)(g_4123fc[v3] + (char *)&g_4123fc[0]);
}
