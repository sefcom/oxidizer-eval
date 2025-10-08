long long fish::io::IoBuffer::append(unsigned long long *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0x40]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    char v4;  // dl

    v0.lock(*(a0) + 16);
    v2 = v0.unwrap(&g_14db780);
    v3 = v2 + 8.append(a1, a2, a3);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v4 & 1);
    return v3;
}
