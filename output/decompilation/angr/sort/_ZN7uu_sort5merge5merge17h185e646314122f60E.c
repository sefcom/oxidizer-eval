long long uu_sort::merge::merge(void* a0, unsigned int a1, struct_0 *a2, unsigned long long a3[3], unsigned long long a4)
{
    struct_0 *v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    void* v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rsi
    struct_0 *v6;  // rdx

    v0 = v2;
    v0 = a2;
    v3 = 0;
    if (!((char)(((0 ^ a3[0]) & (0 ^ -(a3[0]))) >> 63)))
        v3 = a3[1];
    v4 = uu_sort::merge::replace_output_file_in_input_files(a0, a1, v3, a3[2], a4);
    if (v4)
    {
        core::ptr::drop_in_place<uu_sort::Output>(a3);
        return v4;
    }
    v5 = a0 + a1 * 24;
    v6 = v0;
    if (v0->field_30 != 0x8000000000000000)
        return uu_sort::merge::merge_with_file_limit(a0, v5, v6, a3, a4);
    return uu_sort::merge::merge_with_file_limit(a0, v5, v6, a3, a4);
}
