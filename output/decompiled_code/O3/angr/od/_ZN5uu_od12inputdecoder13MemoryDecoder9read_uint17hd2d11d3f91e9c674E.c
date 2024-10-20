long long uu_od::inputdecoder::MemoryDecoder::read_uint::hd2d11d3f91e9c674(struct_2 *a0, char *a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x38]
    unsigned long v3;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x28]
    unsigned long long v5;  // [sp-0x20]
    unsigned long long v6;  // [sp-0x18]
    void* v7;  // [sp-0x10]
    struct_0 *v9;  // rcx
    struct_0 *v10;  // rdx
    struct_0 *v11;  // rdx
    struct_0 *v12;  // rdx
    unsigned int v13;  // ecx
    char *v14;  // rax
    unsigned int v15;  // ecx
    char *v16;  // rax
    unsigned int v17;  // ecx
    unsigned int v19;  // eax
    unsigned short v20;  // ax

    v0 = a2;
    switch (a2)
    {
    case 1:
        v9 = a0->field_0;
        if (v9->field_10 > a1)
            return *((char *)(v9->field_8 + a1));
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    case 2:
        if (a1 > -3)
        {
            goto LABEL_49d608;
        }
        else
        {
            v12 = a0->field_0;
            if (a1 + 2 > v12->field_10)
            {
                break;
            }
            else
            {
                switch (v17)
                {
                case 1:
                    v20 = *((short *)(v12->field_8 + a1));
                    break;
                default:
                    break;
                }
                return __ROL__(v20, 8);
            }
        }
    case 4:
        if (a1 <= -5)
        {
            v10 = a0->field_0;
            if (a1 + 4 > v10->field_10)
            {
                break;
            }
            else
            {
                v14 = v10->field_8;
                switch (v13)
                {
                case 1:
                    v19 = __buildin_bswap32(*((int *)(v14 + a1)));
                    return v19;
                default:
                    v19 = *((int *)(v14 + a1));
                    return v19;
                }
            }
        }
        else
        {
LABEL_49d608:
            core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
        }
    case 8:
        if (a1 > -9)
        {
            goto LABEL_49d608;
        }
        else
        {
            v11 = a0->field_0;
            if (a1 + 8 > v11->field_10)
            {
                break;
            }
            else
            {
                v16 = v11->field_8;
                switch (v15)
                {
                case 1:
                    return (((((*((long long *)(v16 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v16 + a1)) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((long long *)(v16 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v16 + a1)) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((*((long long *)(v16 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v16 + a1)) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((long long *)(v16 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v16 + a1)) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
                default:
                    return *((long long *)(v16 + a1));
                }
            }
        }
    default:
        v1 = &v0;
        v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
        v3 = &g_5034c0;
        v4 = 1;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
    }
    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
}
