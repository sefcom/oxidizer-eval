long long fd::exec::command::OutputBuffer::write(unsigned long long a0[4])
{
    char v0;  // [bp-0x79]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char v6;  // [bp-0x48], Other Possible Types: unsigned long long
    char v8;  // dl
    unsigned long long v9;  // r14
    void* v10;  // rbx

    if (!a0[2])
        return core::ptr::drop_in_place<fd::exec::command::OutputBuffer>(a0);
    v6.lock(a0[3]);
    v3 = v6.unwrap(&g_802178);
    v0 = v8 & 1;
    v4 = std::io::stdio::stdout();
    v5 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    v1 = v4.lock();
    v2 = v5.lock();
    v9 = a0[1];
    v10 = 0;
    do
    {
        v6 = v1.write_all(*((long long *)(8 + v9 + (char *)v10)), *((long long *)(16 + v9 + (char *)v10)));
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v6);
        v6 = v2.write_all(*((long long *)(32 + v9 + (char *)v10)), *((long long *)(40 + v9 + (char *)v10)));
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v6);
        v10 += 48;
    } while (a0[2] * 48 != v10);
    core::ptr::drop_in_place<std::io::stdio::StderrLock>(v2);
    core::ptr::drop_in_place<std::io::stdio::StderrLock>(v1);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<crossbeam_channel::flavors::zero::Inner>>(v3, v0);
    return core::ptr::drop_in_place<fd::exec::command::OutputBuffer>(a0);
}
