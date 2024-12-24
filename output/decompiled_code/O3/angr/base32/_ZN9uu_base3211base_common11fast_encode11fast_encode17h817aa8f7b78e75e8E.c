long long uu_base32::base_common::fast_encode::fast_encode::h817aa8f7b78e75e8(unsigned long long a0[2], unsigned long a1, unsigned long long a2, struct struct_0 *a3[7], unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x100], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0xf8]
    void* v2;  // [sp-0xf0]
    unsigned long long v3;  // [sp-0xe8]
    unsigned long long v4;  // [sp-0xe0]
    unsigned long v5;  // [sp-0xc8], Other Possible Types: unsigned long long
    char v6;  // [bp-0xc0]
    char v7;  // [bp-0xb8]
    char v8;  // [bp-0xb0]
    void* v9;  // [sp-0xa8]
    unsigned long long v10;  // [sp-0xa0]
    int v11;  // [sp-0x98]
    void* v12;  // [sp-0x88]
    unsigned long long v13;  // [sp-0x80]
    int v14;  // [sp-0x78]
    int v15;  // [sp-0x68]
    unsigned long long v16;  // [sp-0x58]
    unsigned int v17;  // [sp-0x50]
    char v18;  // [bp-0x48]
    char v19;  // [bp-0x38]
    unsigned long long v21;  // r15
    unsigned long long v22;  // r15
    unsigned long v23;  // cc_ndep
    unsigned long long v24;  // rcx
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    void* v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax

    v5 = a1;
    v21 = a3[6](a2);
    v22 = v21 * 0x400;
    if ((char)amd64g_calculate_condition(4, 32, v21 << 10, v21 << 9, v23))
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    if (!a4)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = 76;
    }
    else if (!a5)
    {
        v0 = 0x8000000000000000;
    }
    else
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = a5;
    }
    ::0x473f70::_$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h9daab82db91a8640(&v6);
    v24 = *((long long *)&v8);
    if (!v24)
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    v9 = 0;
    *((int128_t *)&v11) = 0;
    v10 = 1;
    v12 = 0;
    *((int128_t *)&v14) = 0;
    v13 = 1;
    v4 = &g_547598;
    while (true)
    {
        if (::0x472d90::std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::hc98901626d0a5c09(a0[0], a0[1], *((long long *)&v7), v24))
        {
            uu_base32::base_common::format_read_error::h036550c3eca15a41(&v18, (unsigned int)::0x472ce0::std::io::error::Error::kind::hb2ff5fa058639b3d(v27));
            v17 = 1;
            *((int128_t *)&v15) = *((int128_t *)&v18);
            v16 = *((long long *)&v19);
            v30 = ::0x473410::alloc::boxed::Box$LT$T$GT$::new::h951446a2079ec0f8(&v15);
            ::0x472ee0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6a9d4029203cf6f1(v27);
            break;
        }
        if (!v27)
        {
            v30 = a3[5](a2, alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hefd26126b239e635(&v9), v27, &v12);
            if (!(!v30))
                goto LABEL_47441a;
            v32 = uu_base32::base_common::fast_encode::write_to_output::hed0d96cfc74d23e0(&v0, &v12, &v5, &g_547530, 1);
            if (!v32)
            {
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h1a6362db0e2f940a(&v12);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h1a6362db0e2f940a(&v9);
                ::0x472f10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h53f17ae454e2bf92(&v6);
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_base32..base_common..fast_encode..LineWrapping$GT$$GT$::h46986c9f193835b2(&v0);
                return 0;
            }
            v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v32);
            goto LABEL_474417;
        }
        v28 = ::0x472bf0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h229989e557f1b7cf(v27, *((long long *)&v7), *((long long *)&v8));
        if (v22 - (long long)(&v11)[8] > v27)
        {
            _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h24e2eb7411e8f2a1(&v9, v28, v28 + v27);
            if ((long long)(&v11)[8] >= v22)
            {
                v4 = &g_5475b0;
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            }
            goto LABEL_474270;
        }
        v30 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::hf83689f3e77f0489(a2, a3, v22, v22 - (long long)(&v11)[8], v28, v27, &v12, &v9);
        if (v30)
        {
LABEL_47441a:
            break;
        }
        else
        {
            if ((long long)(&v11)[8] >= v22)
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            v31 = uu_base32::base_common::fast_encode::write_to_output::hed0d96cfc74d23e0(&v0, &v12, &v5, &g_547530, 0);
            if (!v31)
            {
LABEL_474270:
                v24 = *((long long *)&v8);
            }
            else
            {
                v30 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v31);
LABEL_474417:
                goto LABEL_47441a;
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h1a6362db0e2f940a(&v12);
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h1a6362db0e2f940a(&v9);
    ::0x472f10::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h53f17ae454e2bf92(&v6);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_base32..base_common..fast_encode..LineWrapping$GT$$GT$::h46986c9f193835b2(&v0);
    return v30;
}
