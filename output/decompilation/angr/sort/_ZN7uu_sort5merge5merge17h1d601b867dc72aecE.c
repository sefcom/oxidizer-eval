long long uu_sort::merge::merge(unsigned long long a0, unsigned int a1, struct_0 *a2, int a3[17], unsigned long long a4)
{
    int v0;  // [bp-0x48]
    int v1;  // [bp-0x38]
    void* v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rsi

    v3 = 0;
    if (!((char)(((0 ^ (long long)a3[0]) & (0 ^ -((long long)a3[0]))) >> 63)))
        v3 = (long long)a3[8];
    v4 = uu_sort::merge::replace_output_file_in_input_files(a0, a1, v3, (long long)a3[16], a4);
    if (v4)
    {
        ::0x514d00::core::ptr::drop_in_place<uu_sort::Output>(a3);
        return v4;
    }
    v5 = a0 + a1 * 24;
    if (a2->field_30 != 0x8000000000000000)
    {
        *((int128_t *)&v1) = (int128_t)a3[16];
        *((int128_t *)&v0) = (int128_t)a3[0];
        return uu_sort::merge::merge_with_file_limit(a0, v5, a2, &v0, a4);
    }
    *((int128_t *)&v1) = (int128_t)a3[16];
    *((int128_t *)&v0) = (int128_t)a3[0];
    return uu_sort::merge::merge_with_file_limit(a0, v5, a2, &v0, a4);
}
