long long uu_od::inputdecoder::MemoryDecoder::read_float::h9301087561881b16(struct_2 *a0, unsigned short *a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    unsigned long v3;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x30]
    unsigned long long v5;  // [sp-0x28]
    unsigned long long v6;  // [sp-0x20]
    void* v7;  // [sp-0x18]
    struct_0 *v9;  // rdx
    struct_0 *v10;  // rdx
    unsigned short *v12;  // rax
    struct_0 *v13;  // rdx
    unsigned short *v15;  // rax
    unsigned int v16;  // ecx
    unsigned short *v17;  // rax
    unsigned long long v18;  // rbx
    unsigned short v19;  // bx
    unsigned int v20;  // ebx
    unsigned long long v21;  // rax
    unsigned short *v22;  // rcx
    unsigned short *v23;  // rbx

    v0 = a2;
    if (a2 == 2)
    {
        if (a1 > -3)
        {
            goto LABEL_49d8df;
        }
        else
        {
            v9 = a0->field_0;
            if (a1 + 1 <= v9->field_10)
            {
                v12 = v9->field_8;
                if (!a0->field_18 || a0->field_18 != 1)
                {
                    v20 = *((short *)(v12 + a1));
                }
                else
                {
                    v18 = *((short *)(v12 + a1));
                    v19 = __ROL__((unsigned short)v18, 8);
                    v20 = v18 | -0x10000 | v19;
                }
                v21 = _ZN10std_detect6detect5cache5CACHE17hd60da8ebd6d34d77E;
                if (!v21)
                {
                    if (((char)(std_detect::detect::cache::detect_and_initialize::h71a67ad18e54b9ed(a0, a1, v9) >> 35) & 1))
                        ::0x49d330::half::binary16::arch::x86::f16_to_f32_x86_f16c::hc415930ff6077996(v20); /* do not return */
                }
                else
                {
                    if (((char)(v21 >> 35) & 1))
                        ::0x49d330::half::binary16::arch::x86::f16_to_f32_x86_f16c::hc415930ff6077996(v20); /* do not return */
                }
                if (!((unsigned short)v20 & 32767))
                {
                    v17 = v19 * 0x1000000000000;
                    return v17;
                }
                v22 = v20 & 0x7c00;
                v23 = v20 & 1023;
                v17 = (v20 & 0x8000) * 0x1000000000000;
                if ((unsigned int)v22 != 0x7c00)
                {
                    if ((unsigned short)v22)
                        return v17;
                }
                else
                {
                    if (v23)
                    {
                        v17 |= v23 * 0x40000000000;
                    }
                    else
                    {
                        v17 |= 0x7ff0000000000000;
                        return v17;
                    }
                }
                return v17;
            }
        }
    }
    else
    {
        if (a2 != 4)
        {
            if (a2 != 8)
            {
                v1 = &v0;
                v2 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                v3 = &g_5034c0;
                v4 = 1;
                v7 = 0;
                v5 = &v1;
                v6 = 1;
                core::panicking::panic_fmt::he12d0d7468628bb4(&v3); /* do not return */
            }
            if (a1 > -9)
            {
LABEL_49d8df:
                core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
            }
            v13 = a0->field_0;
            if (a1 + 4 <= v13->field_10)
            {
                v16 = a0->field_18;
                v17 = v13->field_8;
                if (!(v16 != 2 && v16 == 1))
                    return v17;
                v17 = (((((*((long long *)(v17 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v17 + a1)) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((long long *)(v17 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v17 + a1)) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((*((long long *)(v17 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v17 + a1)) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((long long *)(v17 + a1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v17 + a1)) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
                return v17;
            }
        }
        else if (a1 > -5)
        {
            goto LABEL_49d8df;
        }
        else
        {
            v10 = a0->field_0;
            if (a1 + 2 <= v10->field_10)
            {
                v15 = v10->field_8;
                if (a0->field_18 == 2 || a0->field_18 != 1)
                    v17 = *((int *)(v15 + a1));
                else
                    v17 = __buildin_bswap32(*((int *)(v15 + a1)));
                return v17;
            }
        }
    }
    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
}
