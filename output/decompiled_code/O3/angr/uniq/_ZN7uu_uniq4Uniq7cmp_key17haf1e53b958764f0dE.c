long long uu_uniq::Uniq::cmp_key::haf1e53b958764f0d(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
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
    unsigned long long v10;  // rax
    unsigned long long v12;  // rcx
    void* v13;  // rdx
    unsigned int v14;  // eax
    unsigned long long v16;  // rcx

    uu_uniq::Uniq::skip_fields::h4af556166553510c(v4, *((long long *)&a0->field_0), *((long long *)&a0->field_8), a1, a2);
    v8 = *((long long *)&v6);
    v9 = a0->field_20;
    if (a0->field_10)
    {
        v12 = v10;
        if (!v8)
        {
            v0 = *((long long *)&v5);
            v1 = v8 + v0;
            v14 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
            ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
            return v14;
        }
        v13 = a0->field_18;
        if (!a0->field_34)
        {
            if (v13)
            {
                v0 = *((long long *)&v5);
                v1 = v8 + v0;
                v2 = v13;
                v3 = v16;
                v14 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
                ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
                return v14;
            }
        }
        else
        {
LABEL_4bcec6:
            if (v13)
            {
                vvar_274{stack -80} = *((long long *)&v5);
                vvar_275{stack -72} = v8 + v0;
                vvar_276{stack -64} = 0;
                vvar_277{stack -56} = v12;
                uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
                ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
                return v14;
            }
            goto LABEL_4bcecb;
        }
    }
    else if (v9)
    {
        if (!v8)
        {
            vvar_256{stack -80} = *((long long *)&v5);
            vvar_257{stack -72} = v8 + v0;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
            ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
            return v14;
        }
        v12 = a0->field_28;
        if (a0->field_34)
        {
            v13 = 0;
            goto LABEL_4bcec6;
        }
    }
    else
    {
        if (!v8)
        {
            vvar_248{stack -80} = *((long long *)&v5);
            vvar_249{stack -72} = v8 + v0;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
            ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
            return v14;
        }
        else if (!a0->field_34)
        {
            v0 = *((long long *)&v5);
            v1 = v8 + v0;
            v14 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
            ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
            return v14;
        }
        else
        {
            v12 = v8;
            if (false)
            {
                v0 = *((long long *)&v5);
                v1 = v8 + v0;
                v2 = 0;
                v3 = v12;
                v14 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
                ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
                return v14;
            }
        }
LABEL_4bcecb:
        if (v12 != v8)
        {
            vvar_286{stack -80} = *((long long *)&v5);
            vvar_287{stack -72} = v8 + v0;
            vvar_288{stack -64} = 0;
            vvar_289{stack -56} = v12;
            uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
            ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
            return v14;
        }
        v0 = *((long long *)&v5);
        v1 = v8 + v0;
        v14 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
        ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
        return v14;
    }
    if (v12 == v8)
    {
        vvar_264{stack -80} = *((long long *)&v5);
        vvar_265{stack -72} = v8 + v0;
        uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
        ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
        return v14;
    }
    vvar_298{stack -80} = *((long long *)&v5);
    vvar_299{stack -72} = v8 + v0;
    vvar_300{stack -64} = v13;
    vvar_301{stack -56} = v16;
    uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h22a6b7d756c850ec(a3, a4, &v0);
    ::0x4bb400::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h698f364d84f6a0a4(v4);
    return v14;
}
