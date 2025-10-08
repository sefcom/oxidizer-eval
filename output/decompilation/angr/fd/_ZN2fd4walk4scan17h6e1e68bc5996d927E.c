long long fd::walk::scan(void* a0, unsigned long long a1, unsigned long a2, void* a3, void* a4)
{
    char v0;  // [bp-0x240]

    v0.new(a3, a4);
    a0.scan(&v0, a1);
    return core::ptr::drop_in_place<fd::walk::WorkerState>(&v0);
}
