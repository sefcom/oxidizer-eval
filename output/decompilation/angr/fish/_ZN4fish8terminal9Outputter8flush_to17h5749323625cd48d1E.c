void fish::terminal::Outputter::flush_to(void* a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx

    if (!(long long)a0[16])
        return;
    v1 = v3;
    v0 = fish::common::safe_write_loop(a1, (long long)a0[8], (long long)a0[16]);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
    *((unsigned long long *)&a0[16]) = 0;
    return;
}
