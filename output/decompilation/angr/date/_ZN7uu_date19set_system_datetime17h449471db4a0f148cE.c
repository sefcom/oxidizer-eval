long long uu_date::set_system_datetime(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    void* v3;  // r14

    v0 = a0->field_0;
    v1 = a0->field_8;
    v3 = 0;
    if (clock_settime(0, &v0))
        v3 = std::sys::pal::unix::os::errno() * 0x100000000 | 2.map_err_context();
    core::ptr::drop_in_place<jiff::zoned::Zoned>(a0->field_10);
    return v3;
}
