long long uu_seq::fast_print_seq(unsigned long long a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3[3], unsigned long long a4, unsigned long long a5, unsigned int a6, unsigned long a7, unsigned long long a8)
{
    unsigned long long v0;  // [bp-0xf0]
    int v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    char v4;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xc0]
    char *v6;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xb0]
    void* v8;  // [bp-0xa8]
    char v9;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    char v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x60]
    char *v15;  // [bp-0x58], Other Possible Types: char
    unsigned long long v16;  // [bp-0x50]
    char v17;  // [bp-0x40]
    char v18;  // al
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // rbp
    unsigned long long v23;  // r14
    unsigned long long v25;  // rdx
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rbx
    unsigned long long v30;  // rdx
    void* v31;  // rax

    memcpy(&v17, &a6, 16);
    if ((char)::0x46d200::num_bigint::biguint::cmp_slice(a3[1], a3[2], a1[1], a1[2]) >= 0)
    {
        v4.clone(a3[1], a3[2]);
        v3 = v6;
        *((int128_t *)&v1) = *((int128_t *)&v4);
        v4.sub(&(char)v1, a1);
        (char)v1.div(&v4, a2);
        v18 = v2.to_u64(v3);
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>((long long)v1, v2);
        v12.spec_to_string(a1);
        v4.spec_to_string(a3);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
        v9.from_elem(v6.max(a8) + a5);
        v20 = v10;
        v21 = v11;
        v22 = v21 - a5;
        v23 = v14;
        v0 = v22 - v23;
        core::slice::<impl [T]>::copy_from_slice(v22 - v23.index_mut(v22, v20, v21), v25, v13, v23, &g_51b300);
        if (v21 < a5)
            core::slice::index::slice_start_index_len_fail(v22, v21, &g_51b360); /* do not return */
        core::slice::<impl [T]>::copy_from_slice(v20 + v22, a5, a4, a5, &g_51b318);
        v0 = v0.min(v22 - a8);
        v4.to_vec(core::fmt::num::imp::<impl usize>::_fmt(a2, &v15, 20), a2);
        v3 = v6;
        *((int128_t *)&v1) = *((int128_t *)&v4);
        v27 = (-((v18 & 1) < 1) | v25) + 1;
        while (true)
        {
            v28 = v0;
            v29 = v27 - 1;
            if (v27 != 1)
            {
                v30 = v21;
                if (v30 < v28)
                    core::slice::index::slice_start_index_len_fail(v28, v21, &g_51b348); /* do not return */
                if (a0.write_all(v28 + v20, v30 - v28))
                    break;
                uucore::features::fast_inc::fast_inc(v20, v21, &v0, v22, v2, v6);
                v27 = v29;
            }
            else if (!a0.write_all(v28.index(v22, v20, v21, &g_51b330), a2))
            {
                v15 = &v17;
                v16 = <&T as core::fmt::Display>::fmt;
                v4 = &g_41b0f0;
                v5 = 1;
                v8 = 0;
                v6 = &v15;
                v7 = 1;
                if (!a0.write_fmt(&v4))
                {
                    v31 = a0.flush();
                    break;
                }
            }
        }
        core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v9, v10);
        core::ptr::drop_in_place<alloc::string::String>(&v12);
    }
    else
    {
        v31 = 0;
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(a0);
    return v31;
}
