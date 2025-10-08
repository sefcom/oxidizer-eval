long long fish::fd_monitor::FdMonitor::new(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned int v3;  // [bp-0x78]
    char v4;  // [bp-0x74]
    char v5;  // [bp-0x73]
    char v6;  // [bp-0x63]
    unsigned int v7;  // [bp-0x54]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned short v10;  // [bp-0x40]
    char v11;  // [bp-0x33]
    int v12;  // [bp-0x30]
    int v13;  // [bp-0x20]
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx

    v15 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v13) = g_14bd820;
    *((uint128_t *)&v12) = g_14bd810;
    v1 = 1;
    v2 = 1;
    v3 = 0;
    v4 = 0;
    memcpy(&v5, &v11, 16);
    memcpy(&v6, &(char)v12, 16);
    v7 = (int)(&v13)[12];
    v8 = v15;
    v9 = v16;
    v10 = 0;
    *((double *)&v0) = v1.new();
    v1 = 1;
    v2 = 1;
    v3 = fish::fd_monitor::FdEventSignaller::new();
    *((double *)&a0->field_0) = v1.new();
    a0->field_8 = v0;
    a0->field_10 = 0;
    return a0;
}
