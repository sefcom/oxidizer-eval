long long uu_tr::operation::TranslateOperation::new(void* a0, unsigned long long a1[3], unsigned long long a2[3])
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x88]
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx

    if (a2[2])
    {
        v0.into_iter(a1);
        v2.into_iter(a2);
        v1.chain(&v2, *((char *)(a2[1] + a2[2] - 1)));
        v2.zip(&v0, &v1);
        a0.collect(&v2);
        return a0;
    }
    if (a1[2])
    {
        *((unsigned int *)&a0[8]) = 5;
        *((unsigned long long *)a0) = 0;
    }
    else
    {
        v4 = std::thread::local::LocalKey<T>::with();
        *((uint128_t *)&a0[16]) = g_4fdac8;
        *((uint128_t *)a0) = g_4fdab8;
        *((unsigned long long *)&a0[32]) = v4;
        *((unsigned long *)&a0[40]) = v5;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a2[0], a2[1]);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a1[0], a1[1]);
    return a0;
}
