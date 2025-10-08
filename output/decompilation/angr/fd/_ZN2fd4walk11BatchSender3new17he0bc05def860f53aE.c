long long fd::walk::BatchSender::new(unsigned long long a0[4], unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v3;  // rax

    v0 = a1;
    v1 = a2;
    v3 = fd::walk::Batch::new();
    a0[2] = v3;
    a0[0] = a1;
    a0[1] = a2;
    a0[3] = a3;
    return v3;
}
