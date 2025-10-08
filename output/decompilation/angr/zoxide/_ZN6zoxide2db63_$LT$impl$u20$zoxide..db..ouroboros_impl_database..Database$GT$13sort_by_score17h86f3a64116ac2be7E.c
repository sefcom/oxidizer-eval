long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_score(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rax

    v0 = a1;
    v2 = core::slice::<impl [T]>::sort_unstable_by(a0->field_8, a0->field_10, &v0);
    a0->field_38 = 1;
    return v2;
}
