long long fish::builtins::set::Options::scope(char a0[12])
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned short v3;  // [bp-0x36]
    unsigned int v4;  // [bp-0x34]
    unsigned int v5;  // [bp-0x30]
    unsigned int v6;  // [bp-0x2c]
    unsigned int v7;  // [bp-0x28]
    unsigned int v8;  // [bp-0x24]
    unsigned int v9;  // [bp-0x20]
    unsigned int v10;  // [bp-0x1c]
    unsigned long long v12;  // rax
    unsigned long v13;  // rbx
    unsigned long long v14;  // rbx

    v0 = 0;
    v1 = 8;
    v2 = a0[2];
    v3 = 1;
    v4 = a0[3] | 0x20000;
    v5 = a0[4] | 0x40000;
    v6 = a0[5] | 0x100000;
    v7 = a0[8] | 0x200000;
    v8 = a0[11] | 0x80000;
    *((unsigned long *)&v9) = a0[9] | &_ZN3std3sys12thread_local11destructors4list5DTORS17hb2d59fc8234f6b7dE;
    *((unsigned long *)&v10) = a0[10] | &g_800000;
    v14 = v13 & 0xffffffffffff0000 | 0x100;
    if ((char)v0.next() != 2)
    {
        v14 = v14 & 0xffffffffffff0000 | 0x100;
        do
        {
            v14 = (unsigned int)v14 | (!((char)v12 & 1) ? 0 : (unsigned int)v12 >> 16);
            v12 = v0.next();
        } while ((char)v12 != 2);
    }
    return v14 & 4294967295;
}
