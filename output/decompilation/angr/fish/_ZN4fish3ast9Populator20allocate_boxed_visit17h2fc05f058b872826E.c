long long fish::ast::Populator::allocate_boxed_visit(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x38]
    char v1;  // [bp-0x30]

    v0 = <alloc::boxed::Box<T> as core::default::Default>::default();
    v1.visit_mut(a0, v0);
    return v0;
}
