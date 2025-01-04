long long uu_cp::platform::linux::copy_on_write::h4f923509b4fe6a3f(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long a4, unsigned int a5)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned int, unsigned long long
    char v1;  // [bp-0x58], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v2;  // [bp-0x50], Other Possible Types: char
    char v3;  // [bp-0x4e]
    char v4;  // [bp-0x4d]
    char v5;  // [bp-0x4c]
    unsigned long long v6;  // [sp-0x48]
    unsigned long long v7;  // [sp-0x40]
    unsigned long long v8;  // [bp-0x38], Other Possible Types: char
    unsigned long v9;  // [bp+0x8]
    char v10;  // [bp+0x10]
    char v11;  // [bp+0x18]
    char v12;  // [bp+0x20]
    unsigned long long v13;  // rdi
    char v14;  // al
    unsigned long long v15;  // rax
    unsigned long long v16;  // r14
    unsigned long v17;  // r15
    unsigned long long v18;  // r14
    unsigned long long v19;  // r15
    unsigned long long v20;  // r14
    unsigned long v21;  // r15
    char v22;  // al
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    char v25;  // al
    char v26;  // al
    unsigned int v27;  // r9
    char v28;  // al
    char v29;  // cl
    char v30;  // cc_dep1
    unsigned long long v31;  // rcx
    char v32;  // cc_dep1
    unsigned int v33;  // r9
    unsigned int v34;  // r9
    unsigned int v35;  // r9
    unsigned int v36;  // r9
    void* v37;  // rdi
    void* v39;  // rdi

    v13 = (char)v9;
    if (!(char)a5)
    {
        if ((char)v13 == 1)
        {
            v15 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(a1, a2, a3, a4, 0, a5);
            goto LABEL_513b3c;
        }
        else
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(a0, "`--reflink=always` can be used only with --sparse=auto", 54);
            return a0;
        }
    }
    v14 = v12;
    if (a5 == 1)
    {
        if (!(char)v13)
        {
            if (!v14)
            {
                *((unsigned long *)&v0) = a1;
                *((unsigned long *)&v1) = a2;
                v16 = a3;
                v17 = a4;
                uu_cp::platform::linux::handle_reflink_auto_sparse_always::h5f3f09720d2fa6c3(&v2, a1, a2, a3, a4);
                v22 = v2;
                v8 = v22;
                if (!v22)
                {
                    if (!(v5 == 1))
                        goto LABEL_513a45;
                    v15 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(*((long long *)&v0), *((long long *)&v1), v16, v17, 1, v33);
                    goto LABEL_513b2a;
                }
                else
                {
LABEL_513a45:
                    v15 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(*((long long *)&v0), *((long long *)&v1), v16, v17, 2, v34);
                    goto LABEL_513b2a;
                }
            }
            else if (uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
            {
                vvar_715{stack -80} = *((long long *)&v10);
                vvar_716{stack -72} = *((long long *)&v11);
                vvar_717{stack -64} = v15;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                return a0;
            }
        }
        else
        {
            if ((unsigned int)v13 != 1)
            {
                if (!(v5 == 1))
                    goto LABEL_513864;
                uu_cp::platform::linux::handle_reflink_auto_sparse_never::hbf2c8fb4c904c675(&v2, a1, a2);
                v0 = v2;
                v8 = v3;
                v1 = v4;
                v15 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(a1, a2, a3, a4, 1, v27);
                v31 = v0;
                v32 = v31;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(v31 & 4294967295, v6);
LABEL_513b3c:
                if (v15)
                {
                    v2 = *((long long *)&v10);
                    v6 = *((long long *)&v11);
                    v7 = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                    return a0;
                }
            }
            else if (!v14)
            {
                *((unsigned long *)&v0) = a1;
                *((unsigned long *)&v1) = a2;
                v20 = a3;
                v21 = a4;
                uu_cp::platform::linux::handle_reflink_auto_sparse_auto::h1e687e1533235ec7(&v2, a1, a2, a3, a4);
                v26 = v2;
                v8 = v26;
                if (!v26)
                {
                    if (!(v5 == 1))
                        goto LABEL_5139ed;
                    v15 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(*((long long *)&v0), *((long long *)&v1), v20, v21, 3, v35);
                    goto LABEL_513b2a;
                }
                else
                {
LABEL_5139ed:
                    v15 = uu_cp::platform::linux::clone::hdce2a0051aad38c1(*((long long *)&v0), *((long long *)&v1), v20, v21, 1, v36);
                    goto LABEL_513b2a;
                }
            }
            else if (uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
            {
                vvar_743{stack -80} = *((long long *)&v10);
                vvar_744{stack -72} = *((long long *)&v11);
                vvar_745{stack -64} = v15;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                return a0;
            }
        }
    }
    else
    {
        if (!(char)v13)
        {
            if (v14)
            {
                if (uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
                {
                    vvar_735{stack -80} = *((long long *)&v10);
                    vvar_736{stack -72} = *((long long *)&v11);
                    vvar_737{stack -64} = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                    return a0;
                }
                a0->field_8 = 3;
                a0->field_9 = 4;
                a0->field_a = 2;
                a0->field_0 = 13;
                return a0;
            }
            *((unsigned long *)&v0) = a1;
            *((unsigned long *)&v1) = a2;
            v18 = a3;
            v19 = a4;
            uu_cp::platform::linux::handle_reflink_never_sparse_always::hfd312c6ed6d0a8ea(&v2, a1, a2, a3, a4);
            v25 = v2;
            v8 = v25;
            if (!v25)
            {
                if (!(v5 == 1))
                    goto LABEL_51392b;
                if (std::fs::copy::h82e95226cca79e6a(v0, v1, v18, v19))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(0, v6);
                    vvar_727{stack -80} = *((long long *)&v10);
                    vvar_728{stack -72} = *((long long *)&v11);
                    vvar_729{stack -64} = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                    return a0;
                }
                v39 = 0;
            }
            else
            {
LABEL_51392b:
                v15 = uu_cp::platform::linux::sparse_copy::ha5f85eebd4c718f5(v0, v1, v18, v19);
LABEL_513b2a:
                v37 = v8;
                goto LABEL_513b37;
            }
LABEL_513b88:
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(v39, v6);
        }
        else if ((unsigned int)v13 == 1)
        {
            if (!(v5 == 1))
                goto LABEL_513864;
            *((unsigned long *)&v0) = a1;
            *((unsigned long *)&v1) = a2;
            v23 = a3;
            v24 = a4;
            uu_cp::platform::linux::handle_reflink_never_sparse_auto::h6d31da0e17b67b00(&v2, a1, a2, a3, a4);
            v28 = v2;
            v8 = v28;
            if (v28)
            {
LABEL_513aa1:
                if (std::fs::copy::h82e95226cca79e6a(v0, v1, v23, v24))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(v8, v6);
                    vvar_708{stack -80} = *((long long *)&v10);
                    vvar_709{stack -72} = *((long long *)&v11);
                    vvar_710{stack -64} = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                    return a0;
                }
                v39 = v8;
                goto LABEL_513b88;
            }
            else
            {
                if (!(v5 == 1))
                    goto LABEL_513aa1;
                v15 = uu_cp::platform::linux::sparse_copy_without_hole::h5128473705372174(v0, v1, v23, v24);
                v37 = 0;
LABEL_513b37:
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::ha7a49f29e481f844(v37, v6);
                goto LABEL_513b3c;
            }
        }
        else
        {
            if (!v14)
            {
                v1 = a4;
                v8 = a3;
                uu_cp::platform::linux::handle_reflink_never_sparse_never::h95a3d86a0846d4cd(&v2, a1, a2);
                v29 = v2;
                v0 = v29;
                v30 = v29;
                if (std::fs::copy::h82e95226cca79e6a(a1, a2, v8, v1))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::h667acd789a27d2af(v0, v6);
                    vvar_701{stack -80} = *((long long *)&v10);
                    vvar_702{stack -72} = *((long long *)&v11);
                    vvar_703{stack -64} = v15;
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
            if (uu_cp::platform::linux::copy_fifo_contents::he2d8ed4668670194(a1, a2, a3, a4))
            {
                vvar_751{stack -80} = *((long long *)&v10);
                vvar_752{stack -72} = *((long long *)&v11);
                vvar_753{stack -64} = v15;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(a0, &v2);
                return a0;
            }
        }
    }
    a0->field_8 = 3;
    a0->field_9 = 4;
    a0->field_a = 2;
    a0->field_0 = 13;
    return a0;
}
