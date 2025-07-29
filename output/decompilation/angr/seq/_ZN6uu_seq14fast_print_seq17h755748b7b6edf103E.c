long long uu_seq::fast_print_seq(unsigned long long a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3[3], unsigned long long a4, unsigned long long a5, unsigned int a6, unsigned long a7, unsigned long long a8)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    int v2;  // [bp-0xe8]
    unsigned long long v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long v5;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xc0]
    char v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    char v10;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x98]
    char *v12;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x88]
    void* v14;  // [bp-0x80]
    char v15;  // [bp-0x68]
    unsigned long long v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x58]
    char *v18;  // [bp-0x50]
    unsigned long long v19;  // [bp-0x48]
    char v20;  // [bp-0x40]
    unsigned long long v22;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // rsi
    unsigned long long v26;  // rdx
    void* v27;  // rbp
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    void* v30;  // r14

    v6 = a2;
    memcpy(&v20, &a6, 16);
    if ((char)::0x4bbae0::num_bigint::biguint::cmp_slice(a3[1], a3[2], a1[1], a1[2]) != 255)
    {
        v10.clone(a3);
        v4 = v12;
        *((int128_t *)&v2) = *((int128_t *)&v10);
        v10.sub(&(char)v2, a1);
        (char)v2.div(&v10, v6);
        v5 = -(v3.to_u64(v4) < 1);
        ::0x4bc1c0::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&(char)v2);
        v7.spec_to_string(a1);
        v10.spec_to_string(a3);
        ::0x4bc0f0::core::ptr::drop_in_place<alloc::string::String>(&v10);
        v15.from_elem(::0x4bbeb0::core::cmp::max_by(v12, a8) + a5);
        v22 = v16;
        v23 = v17;
        v24 = v23 - a5;
        v1 = v24 - v9;
        v0 = v24;
        core::slice::<impl [T]>::copy_from_slice(v24 - v9.index_mut(v24, v22, v23), v26, v8, v9, &g_5b50a0);
        if (v23 < a5)
            core::slice::index::slice_start_index_len_fail(v0, v23, &g_5b5100); /* do not return */
        core::slice::<impl [T]>::copy_from_slice(v0 + v22, a5, a4, a5, &g_5b50b8);
        v1 = ::0x4bbed0::core::cmp::min_by(v1, v0 - a8);
        (char)v2.spec_to_string(&v6);
        v5 |= v26;
        v27 = 0;
        while (v27 < v5)
        {
            v28 = v27.forward_unchecked();
            v29 = v23;
            if (v29 < v1)
                core::slice::index::slice_start_index_len_fail(v1, v23, &g_5b50e8); /* do not return */
            v27 = v28;
            if (!(!a0.write_all(v1 + v22, v29 - v1)))
                goto LABEL_4bd979;
            uucore::features::fast_inc::fast_inc(v22, v23, &v1, v0, v3, v4);
        }
        v30 = a0.write_all(v1.index(v0, v22, v23), a2);
        if (v30)
        {
LABEL_4bd979:
            ::0x4bc0f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
            ::0x4bc110::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v15);
            ::0x4bc0f0::core::ptr::drop_in_place<alloc::string::String>(&v7);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a0);
            return v30;
        }
        v18 = &v20;
        v19 = <&T as core::fmt::Display>::fmt;
        v10 = &g_417e00;
        v11 = 1;
        v14 = 0;
        v12 = &v18;
        v13 = 1;
        v30 = a0.write_fmt(&v10);
        if (!(!v30))
            goto LABEL_4bd979;
        v30 = a0.flush();
        if (!(!v30))
            goto LABEL_4bd979;
        ::0x4bc0f0::core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
        ::0x4bc110::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v15);
        ::0x4bc0f0::core::ptr::drop_in_place<alloc::string::String>(&v7);
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a0);
    return 0;
}
