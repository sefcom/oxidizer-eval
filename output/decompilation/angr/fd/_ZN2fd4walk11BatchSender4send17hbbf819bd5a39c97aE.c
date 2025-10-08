long long fd::walk::BatchSender::send(void* a0, void* a1)
{
    unsigned int v0;  // [bp-0x174]
    char v1;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v3[4];  // r14
    unsigned long v4;  // r12
    char v5;  // dl
    char v6;  // bpl
    unsigned long v7;  // r14
    unsigned long long v8;  // 4097
    unsigned long long v9;  // rax
    unsigned int v10;  // ebx

    v3 = (long long)a0[16].lock();
    v4 = a0 + 16;
    v6 = v5 & 1;
    if ((char)(((0 ^ v3[1]) & (0 ^ -(v3[1]))) >> 63) || v3[3] >= (long long)a0[24])
    {
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<crossbeam_channel::flavors::zero::Inner>>(v3, v6);
        v7 = fd::walk::Batch::new();
        core::ptr::drop_in_place<fd::walk::Batch>(v4);
        *((unsigned long *)v4) = v7;
        v3 = v7.lock();
        v6 = v5 & 1;
        if (v3[1] == 0x8000000000000000)
        {
            v0 = 1;
            core::option::unwrap_failed(&g_8025b8); /* do not return */
        }
    }
    ::libc.so.0::memcpy(&v1, a1, 312);
    v0 = 0;
    v3[1].push(&v1);
    if (v3[3] == 1)
    {
        v8 = atomic_fetch_add(*((long long *)v4));
        if ((char)_ccall(14, 24, v8 + 1, 0, (unsigned long long)(char)(v3[3] < 1)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 6257871()
        v0 = 0;
        v9 = *((long long *)a0).send((long long)a0[8], *((long long *)v4));
        if (!v9)
            goto LABEL_5f7c9a;
        v1 = v9;
        v0 = 0;
        core::ptr::drop_in_place<crossbeam_channel::err::SendError<fd::walk::Batch>>(&v1);
        v10 = (unsigned int)&v1 & 0xffffff00 | 1;
    }
    else
    {
LABEL_5f7c9a:
        v10 = 0;
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<crossbeam_channel::flavors::zero::Inner>>(v3, v6);
    return v10;
}
