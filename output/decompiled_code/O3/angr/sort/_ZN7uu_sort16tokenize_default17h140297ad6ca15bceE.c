long long uu_sort::tokenize_default::h140297ad6ca15bce(unsigned long a0, unsigned long a1, unsigned long long a2[3], unsigned long a3)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    void* v2;  // [sp-0x30]
    unsigned long v4;  // rcx
    unsigned int v5;  // ecx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdx
    char v9;  // bpl
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rax

    alloc::vec::Vec$LT$T$C$A$GT$::push::h2cea6af96bed3d53(a2, 0, 0);
    v0 = a0;
    v1 = a0 + a1;
    v2 = 0;
    v5 = v4 | -0x100 | 1;
    while (true)
    {
        while (true)
        {
            v9 = v5;
            v10 = ::0x51c770::_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&v0, v6, v8);
            switch ((unsigned int)v7)
            {
            case 32:
LABEL_51fc9f:
                v5 = v11 | -0x100 | 1;
                v8 = v7;
                if (!(v9 & 1))
                    break;
                continue;
            case 1114112:
                v15 = a2[2];
                if (!v15)
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                *((unsigned long *)(v15 * 16 + a2[1] - 8)) = a1;
                return v15 * 16;
            default:
                v11 = v7 - 9 & 4294967295;
                if ((unsigned int)v11 < 5)
                    goto LABEL_51fc9f;
                else
                    goto LABEL_51fcd0;
            }
LABEL_51fcd0:
            v5 = 0;
            v8 = v7;
            if ((unsigned int)v7 >= 128 && (v5 = (int)::0x51bb30::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v7 & 4294967295), v12 = (unsigned long long)v5, v8 = v12 | -0x100 | (unsigned long long)~((char)v12), !((v9 | ~((char)v12)) & 1)))
                break;
        }
        v14 = a2[2];
        if (!v14)
            break;
        *((unsigned long long *)(v14 * 16 + a2[1] - 8)) = v10;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h2cea6af96bed3d53(a2, v10, 0);
        v5 = v4 | -0x100 | 1;
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
