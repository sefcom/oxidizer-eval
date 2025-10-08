long long firecracker::metrics::PeriodicMetrics::new()
{
    char v0;  // [bp-0x18]

    v0.new_custom(1, 1, 1);
    return v0.expect();
}
