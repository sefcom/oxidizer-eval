void firecracker::metrics::PeriodicMetrics::start(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x28]
    char v4;  // [bp-0x20]

    v0 = 60;
    v1 = 0;
    v2 = 60;
    v3 = 0;
    v4.set_state(a0, &v0, 0);
    firecracker::metrics::PeriodicMetrics::write_metrics();
    return;
}
