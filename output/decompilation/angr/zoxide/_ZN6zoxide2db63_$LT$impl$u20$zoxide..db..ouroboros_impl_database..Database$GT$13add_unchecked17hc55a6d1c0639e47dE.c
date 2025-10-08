long long zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_unchecked(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v4;  // xmm0lq
    unsigned long long v5;  // rax

    v0.call_once(a1, a2);
    v1 = v4;
    v2 = a3;
    v5 = a0.push(&v0, &g_534a60);
    a0->field_38 = 1;
    return v5;
}
