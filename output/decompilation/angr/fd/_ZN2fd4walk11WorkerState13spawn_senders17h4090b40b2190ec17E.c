long long fd::walk::WorkerState::spawn_senders(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]

    v0 = a2;
    v1 = a3;
    a1.run(a0, &v0);
    return core::ptr::drop_in_place<crossbeam_channel::channel::Sender<fd::walk::Batch>>(&v0);
}
