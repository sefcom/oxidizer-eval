long long uu_more::Pager::get_line(unsigned long long a0[5], unsigned long long a1)
{
    void* v0[1];  // [bp-0x28], Other Possible Types: unsigned long long
    char v1;  // [bp-0x20]
    void* v3;  // rbx

    v0.read_until_line(a0, a1);
    v3 = 0;
    if (!v0 && v1 == 1 && a0[4] > a1)
        v3 = a1 * 24 + a0[3];
    core::ptr::drop_in_place<core::result::Result<bool,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v0, *((long long *)&v1));
    return v3;
}
