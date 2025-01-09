long long uu_wc::process_chunk::hf7d3215607e15a44(unsigned long long a0[5], unsigned long a1, unsigned long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long v1;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // rbp
    unsigned long long v5;  // r14
    unsigned int v7;  // r13d
    unsigned int v8;  // edx
    unsigned int v9;  // r13d
    unsigned long long v10;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1))
    {
        a0[0] = a0[0] + a2;
        v10 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(0, a0[4]);
        a0[4] = v10;
        return v10;
    }
    v5 = a0[2];
    v0 = a0[3];
    do
    {
        v7 = v9;
        if (v7 - 9 < 5 || v7 == 32 || v7 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7))
        {
            *(a3) = 0;
            v4 = 0;
        }
        else if (!(char)v4)
        {
            *(a3) = 1;
            v0 += 1;
            a0[3] = v0;
            v4 = v4 & 0xffffffffffffff00 | 1;
        }
        if (v7 == 10)
        {
            v5 += 1;
            a0[2] = v5;
        }
        v9 = v8;
    } while ((int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1));
}
