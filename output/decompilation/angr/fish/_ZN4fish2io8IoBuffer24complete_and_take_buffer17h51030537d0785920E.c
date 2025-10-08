long long fish::io::IoBuffer::complete_and_take_buffer(uint128_t a0[3], unsigned long long *a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x74]
    struct_0 *v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    void* v3;  // [bp-0x60], Other Possible Types: char
    unsigned long long v4;  // [bp-0x58]
    void* v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    void* v7;  // [bp-0x40]
    char v8;  // [bp-0x38]
    char v10;  // dl
    int v11;  // xmm0
    int v12;  // xmm1

    v0 = a2;
    v3.lock(*(a1) + 16);
    v1 = v3.unwrap(&g_14db7f8);
    v2 = v10 & 1;
    if (a2 >= 0)
    {
        do
        { } while (a2.read_once(&v1) > 0);
    }
    v6 = v1->field_20;
    v7 = 0;
    v3 = 0;
    v4 = 8;
    v5 = 0;
    v8 = 0;
    core::intrinsics::typed_swap_nonoverlapping(&v3, &v1->padding_0[8]);
    v1->padding_0[8].clear();
    v11 = *((int128_t *)&v3);
    v12 = *((int128_t *)&v5);
    a0[2] = *((int128_t *)&v7);
    *((void*)&a0[1]) = v12;
    *((void*)&a0[0]) = v11;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, *((int *)&v2));
    core::ptr::drop_in_place<fish::fds::AutoCloseFd>(&v0);
    return a0;
}
