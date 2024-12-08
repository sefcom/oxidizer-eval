long long uu_cp::copy_helper::h7bbc8d243cde7c5e(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, struct_0 *a5)
{
    char v0;  // [bp-0xd8]
    char v1;  // [bp-0xc0]
    int v2;  // [sp-0xb8]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xae]
    char v5;  // [bp-0xad]
    unsigned long long v6;  // [sp-0xa8]
    char v7;  // [bp-0x9d]
    char v8;  // [bp-0x98]
    char v9;  // [bp-0x8d]
    char v10;  // [bp-0x88]
    char v11;  // [bp-0x80]
    char v12;  // [bp-0x78], Other Possible Types: unsigned short
    char v13;  // [sp-0x76]
    char v14;  // [bp-0x68]
    unsigned long v15;  // [bp-0x60], Other Possible Types: unsigned short
    char v16;  // [sp-0x5e]
    unsigned long long v17;  // [sp-0x58]
    unsigned long long v18;  // [sp-0x50]
    unsigned int v19;  // [sp-0x48]
    char v20;  // [bp-0x40]
    char v21;  // [bp-0x3c]
    char v22;  // [bp-0x38]
    unsigned long long v23;  // [bp+0x8]
    char v24;  // [bp+0x10]
    char v25;  // [bp+0x18]
    char v26;  // [bp+0x20]
    char v27;  // [bp+0x28]
    unsigned long long v29;  // 4096
    unsigned long long v31;  // 4096
    unsigned long long v32;  // rax
    unsigned long long v33;  // rcx
    unsigned int v34;  // ebp
    int v35;  // xmm1
    int v36;  // xmm2
    int v37;  // xmm0
    int v38;  // xmm1

    if (a5->field_44)
    {
        v32 = std::fs::create_dir_all::h6307d066961f6a5d(v31, v29, v29);
        if (v32)
        {
            a0->field_0 = 2;
            *((unsigned long long *)&a0->field_8) = v32;
            return v32;
        }
    }
    if ((char)uucore::features::fs::path_ends_with_terminator::h549c510c97c77e48(a3, a4) && !(char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
    {
        v32 = std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&a0->field_8, a3, a4);
        a0->field_0 = 12;
        return v32;
    }
    if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hd780f7caa8fc386f(a1, a2, "/dev/nullcannot create fifo : File exists is not a directory", 9))
    {
        std::fs::File::create::h0ca0a1fa85a158e4(&v20, a3, a4);
        v15 = a3;
        v17 = a4;
        ::0x4fb410::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4e88d462e02f0a87(&v12, &v15);
        v6 = *((long long *)&v14);
        *((int128_t *)&v2) = *((int128_t *)&v12);
        if (!*((int *)&v20))
        {
            v34 = *((int *)&v21);
            core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$std..fs..File$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2a2ba3bf3129f77c(&v2);
        }
        else
        {
            v32 = *((long long *)&v22);
            v33 = (long long)v2;
            v34 = (int)(&v2)[8];
            v18 = (long long)(&v2)[12];
            v19 = *((int *)((char *)&v6 + 4));
            if (v33 != 0x8000000000000000)
            {
                *((unsigned int *)((char *)&a0->field_b + 12)) = v19;
                *((unsigned long long *)((char *)&a0->field_b + 4)) = v18;
                a0->field_0 = 3;
                *((unsigned long long *)&a0->field_8) = v33;
                *((unsigned int *)&a0->field_b) = v34;
                a0->field_14 = v32;
                return v32;
            }
        }
        v32 = ::0x4fbaa0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h41fb0b354a80bd06(v34);
    }
    else if (!(!v26 || !a5->field_46 || *((char *)&a5->field_3c + 3)))
    {
        v32 = uu_cp::copy_fifo::h6bb6769ca812a913(&v2, a3, a4, a5->field_3c, a5->field_47);
        if ((int)v2 != 13)
        {
            vvar_386{reg 256} = *((int128_t *)&v6);
            vvar_387{reg 288} = *((int128_t *)&v8);
            a0->field_1b = *((int128_t *)&v10);
            *((void*)&a0->field_14) = v36;
            *((void*)&a0->field_b) = v35;
            *((void*)&a0->field_0) = v2;
            return v32;
        }
    }
    else if (!v25)
    {
        uu_cp::platform::linux::copy_on_write::hc86477d02dd03f35(&v2, a1, a2, a3, a4, a5->field_4b, v0, v23, *((long long *)&v24), v1);
        v32 = (long long)v2;
        v12 = *((short *)&v3);
        v13 = v4;
        if (v32 != 13)
        {
            *((long long *)((char *)&a0->field_1b + 8)) = *((long long *)&v11);
            v37 = *((int128_t *)&v5);
            v38 = *((int128_t *)&v7);
            *((int128_t *)((char *)&(&a0->field_14)[1] + 3)) = *((int128_t *)&v9);
            *((void*)((char *)&a0->field_b + 11)) = v38;
            *((void*)&(&a0->padding_a)[1]) = v37;
            a0->padding_a[0] = v13;
            a0->field_8 = v12;
            a0->field_0 = v32;
            return v32;
        }
        v15 = v12;
        v32 = v13;
        v16 = v32;
        if (!*((char *)&a5->field_3c + 2) && a5->field_47)
            v32 = uu_cp::show_debug::h0937e0d1dcfd424d(&v15);
    }
    else
    {
        v32 = uu_cp::copy_link::h5de0af9a5e6f78e7(&v2, a1, a2, a3, a4, *((long long *)&v27));
        if ((int)v2 != 13)
        {
            v35 = *((int128_t *)&v6);
            v36 = *((int128_t *)&v8);
            a0->field_1b = *((int128_t *)&v10);
            *((void*)&a0->field_14) = v36;
            *((void*)&a0->field_b) = v35;
            *((void*)&a0->field_0) = v2;
            return v32;
        }
    }
    a0->field_0 = 13;
    return v32;
}
