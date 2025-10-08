long long fish::io::IoBuffer::discarded(unsigned long long *a0)
{
    char v0;  // [bp-0x20]
    struct_0 *v2;  // rax
    char v3;  // dl

    v0.lock(*(a0) + 16);
    v2 = v0.unwrap(&g_14db798);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v3 & 1);
    return v2->field_30;
}
