void zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::swap_remove(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x38]

    v0.swap_remove(a0, a1);
    core::ptr::drop_in_place<zoxide::db::dir::Dir>(&v0);
    a0->field_38 = 1;
    return;
}
