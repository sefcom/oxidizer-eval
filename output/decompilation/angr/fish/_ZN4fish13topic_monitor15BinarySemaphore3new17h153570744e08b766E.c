long long fish::topic_monitor::BinarySemaphore::new(void* a0)
{
    uint128_t v0;  // [bp-0x38]
    uint128_t v1;  // [bp-0x28]
    unsigned int *v3;  // r14
    unsigned int v4;  // ebp
    unsigned int v5;  // edx

    v1 = 0;
    v0 = 0;
    v3 = v0.new();
    v4 = 0;
    if (sem_init(v3, 0, 0))
    {
        core::ptr::drop_in_place<core::pin::Pin<alloc::boxed::Box<core::cell::UnsafeCell<libc::unix::linux_like::linux::gnu::sem_t>>>>(v3);
        *((int *)&a0[4]) = fish::fds::make_autoclose_pipes().expect();
        *((unsigned int *)&a0[8]) = v5;
        v4 = 1;
    }
    else
    {
        *((unsigned int **)&a0[8]) = v3;
    }
    *((unsigned int *)a0) = v4;
    return a0;
}
