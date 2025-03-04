long long uu_uniq::Uniq::cmp_key::ha1dc2d98ed65ef9e(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v4[3];  // [bp-0x30]
    char v5;  // [bp-0x28]
    char v6;  // [bp-0x20]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx
    void* v11;  // rdx
    unsigned int v12;  // eax

    uu_uniq::Uniq::skip_fields::hde61277d301acf25(v4, *((long long *)&a0->field_0), *((long long *)&a0->field_8), a1, a2);
    v8 = *((long long *)&v6);
    v9 = a0->field_20;
    if (a0->field_10)
    {
        v10 = v8;
        if (v9)
            v10 = a0->field_28;
        if (!v8)
        {
            v0 = *((long long *)&v5);
            v1 = v8 + v0;
            v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530318);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        v11 = a0->field_18;
        if (!a0->field_34)
        {
            if (v11)
            {
                v0 = *((long long *)&v5);
                v1 = v8 + v0;
                v2 = v11;
                v3 = v10;
                v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530350);
                ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
                return v12;
            }
        }
        else
        {
LABEL_4bd106:
            if (v11)
            {
                vvar_266{stack -80} = *((long long *)&v5);
                vvar_267{stack -72} = v8 + v0;
                vvar_268{stack -64} = 0;
                vvar_269{stack -56} = v10;
                uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530430);
                ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
                return v12;
            }
            goto LABEL_4bd10b;
        }
    }
    else if (v9)
    {
        if (!v8)
        {
            vvar_248{stack -80} = *((long long *)&v5);
            vvar_249{stack -72} = v8 + v0;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530318);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        v10 = a0->field_28;
        if (a0->field_34)
        {
            v11 = 0;
            goto LABEL_4bd106;
        }
    }
    else
    {
        if (!v8)
        {
            vvar_240{stack -80} = *((long long *)&v5);
            vvar_241{stack -72} = v8 + v0;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530318);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        else if (!a0->field_34)
        {
            v0 = *((long long *)&v5);
            v1 = v8 + v0;
            v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530318);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        else
        {
            v10 = v8;
            if (false)
            {
                v0 = *((long long *)&v5);
                v1 = v8 + v0;
                v2 = 0;
                v3 = v10;
                v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530430);
                ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
                return v12;
            }
        }
LABEL_4bd10b:
        if (v10 != v8)
        {
            vvar_278{stack -80} = *((long long *)&v5);
            vvar_279{stack -72} = v8 + v0;
            vvar_280{stack -64} = 0;
            vvar_281{stack -56} = v10;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530430);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        v0 = *((long long *)&v5);
        v1 = v8 + v0;
        v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_5303f8);
        ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
        return v12;
    }
    if (v10 == v8)
    {
        vvar_256{stack -80} = *((long long *)&v5);
        vvar_257{stack -72} = v8 + v0;
        uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530318);
        ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
        return v12;
    }
    vvar_290{stack -80} = *((long long *)&v5);
    vvar_291{stack -72} = v8 + v0;
    vvar_292{stack -64} = v11;
    vvar_293{stack -56} = v10;
    uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(a3, a4, &v0, &g_530350);
    ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
    return v12;
}
