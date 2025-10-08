long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_path(struct_0 *a0)
{
    unsigned long long v1;  // rax

    v1 = core::slice::<impl [T]>::sort_unstable_by(a0->field_8, a0->field_10);
    a0->field_38 = 1;
    return v1;
}
