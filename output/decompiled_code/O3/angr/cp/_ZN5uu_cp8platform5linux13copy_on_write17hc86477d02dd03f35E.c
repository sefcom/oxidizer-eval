long long uu_cp::platform::linux::copy_on_write::hc86477d02dd03f35(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned long a4, unsigned int a5)
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
            v15 = uu_cp::platform::linux::clone::h376a29d6dd4c16a4(a1, a2, a3, a4, 0, a5);
            goto LABEL_51317c;
        }
        else
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hcb169799d716d029(a0, "`--reflink=always` can be used only with --sparse=auto", 54);
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
                uu_cp::platform::linux::handle_reflink_auto_sparse_always::h7cf6ff54521cdd66(&v2, a1, a2, a3, a4);
                v22 = v2;
                v8 = v22;
                if (!v22)
                {
                    if (!(v5 == 1))
                        goto LABEL_513085;
                    v15 = uu_cp::platform::linux::clone::h376a29d6dd4c16a4(*((long long *)&v0), *((long long *)&v1), v16, v17, 1, v33);
                    goto LABEL_51316a;
                }
                else
                {
LABEL_513085:
                    v15 = uu_cp::platform::linux::clone::h376a29d6dd4c16a4(*((long long *)&v0), *((long long *)&v1), v16, v17, 2, v34);
                    goto LABEL_51316a;
                }
            }
            else if (uu_cp::platform::linux::copy_fifo_contents::h4c9e95944ee10f45(a1, a2, a3, a4))
            {
                vvar_715{stack -80} = *((long long *)&v10);
                vvar_716{stack -72} = *((long long *)&v11);
                vvar_717{stack -64} = v15;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
                return a0;
            }
        }
        else
        {
            if ((unsigned int)v13 != 1)
            {
                if (!(v5 == 1))
                    goto LABEL_512ea4;
                uu_cp::platform::linux::handle_reflink_auto_sparse_never::hf2ed5cf40f1133b6(&v2, a1, a2);
                v0 = v2;
                v8 = v3;
                v1 = v4;
                v15 = uu_cp::platform::linux::clone::h376a29d6dd4c16a4(a1, a2, a3, a4, 1, v27);
                v31 = v0;
                v32 = v31;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::hd42111d9d0174710(v31 & 4294967295, v6);
LABEL_51317c:
                if (v15)
                {
                    v2 = *((long long *)&v10);
                    v6 = *((long long *)&v11);
                    v7 = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
                    return a0;
                }
            }
            else if (!v14)
            {
                *((unsigned long *)&v0) = a1;
                *((unsigned long *)&v1) = a2;
                v20 = a3;
                v21 = a4;
                uu_cp::platform::linux::handle_reflink_auto_sparse_auto::hcd273d41d87967c6(&v2, a1, a2, a3, a4);
                v26 = v2;
                v8 = v26;
                if (!v26)
                {
                    if (!(v5 == 1))
                        goto LABEL_51302d;
                    v15 = uu_cp::platform::linux::clone::h376a29d6dd4c16a4(*((long long *)&v0), *((long long *)&v1), v20, v21, 3, v35);
                    goto LABEL_51316a;
                }
                else
                {
LABEL_51302d:
                    v15 = uu_cp::platform::linux::clone::h376a29d6dd4c16a4(*((long long *)&v0), *((long long *)&v1), v20, v21, 1, v36);
                    goto LABEL_51316a;
                }
            }
            else if (uu_cp::platform::linux::copy_fifo_contents::h4c9e95944ee10f45(a1, a2, a3, a4))
            {
                vvar_743{stack -80} = *((long long *)&v10);
                vvar_744{stack -72} = *((long long *)&v11);
                vvar_745{stack -64} = v15;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
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
                if (uu_cp::platform::linux::copy_fifo_contents::h4c9e95944ee10f45(a1, a2, a3, a4))
                {
                    vvar_735{stack -80} = *((long long *)&v10);
                    vvar_736{stack -72} = *((long long *)&v11);
                    vvar_737{stack -64} = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
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
            uu_cp::platform::linux::handle_reflink_never_sparse_always::hcf3dbdc6287a0978(&v2, a1, a2, a3, a4);
            v25 = v2;
            v8 = v25;
            if (!v25)
            {
                if (!(v5 == 1))
                    goto LABEL_512f6b;
                if (std::fs::copy::h4c70412c53f12830(v0, v1, v18, v19))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::hd579aff4d51380cc(0, v6);
                    vvar_727{stack -80} = *((long long *)&v10);
                    vvar_728{stack -72} = *((long long *)&v11);
                    vvar_729{stack -64} = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
                    return a0;
                }
                v39 = 0;
            }
            else
            {
LABEL_512f6b:
                v15 = uu_cp::platform::linux::sparse_copy::hc4efe0058d4854ab(v0, v1, v18, v19);
LABEL_51316a:
                v37 = v8;
                goto LABEL_513177;
            }
LABEL_5131c8:
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::hd579aff4d51380cc(v39, v6);
        }
        else if ((unsigned int)v13 == 1)
        {
            if (!(v5 == 1))
                goto LABEL_512ea4;
            *((unsigned long *)&v0) = a1;
            *((unsigned long *)&v1) = a2;
            v23 = a3;
            v24 = a4;
            uu_cp::platform::linux::handle_reflink_never_sparse_auto::h0626081b585370ef(&v2, a1, a2, a3, a4);
            v28 = v2;
            v8 = v28;
            if (v28)
            {
LABEL_5130e1:
                if (std::fs::copy::h4c70412c53f12830(v0, v1, v23, v24))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::hd579aff4d51380cc(v8, v6);
                    vvar_708{stack -80} = *((long long *)&v10);
                    vvar_709{stack -72} = *((long long *)&v11);
                    vvar_710{stack -64} = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
                    return a0;
                }
                v39 = v8;
                goto LABEL_5131c8;
            }
            else
            {
                if (!(v5 == 1))
                    goto LABEL_5130e1;
                v15 = uu_cp::platform::linux::sparse_copy_without_hole::had36f8f30408d9e2(v0, v1, v23, v24);
                v37 = 0;
LABEL_513177:
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$uu_cp..CopyDebug$C$uu_cp..platform..linux..CopyMethod$RP$$C$std..io..error..Error$GT$$GT$::hd579aff4d51380cc(v37, v6);
                goto LABEL_51317c;
            }
        }
        else
        {
            if (!v14)
            {
                v1 = a4;
                v8 = a3;
                uu_cp::platform::linux::handle_reflink_never_sparse_never::h6a0107b5f41a72ca(&v2, a1, a2);
                v29 = v2;
                v0 = v29;
                v30 = v29;
                if (std::fs::copy::h4c70412c53f12830(a1, a2, v8, v1))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::hd42111d9d0174710(v0, v6);
                    vvar_701{stack -80} = *((long long *)&v10);
                    vvar_702{stack -72} = *((long long *)&v11);
                    vvar_703{stack -64} = v15;
                    _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
                    return a0;
                }
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_cp..CopyDebug$C$std..io..error..Error$GT$$GT$::hd42111d9d0174710(v0, v6);
                a0->field_8 = 3;
                a0->field_9 = 4;
                a0->field_a = 2;
                a0->field_0 = 13;
                return a0;
            }
LABEL_512ea4:
            if (uu_cp::platform::linux::copy_fifo_contents::h4c9e95944ee10f45(a1, a2, a3, a4))
            {
                vvar_751{stack -80} = *((long long *)&v10);
                vvar_752{stack -72} = *((long long *)&v11);
                vvar_753{stack -64} = v15;
                _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hd4dc71d2843d8bd1(a0, &v2);
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
