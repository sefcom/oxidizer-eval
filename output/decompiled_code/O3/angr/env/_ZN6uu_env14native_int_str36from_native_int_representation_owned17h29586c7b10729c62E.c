double uu_env::native_int_str::from_native_int_representation_owned::h29586c7b10729c62(long long a0, long long a1)
{
    int v1;  // xmm0
    int v2;  // ymm0

    a0->field_10 = a1->field_10;
    v1 = a1->field_0;
    *((void*)&a0->field_0) = v1;
    return (unsigned long long)(v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v1);
}
