long long uu_sort::merge::merge::hbd900a20584c138f(unsigned long long a0[3], unsigned long a1, unsigned int a2, struct_0 *a3, unsigned long long a4, unsigned long a5)
{
    unsigned long v0;  // [bp+0x8]
    unsigned long long v1;  // r15
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned long long v4;  // rdx

    v1 = v0;
    v2 = uu_sort::merge::replace_output_file_in_input_files::hed28cc33eb84475a(a1, a2, a4, a5, v1, a5);
    if (v2)
    {
        a0[1] = v2;
        a0[2] = v3;
        a0[0] = 3;
        return a0;
    }
    v4 = a1 + a2 * 24;
    if (a3->field_30 != 0x8000000000000000)
    {
        uu_sort::merge::merge_with_file_limit::h761cf51efdee0766(a0, a1, v4, a3, v1);
        return a0;
    }
    uu_sort::merge::merge_with_file_limit::hc99c88d531663f47(a0, a1, v4, a3, v1);
    return a0;
}
