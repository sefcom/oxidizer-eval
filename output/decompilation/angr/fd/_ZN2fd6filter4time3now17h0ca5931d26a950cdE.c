long long fd::filter::time::now(unsigned long long a0)
{
    char v0;  // [bp-0x40]
    unsigned long long v3;  // rdx

    v0.try_from(jiff::now::sys::system_time(), v3);
    return a0.expect(&v0);
}
