long long uu_cp::platform::linux::copy_on_write::h4f923509b4fe6a3f(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, char a6, unsigned long a7, unsigned long a8, char a9)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long
    char v1;  // [bp-0x58], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x50], Other Possible Types: char
    char v3;  // [bp-0x4e]
    char v4;  // [bp-0x4d]
    char v5;  // [bp-0x4c]
    unsigned long long v6;  // [sp-0x48], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0x40]
    unsigned long v8;  // [bp-0x38], Other Possible Types: char
    char v9;  // [bp-0x38]
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r14
    char v12;  // al
    char v13;  // al
    char v14;  // al
    char v15;  // al
    char v16;  // cl
    char v17;  // cc_dep1
    unsigned long long v18;  // rcx
    char v19;  // cc_dep1
    unsigned long long v20;  // rax
    unsigned long long v22;  // rsi
    void* v23;  // rdi
    unsigned long long v25;  // rsi
    unsigned long long v27;  // rsi
    void* v28;  // rdi
    unsigned long v30;  // rdx

    v10 = a6;
    if (!(char)a5)
    {
        if ((char)v10 == 1)
        {
            v11 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(a1, a2, a3, a4, 0);
            goto LABEL_51382b;
        }
        else
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(a0, "`--reflink=always` can be used only with --sparse=auto", 54);
            return a0;
        }
    }
    if ((unsigned int)a5 != 1)
    {
        if (!(char)v10)
        {
            if (a9)
            {
                if (uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
                {
                    vvar_743{stack -80} = a7;
                    vvar_744{stack -72} = a8;
                    vvar_745{stack -64} = v11;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                    return a0;
                }
                a0->field_8 = 3;
                a0->field_9 = 4;
                a0->field_a = 2;
                a0->field_0 = 13;
                return a0;
            }
            v0 = a1;
            v1 = a2;
            uu_cp::platform::linux::handle_reflink_never_sparse_always::hfd312c6ed6d0a8ea(&v2, a1, a2, a3, a4);
            v13 = v2;
            v9 = v13;
            if (!v13)
            {
                if (!(v5 == 1))
                    goto LABEL_51392b;
                if (std::fs::copy::h82e95226cca79e6a(v0, v1, a3, a4))
                {
                    v25 = v6;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(0, v25);
                    vvar_699{stack -80} = a7;
                    vvar_700{stack -72} = a8;
                    vvar_701{stack -64} = v11;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                    return a0;
                }
                v27 = v6;
                v28 = 0;
            }
            else
            {
LABEL_51392b:
                v20 = uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(v0, v1, a3, a4);
LABEL_513b2a:
                v11 = v20;
                v22 = v6;
                v23 = v9;
                goto LABEL_513b37;
            }
        }
        else
        {
            if ((unsigned int)v10 != 1)
            {
                if (!a9)
                {
                    v1 = a4;
                    v8 = a3;
                    uu_cp::platform::linux::handle_reflink_never_sparse_never::h95a3d86a0846d4cd(&v2, a1, a2);
                    v16 = v2;
                    v0 = v16;
                    v17 = v16;
                    if (std::fs::copy::h82e95226cca79e6a(a1, a2, v8, v1))
                    {
                        v11 = v30;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(v0, v6);
                        v2 = a7;
                        v6 = a8;
                        v7 = v11;
                        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                        return a0;
                    }
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(v0, v6);
                    a0->field_8 = 3;
                    a0->field_9 = 4;
                    a0->field_a = 2;
                    a0->field_0 = 13;
                    return a0;
                }
LABEL_513864:
                if (!uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
                {
                    a0->field_8 = 3;
                    a0->field_9 = 4;
                    a0->field_a = 2;
                    a0->field_0 = 13;
                    return a0;
                }
                vvar_752{stack -80} = a7;
                vvar_753{stack -72} = a8;
                vvar_754{stack -64} = v11;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                return a0;
            }
            if (!(!a9))
                goto LABEL_513864;
            v0 = a1;
            v1 = a2;
            uu_cp::platform::linux::handle_reflink_never_sparse_auto::h6d31da0e17b67b00(&v2, a1, a2, a3, a4);
            v15 = v2;
            v8 = v15;
            if (v15)
            {
LABEL_513aa1:
                if (std::fs::copy::h82e95226cca79e6a(v0, v1, a3, a4))
                {
                    v25 = v6;
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(v8, v25);
                    vvar_725{stack -80} = a7;
                    vvar_726{stack -72} = a8;
                    vvar_727{stack -64} = v11;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                    return a0;
                }
                v27 = v6;
                v28 = v8;
            }
            else
            {
                if (!(v5 == 3))
                    goto LABEL_513aa1;
                v11 = uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(v0, v1, a3, a4);
                v22 = v6;
                v23 = 0;
LABEL_513b37:
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(v23, v22);
                goto LABEL_51382b;
            }
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(v28, v27);
        a0->field_8 = 3;
        a0->field_9 = 4;
        a0->field_a = 2;
        a0->field_0 = 13;
        return a0;
    }
    else
    {
        if (!(char)v10)
        {
            if (!a9)
            {
                v0 = a1;
                v1 = a2;
                uu_cp::platform::linux::handle_reflink_auto_sparse_always::h5f3f09720d2fa6c3(&v2, a1, a2, a3, a4);
                v12 = v2;
                v9 = v12;
                if (!v12)
                {
                    if (!(v5 == 1))
                        goto LABEL_513a45;
                    v20 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(v0, v1, a3, a4, 1);
                    goto LABEL_513b2a;
                }
                else
                {
LABEL_513a45:
                    v20 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(v0, v1, a3, a4, 2);
                    goto LABEL_513b2a;
                }
            }
            else if (uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
            {
                vvar_734{stack -80} = a7;
                vvar_735{stack -72} = a8;
                vvar_736{stack -64} = v11;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                return a0;
            }
        }
        else
        {
            if ((unsigned int)v10 != 1)
            {
                if (!(!a9))
                    goto LABEL_513864;
                uu_cp::platform::linux::handle_reflink_auto_sparse_never::hbf2c8fb4c904c675(&v2, a1, a2);
                v0 = v2;
                v8 = v3;
                v1 = v4;
                v11 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(a1, a2, a3, a4, 1);
                v18 = v0;
                v19 = v18;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(v18 & 4294967295, v6);
LABEL_51382b:
                if (!v11)
                {
                    a0->field_8 = 3;
                    a0->field_9 = 4;
                    a0->field_a = 2;
                    a0->field_0 = 13;
                    return a0;
                }
                vvar_713{stack -80} = a7;
                vvar_714{stack -72} = a8;
                vvar_715{stack -64} = v11;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                return a0;
            }
            else if (!a9)
            {
                v0 = a1;
                v1 = a2;
                uu_cp::platform::linux::handle_reflink_auto_sparse_auto::h1e687e1533235ec7(&v2, a1, a2, a3, a4);
                v14 = v2;
                v9 = v14;
                if (!v14)
                {
                    if (!(v5 == 3))
                        goto LABEL_5139ed;
                    v20 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(v0, v1, a3, a4, 3);
                    goto LABEL_513b2a;
                }
                else
                {
LABEL_5139ed:
                    v20 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(v0, v1, a3, a4, 1);
                    goto LABEL_513b2a;
                }
            }
            else if (uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
            {
                vvar_706{stack -80} = a7;
                vvar_707{stack -72} = a8;
                vvar_708{stack -64} = v11;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                return a0;
            }
        }
        a0->field_8 = 3;
        a0->field_9 = 4;
        a0->field_a = 2;
        a0->field_0 = 13;
        return a0;
    }
}
