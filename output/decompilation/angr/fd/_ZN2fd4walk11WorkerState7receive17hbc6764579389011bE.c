long long fd::walk::WorkerState::receive(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0xe8]
    char v1;  // [bp-0xe4]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    struct_1 *v4;  // [bp-0xd0], Other Possible Types: unsigned long long
    char *v5;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v6;  // [bp-0xc0], Other Possible Types: unsigned long
    char *v7;  // [bp-0xb8]
    void* v8;  // [bp-0xa0]
    char v9;  // [bp-0x48]
    struct_2 *v11;  // rax
    unsigned int v12;  // eax

    v2 = a1;
    v3 = a2;
    v11 = a0->field_1c8;
    if (v11)
    {
        if (v11->field_28)
        {
            v4 = a1;
            v5 = a2;
            v6 = 0;
            v8 = 0;
            return fd::exec::job::batch(&v4, v11->field_18, v11->field_20, a0);
        }
        v0 = 0;
        v1 = 0;
        v4 = a0;
        v5 = &v2;
        v6 = &a0->field_1c8;
        v7 = &v0;
        v12 = std::thread::scoped::scope(&v4);
        core::ptr::drop_in_place<crossbeam_channel::channel::Receiver<fd::walk::Batch>>(&v2);
    }
    else
    {
        v4 = std::io::stdio::stdout();
        v9.with_capacity(v4.lock());
        v4.new(a0, a1, a2, &v9);
        v12 = v4.process();
        core::ptr::drop_in_place<fd::walk::ReceiverBuffer<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>>(&v4);
    }
    return v12;
}
