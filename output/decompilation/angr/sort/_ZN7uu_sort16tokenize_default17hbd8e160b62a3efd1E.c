long long uu_sort::tokenize_default::hbd8e160b62a3efd1(unsigned long a0, unsigned long a1, unsigned long long a2[3])
{
    unsigned long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    void* v2;  // [sp-0x30]
    unsigned long v4;  // rcx
    char v5;  // cl
    char v6;  // bpl
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rax

    alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(a2, 0, 0);
    v0 = a0;
    v1 = a0 + a1;
    v2 = 0;
    v5 = v4 & 0xffffffffffffff00 | 1;
    while (true)
    {
        while (true)
        {
            v6 = v5;
            v7 = ::0x51d730::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0);
            switch ((unsigned int)v8)
            {
            case 32:
LABEL_520c1f:
                v5 = v9 & 0xffffffffffffff00 | 1;
                if (!(v6 & 1))
                    break;
                continue;
            case 1114112:
                v11 = a2[2];
                if (v11)
                {
                    *((unsigned long *)(v11 * 16 + a2[1] - 8)) = a1;
                    return v11 * 16;
                }
                core::option::unwrap_failed::h0e11329e76906eaa(&g_5ffa10); /* do not return */
            default:
                v9 = v8 - 9 & 4294967295;
                if ((unsigned int)v9 < 5)
                    goto LABEL_520c1f;
                else
                    goto LABEL_520c50;
            }
LABEL_520c50:
            v5 = 0;
            if ((unsigned int)v8 >= 128 && (v5 = (char)(int)::0x51caf0::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v8 & 4294967295), !((v6 | ~(v5)) & 1)))
                break;
        }
        v10 = a2[2];
        if (!v10)
            break;
        *((unsigned long long *)(v10 * 16 + a2[1] - 8)) = v7;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h0ef512be9be90a46(a2, v7, 0);
        v5 = v4 & 0xffffffffffffff00 | 1;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(&g_5ffa28); /* do not return */
}
