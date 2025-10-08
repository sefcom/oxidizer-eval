void fish::threads::iothread_service_main(unsigned long long a0)
{
    int v0;  // [bp-0x48]
    void* v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    void* v5;  // rax
    char v6;  // dl
    unsigned long long v7;  // rax

    fish::threads::assert_is_main_thread();
    once_cell::sync::OnceCell<T>::get_or_try_init().try_consume();
    v2.lock();
    v5 = v2.expect();
    v1 = (long long)v5[24];
    *((int128_t *)&v0) = (int128_t)v5[8];
    *((unsigned long long *)&v5[8]) = 0;
    *((unsigned long long *)&v5[16]) = 8;
    *((unsigned long long *)&v5[24]) = 0;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, v6 & 1);
    v2.into_iter(&v0);
    while (true)
    {
        v7 = v2.next();
        if (!v7)
            break;
        v7.call_once(v6, a0);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::threads::ForceSend<alloc::boxed::Box<dyn core::ops::function::FnOnce<(&mut fish::reader::Reader,)>+Output = ()>>>>(&v2);
    return;
}
