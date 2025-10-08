long long fish::topic_monitor::TopicMonitor::check(unsigned long long a0, void* a1, unsigned int a2)
{
    char v0;  // [bp-0xa1]
    unsigned int v1;  // [bp-0xa0]
    unsigned int v2;  // [bp-0x9c]
    char v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x80]
    void* v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned short v7;  // [bp-0x68]
    char v8;  // [bp-0x66]

    if (!(char)a1.any_valid())
        return 0;
    v4 = a0;
    v3.updated_gens(a0);
    v2 = a2;
    v0 = (char)a2 ^ 1;
    v1 = 0;
    v5 = 0;
    v6 = 3;
    v7 = 0x100;
    v8 = 2;
    goto (long long)(g_9f644c[(int)v5.next()] + (char *)&g_9f644c[0]);
}
