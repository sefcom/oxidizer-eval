long long uu_rm::remove::ha4133918b1aa389d(unsigned long a0, unsigned long a1, char a2[7])
{
    unsigned int v0;  // [sp-0x16c]
    unsigned long long v1;  // [sp-0x168]
    unsigned int v2;  // [sp-0x15c]
    char *v3;  // [sp-0x150]
    unsigned long long v4;  // [sp-0x148]
    unsigned long v5;  // [sp-0x140]
    unsigned long long v6;  // [sp-0x138]
    unsigned long v7;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x128]
    unsigned long long v9;  // [sp-0x120]
    char v10;  // [sp-0x118]
    unsigned long v11;  // [sp-0x110]
    unsigned long long v12;  // [sp-0x108]
    struct struct_0 **v13;  // [sp-0x100]
    unsigned long long v14;  // [sp-0xf8]
    void* v15;  // [sp-0xf0]
    char v16;  // [bp-0xe0]
    char v17;  // [bp-0xd8]
    char v18;  // [bp-0xa8]
    unsigned long long v20[2];  // rax
    unsigned int v21;  // edx
    void* v23;  // rbp, Other Possible Types: unsigned long long
    unsigned long long v24;  // r13
    unsigned long long v25;  // r15
    char v26;  // al
    unsigned long long v27;  // r12
    unsigned long long v28;  // rbx
    char v29;  // al
    unsigned long v30;  // rdx

    v5 = a0;
    v6 = a1 * 16 + a0;
    v20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&v5);
    if (!v20)
    {
        v23 = 0;
    }
    else
    {
        v21 = a2[5];
        if (!a2[0])
        {
            v23 = 0;
            v0 = v21;
            v2 = a2[6];
            do
            {
                v27 = v20[0];
                v28 = v20[1];
                std::fs::symlink_metadata::h9e12b59fb6df20f8(&v16, v27, v28);
                if (*((int *)&v16) != 2)
                {
                    v29 = ((*((int *)&v18) & 0xf000) == 0x4000 ? (char)uu_rm::handle_dir::h040a6908c8ea150b(v27, v28, a2) : (char)uu_rm::remove_file::hfb41d07f759de271(v27, v28, v0, v2));
                }
                else
                {
                    v1 = *((long long *)&v17);
                    v7 = uucore::util_name::h60d842bf27b05e82();
                    v8 = v30;
                    v3 = &v7;
                    v4 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    v11 = &g_527970;
                    v12 = 2;
                    v15 = 0;
                    v13 = &v3;
                    v14 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v11);
                    v7 = 1;
                    v8 = v27;
                    v9 = v28;
                    v10 = 1;
                    v3 = &v7;
                    v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v11 = &g_527990;
                    v12 = 2;
                    v15 = 0;
                    v13 = &v3;
                    v14 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v11);
                    v29 = ::0x4b54d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&v1) & 0xffffffffffffff00 | 1;
                }
            } while ((v23 = v23 & 0xffffffffffffff00 | (unsigned long long)((char)v23 | v29), v20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&v5), v20));
        }
        else
        {
            v23 = 0;
            v0 = v21;
            do
            {
                v24 = v20[0];
                v25 = v20[1];
                std::fs::symlink_metadata::h9e12b59fb6df20f8(&v16, v24, v25);
                if (*((int *)&v16) == 2)
                {
                    v1 = *((long long *)&v17);
                    ::0x4b54d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&v1);
                    v26 = 0;
                }
                else
                {
                    v26 = ((*((int *)&v18) & 0xf000) == 0x4000 ? (char)uu_rm::handle_dir::h040a6908c8ea150b(v24, v25, a2) : (char)uu_rm::remove_file::hfb41d07f759de271(v24, v25, v0, v2));
                }
            } while ((v23 = v23 & 0xffffffffffffff00 | (unsigned long long)((char)v23 | v26), v20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0300d8f33fee60f7(&v5), v20));
        }
    }
    return (v23 & 0xffffffffffffff00 | (char)v23 & 1) & 4294967295 & 4294967295;
}
