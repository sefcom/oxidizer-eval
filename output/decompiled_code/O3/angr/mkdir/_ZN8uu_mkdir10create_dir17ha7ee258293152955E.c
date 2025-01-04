long long uu_mkdir::create_dir::ha7ee258293152955(struct struct_0 **a0, unsigned long long a1, char a2, unsigned int a3, char a4, unsigned int a5)
{
    unsigned int v0;  // [sp-0x168]
    struct struct_0 **v1;  // [sp-0x160]
    unsigned long long v2;  // [sp-0x158]
    unsigned long v3;  // [sp-0x150], Other Possible Types: unsigned long long
    struct struct_0 **v4;  // [sp-0x148]
    struct struct_0 **v5;  // [sp-0x140]
    unsigned long long v6;  // [sp-0x138]
    char *v7;  // [sp-0x130]
    unsigned long long v8;  // [sp-0x128]
    char v9;  // [bp-0x120], Other Possible Types: unsigned long long
    struct struct_0 **v10;  // [sp-0x118]
    unsigned long long v11;  // [sp-0x110]
    char v12;  // [bp-0x108], Other Possible Types: unsigned int
    char v13;  // [bp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v14;  // [sp-0xd8], Other Possible Types: unsigned long long
    struct struct_0 **v15;  // [sp-0xd0]
    unsigned int v16;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v17;  // [sp-0xc0]
    unsigned long long v19;  // r13
    unsigned long long v20;  // rsi
    void* v21;  // r13
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rcx
    unsigned long long v24;  // r8
    unsigned long long v25;  // r9
    unsigned long long v26;  // rbx
    struct struct_0 **v27;  // r14
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdi
    unsigned long long v32;  // rsi
    unsigned int v33;  // r15d

    v0 = a3;
    std::fs::metadata::hde9f2ae1e0e2ce8d(&v13, a0, a1);
    v19 = v13;
    v20 = v14;
    if (v19 == 2)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hda5a6707fa3c012c(2, v20);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hda5a6707fa3c012c(v19, v20);
        if (!a2)
        {
            v5 = a0;
            v6 = a1;
            v1 = &v5;
            v2 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76;
            v13 = &g_5205e8;
            v14 = 2;
            v17 = 0;
            v15 = &v1;
            v16 = 1;
            ::0x4b1e60::core::option::Option$LT$T$GT$::map_or_else::h6db0321d2b87c404(&v9, &v13);
            v12 = 1;
            v21 = alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&v9);
            return v21;
        }
    }
    v3 = v19;
    v4 = a0;
    std::path::Path::components::h4f3217acf0fc8653(&v9, a0, a1);
    std::path::Path::components::h4f3217acf0fc8653(&v13, 1, 0);
    if ((char)::0x4b1fe0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v9, &v13, v22, v23, v24, v25))
        return 0;
    v26 = a1;
    v27 = v4;
    if (a2)
    {
        v28 = std::path::Path::parent::h65c9a340a6266f2d(v27, v26, v22, v23);
        if (!v28)
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(&v13, "failed to create whole tree: created directory ", 27);
            v16 = 1;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h71810d9408842807(alloc::boxed::Box$LT$T$GT$::new::h121d1d0fd1fc2533(&v13), &g_520578);
        }
        else
        {
            v21 = uu_mkdir::create_dir::ha7ee258293152955(v28, v22, 1, (char)v0, 1, a5);
            if (v21)
                return v21;
        }
    }
    v30 = std::fs::create_dir::h301da8cdba059b54(v27, v26, v29);
    if (!v30)
    {
        if ((char)v0)
        {
            v1 = uucore::util_name::h60d842bf27b05e82();
            v2 = v22;
            v9 = 1;
            v10 = v27;
            v11 = v26;
            v12 = 1;
            v5 = &v1;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
            v7 = &v9;
            v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v13 = &g_520608;
            v14 = 3;
            v17 = 0;
            v15 = &v5;
            v16 = 2;
            std::io::stdio::_print::he918bceb0c89db46(&v13, v32, v22);
        }
        v33 = a5;
        if ((int)v3 == 2)
        {
            if (a4)
                v33 = (int)uucore::features::mode::get_umask::hd2aa58752ad993fa() & 319 ^ 511;
            v33 |= (int)uucore::features::fsxattr::get_acl_perm_bits_from_xattr::h877432bdc0435850(v27, v26);
        }
        v21 = uu_mkdir::chmod::hedcae91ac0dc9632(v27, v26, v33);
    }
    else
    {
        v31 = v30;
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(v27, v26))
        {
            ::0x4b1200::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3ed53d85887f0f2d(v31);
            return 0;
        }
        v21 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v31);
    }
    return v21;
}
