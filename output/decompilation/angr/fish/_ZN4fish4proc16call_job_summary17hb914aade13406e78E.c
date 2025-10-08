long long fish::proc::call_job_summary(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xb0]
    int v1;  // [bp-0xac]
    unsigned long long v2;  // [bp-0xa8]
    void* v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x9c]
    int v5;  // [bp-0x90], Other Possible Types: char
    unsigned long long v6;  // [bp-0x80]
    void* v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    void* v9;  // [bp-0x68]
    unsigned int v10;  // [bp-0x60]
    char v11;  // [bp-0x5c]
    unsigned long long v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    unsigned long v16;  // rax

    v5.to_vec("f", 16);
    v1 = v5;
    v4 = v6;
    v10 = 6;
    memcpy(&v11, &(char)v0, 16);
    v12 = (long long)(&v1)[8];
    v13 = v4;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    (char)v0.event_block(&v7);
    v16 = a0.push_block(&(char)v0);
    v14.get_last_statuses(a0);
    v0 = 0;
    v2 = 8;
    v3 = 0;
    v5.eval(a0, a1, a2, &(char)v0);
    core::ptr::drop_in_place<fish::io::IoChain>(&(char)v0);
    a0.set_last_statuses(&v14);
    return a0.pop_block(v16);
}
