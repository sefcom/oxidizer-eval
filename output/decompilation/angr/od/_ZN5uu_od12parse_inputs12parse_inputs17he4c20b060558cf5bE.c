long long uu_od::parse_inputs::parse_inputs(struct_1 *a0, unsigned long long a1, struct struct_0 *a2[5])
{
    char v0;  // [bp-0x60]
    unsigned long long v1[2];  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x38]
    char v6;  // [bp-0x30], Other Possible Types: unsigned long
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rdx
    unsigned long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // r12
    unsigned long long v13;  // rdx
    unsigned long long v19;  // rdx

    a2[3](&v0);
    if ((char)a2[4](a1, &g_595c90, 1))
    {
        uu_od::parse_inputs::parse_inputs_traditional(a0, v1, v2);
        ::0x4b7110::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
        return a0;
    }
    v3 = v2;
    if (v3 - 1 < 2)
    {
        v9 = v2;
        v3 = v9;
        if (!(char)a2[4](a1, &g_595ca0, 6))
        {
            v10 = v9 - 1;
            if (v9 < 1)
                core::panicking::panic_bounds_check(v10, 0, &g_595d00); /* do not return */
            uu_od::parse_inputs::parse_offset_operand(&v6, v1[v10], v1[v10 + 1]);
            v11 = v2;
            v3 = v11;
            if (!v6)
            {
                v12 = *((long long *)&v7);
                v13 = v11;
                if (v13 == 1)
                {
                    v4 = 0;
                    if ((char)core::slice::<impl [T]>::starts_with(v1[0], v1[1], ::0x4b71b0::core::char::methods::encode_utf8_raw(43, &v4), 1))
                    {
                        v4.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1);
                        a0->field_10 = v5;
                        a0->field_0 = *((int128_t *)&v4);
                        a0->field_18 = v12;
                        a0->field_20 = 0;
                        ::0x4b7110::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
                        return a0;
                    }
                    v13 = v2;
                }
                v3 = v13;
                if (v3 == 2)
                {
                    v4.to_vec(v1[0], v1[1]);
                    a0->field_10 = v5;
                    a0->field_0 = *((int128_t *)&v4);
                    a0->field_18 = v12;
                    a0->field_20 = 0;
                    ::0x4b7110::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
                    return a0;
                }
            }
        }
    }
    v19 = v3;
    if (!v19)
    {
        v0.push();
        v19 = v2;
    }
    v4.from_iter(v1, &v1[v19], &g_595d30);
    a0->field_10 = v5;
    a0->field_0 = *((int128_t *)&v4);
    a0->field_20 = 2;
    ::0x4b7110::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v0);
    return a0;
}
