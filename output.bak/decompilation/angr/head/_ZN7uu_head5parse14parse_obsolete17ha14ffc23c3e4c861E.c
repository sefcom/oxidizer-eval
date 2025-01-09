long long uu_head::parse::parse_obsolete::ha14ffc23c3e4c861(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x58]
    void* v2;  // [sp-0x50]
    unsigned long long v3;  // [sp-0x48]
    unsigned long long v4;  // [sp-0x40]
    char v5;  // [sp-0x38]
    unsigned int v7;  // edx
    unsigned int v10;  // r12d
    unsigned long long v11;  // r13
    unsigned long long v12;  // rax
    unsigned int v14;  // r12d
    unsigned long long v15;  // rdx

    v2 = 0;
    v0 = a1;
    v1 = a1 + a2;
    ::0x4be180::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0);
    if (v7 == 45 && v7 - 48 <= 9)
    {
        if (v7 == 0x110000)
        {
            v10 = 0;
        }
        else
        {
            v11 = ::0x4be180::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0);
            if (v10 - 48 <= 9)
            {
                v12 = ::0x4be180::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0);
                if (v7 == 0x110000)
                {
LABEL_4be355:
                    v10 = 0;
                }
                else
                {
                    while (true)
                    {
                        v10 = v14;
                        v11 = v12;
                        if (v10 - 48 >= 10)
                            break;
                        v12 = ::0x4be180::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0);
                        if (v7 == 0x110000)
                            goto LABEL_4be355;
                    }
                }
            }
        }
        v3 = 1;
        v4 = ::0x4be180::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0);
        v5 = 0;
        uu_head::parse::process_num_block::h8e5bdc2257d4c6b6(a0, core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeInclusive$LT$usize$GT$$GT$::index::h3fe2ad0e36dabac9(&v3, a1, a2), v15, v10, &v0);
        return a0;
    }
    *(a0) = 0;
    return a0;
}
