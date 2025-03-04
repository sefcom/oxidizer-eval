long long uu_uniq::Uniq::cmp_key::h221e6e281cb7d070(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x40]
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v3;  // [sp-0x30]
    unsigned long long v4[3];  // [bp-0x28]
    char v5;  // [bp-0x20]
    char v6;  // [bp-0x18]
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
            v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530318);
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
                v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530350);
                ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
                return v12;
            }
        }
        else
        {
LABEL_4bcf51:
            if (v11)
            {
                vvar_255{stack -72} = *((long long *)&v5);
                vvar_256{stack -64} = v8 + v0;
                vvar_257{stack -56} = 0;
                vvar_258{stack -48} = v10;
                uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_5303c0);
                ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
                return v12;
            }
            goto LABEL_4bcf56;
        }
    }
    else if (v9)
    {
        if (!v8)
        {
            vvar_237{stack -72} = *((long long *)&v5);
            vvar_238{stack -64} = v8 + v0;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530318);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        v10 = a0->field_28;
        if (a0->field_34)
        {
            v11 = 0;
            goto LABEL_4bcf51;
        }
    }
    else
    {
        if (!v8)
        {
            vvar_229{stack -72} = *((long long *)&v5);
            vvar_230{stack -64} = v8 + v0;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530318);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        else if (!a0->field_34)
        {
            v0 = *((long long *)&v5);
            v1 = v8 + v0;
            v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530318);
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
                v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_5303c0);
                ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
                return v12;
            }
        }
LABEL_4bcf56:
        if (v10 != v8)
        {
            vvar_267{stack -72} = *((long long *)&v5);
            vvar_268{stack -64} = v8 + v0;
            vvar_269{stack -56} = 0;
            vvar_270{stack -48} = v10;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_5303c0);
            ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
            return v12;
        }
        v0 = *((long long *)&v5);
        v1 = v8 + v0;
        v12 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530388);
        ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
        return v12;
    }
    if (v10 == v8)
    {
        vvar_245{stack -72} = *((long long *)&v5);
        vvar_246{stack -64} = v8 + v0;
        uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530318);
        ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
        return v12;
    }
    vvar_279{stack -72} = *((long long *)&v5);
    vvar_280{stack -64} = v8 + v0;
    vvar_281{stack -56} = v11;
    vvar_282{stack -48} = v10;
    uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(a3, &v0, &g_530350);
    ::0x4bb490::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(v4);
    return v12;
}
