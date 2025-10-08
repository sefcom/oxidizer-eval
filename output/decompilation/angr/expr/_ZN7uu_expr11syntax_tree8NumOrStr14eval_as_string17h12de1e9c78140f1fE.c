long long uu_expr::syntax_tree::NumOrStr::eval_as_string(struct_0 *a0, void* a1)
{
    int v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    int v2;  // [bp-0x18]

    if ((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63))
    {
        a0->field_10 = (long long)a1[24];
        a0->field_0 = (int128_t)a1[8];
    }
    else
    {
        *((int128_t *)&v2) = (int128_t)a1[16];
        *((int128_t *)&v0) = *((int128_t *)a1);
        a0.spec_to_string(&(char)v0);
        core::ptr::drop_in_place<num_bigint::bigint::BigInt>((long long)v0, v1);
    }
    return a0;
}
