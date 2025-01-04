long long uu_base32::base_common::fast_decode::fast_decode::h894b8dd38a833827(unsigned long long a0[2], unsigned long a1, unsigned long long a2, struct struct_0 *a3[8], unsigned int a4)
{
    void* v0;  // [sp-0x1f8]
    unsigned long long v1;  // [sp-0x1f0]
    void* v2;  // [sp-0x1e8]
    void* v3;  // [sp-0x1e0]
    unsigned long long v4;  // [sp-0x1d8]
    void* v5;  // [sp-0x1d0]
    void* v6;  // [sp-0x1c8]
    unsigned long long v7;  // [sp-0x1c0]
    void* v8;  // [sp-0x1b8]
    unsigned long long v9;  // [sp-0x1b0]
    unsigned long v10;  // [sp-0x198], Other Possible Types: unsigned long long
    char v11;  // [bp-0x190]
    char v12;  // [bp-0x188]
    char v13;  // [bp-0x180]
    int v14;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x170]
    unsigned long long v16;  // [sp-0x168]
    unsigned int v17;  // [sp-0x160]
    unsigned long long v18;  // [sp-0x158]
    unsigned long long v19;  // [sp-0x150]
    char v20;  // [bp-0x148]
    char v21;  // [bp-0x138]
    char v22;  // [bp-0x130]
    unsigned long long v25;  // r15
    unsigned long long v26;  // r15
    unsigned long v27;  // cc_ndep
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rbp
    unsigned long long v32;  // rbp
    unsigned long long v33;  // rdx
    char *v34;  // rax
    char *v35;  // rax
    unsigned long long v36;  // r14
    unsigned long long v37;  // rbp
    void* v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax

    v10 = a1;
    v25 = a3[7](a2);
    v26 = v25 * 0x400;
    if ((char)amd64g_calculate_condition(4, 32, v25 * 0x400, v25 * 0x200, v27))
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    uu_base32::base_common::fast_decode::alphabet_to_table::h5796dc70b852cfc7(&v22, a3[3](a2), v28, a4);
    ::0x479310::_$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hef424161f497c89e(&v11);
    v29 = *((long long *)&v13);
    if (!v29)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    v8 = 0;
    v19 = a0[0];
    v18 = a0[1];
    v9 = &g_546d58;
    while (true)
    {
        if (::0x478fb0::std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h47ae2d6432a5f7b4(v19, v18, *((long long *)&v12), v29))
        {
            uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f(&v20, (unsigned int)::0x478f00::std::io::error::Error::kind::hb2ff5fa058639b3d(v28));
            v17 = 1;
            *((int128_t *)&v14) = *((int128_t *)&v20);
            v16 = *((long long *)&v21);
            v38 = ::0x479290::alloc::boxed::Box$LT$T$GT$::new::h24c3b22d1586a670(&v14);
            ::0x4790e0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4172b98dff79a5a1(v28);
            break;
        }
        if (!v28)
        {
            v38 = a3[4](a2, v1, v2, &v3);
            if (!(!v38))
                goto LABEL_4797f0;
            v40 = uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(&v3, &v10, &g_546cf0);
            if (!v40)
            {
                ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v6);
                ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v3);
                ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v0);
                ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v11);
                return 0;
            }
            v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v40);
            goto LABEL_4797ed;
        }
        v30 = ::0x478e70::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc824ce28ebfb8e30(v28, *((long long *)&v12), *((long long *)&v13));
        v31 = v30;
        v14 = v30;
        v15 = v30 + v28;
        if ((char)_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hbce8a63a9619d87c(&v14, &v22))
        {
            v8 = 0;
            v14 = v31;
            v15 = v15;
            v34 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h984abb6bfeaeb974(&v14);
            if (v34)
            {
                do
                {
                    v35 = *(v34);
                    if (*((char *)(&v22 + v35)))
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h034f14c94017e4c6(&v6, v35 & 4294967295);
                } while (!(!v38));
            }
            v32 = v7;
        }
        v36 = v33;
        v37 = v32;
        if (v26 - v2 > v36)
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h92ffd1ad14137507(&v0, v37, v36 + v37);
            if (v2 >= v26)
            {
                v9 = &g_546d70;
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            }
            goto LABEL_4795b0;
        }
        v38 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::h65f2050a33e778c1(a2, a3, v26, v26 - v2, v37, v36, &v3, &v0);
        if (v38)
        {
LABEL_4797f0:
            break;
        }
        else
        {
            if (v2 >= v26)
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            v39 = uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(&v3, &v10, &g_546cf0);
            if (!v39)
            {
LABEL_4795b0:
                v29 = *((long long *)&v13);
            }
            else
            {
                v38 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v39);
LABEL_4797ed:
                goto LABEL_4797f0;
            }
        }
    }
    ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v6);
    ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v3);
    ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v0);
    ::0x479110::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&v11);
    return v38;
}
