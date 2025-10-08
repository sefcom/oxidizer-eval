long long fish::history::History::add_commandline(unsigned long long a0, struct_0 *a1)
{
    int v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    void* v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x40]
    void* v7;  // [bp-0x38]
    char v8;  // [bp-0x30]
    unsigned long long v10;  // rax
    unsigned long v11;  // r15
    unsigned long long v12;  // rax
    unsigned int v13;  // edx

    v10 = a0.imp();
    v11 = v10 + 8;
    v12 = v11.timestamp_now();
    v1 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    v5 = v12;
    v6 = v13;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v7 = 0;
    v8 = 0;
    v11.add(&v0, 0, 1);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v10, (char)v13 & 1);
}
