void uu_tail::follow::files::FileHandling::reset_reader(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax

    v0 = v2;
    v3 = a0.get_mut(a1, a2);
    core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v3->field_c8, v3->field_d0);
    v3->field_c8 = 0;
    return;
}
