long long uu_sort::merge::merge::h37f56e954177d019(unsigned long long a0[3], unsigned long a1, unsigned int a2, struct_0 *a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // rax
    unsigned long v1;  // rdx
    unsigned long long v2;  // rdx

    v0 = uu_sort::merge::replace_output_file_in_input_files::h1d16a350d57fc5e2(a1, a2, a4, a5, a6);
    if (v0)
    {
        a0[1] = v0;
        a0[2] = v1;
        a0[0] = 3;
        return a0;
    }
    v2 = a1 + a2 * 24;
    if (a3->field_30 != 0x8000000000000000)
    {
        uu_sort::merge::merge_with_file_limit::hd33eb504f21b1692(a0, a1, v2, a3, a6);
        return a0;
    }
    uu_sort::merge::merge_with_file_limit::h68734aa550059387(a0, a1, v2, a3, a6);
    return a0;
}
