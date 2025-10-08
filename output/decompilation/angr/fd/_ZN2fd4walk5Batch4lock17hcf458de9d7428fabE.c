long long fd::walk::Batch::lock(unsigned long a0)
{
    char v0;  // [bp-0x20]

    v0.lock(a0 + 16);
    return v0.unwrap();
}
