void uu_od::parse_inputs::parse_inputs(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1[2];  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned int v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x48]
    char v5;  // [bp-0x40], Other Possible Types: unsigned long
    char v6;  // [bp-0x38]
    unsigned long long v8[2];  // r14
    unsigned long long v9;  // r15
    unsigned long v10;  // r12
    unsigned long long v11;  // r15
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rdi
    unsigned long long v14[2];  // rsi

    v0.inputs(a1);
    if (a1.opts_present(&g_502680, 1))
    {
        uu_od::parse_inputs::parse_inputs_traditional(a0, v1, v2);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v0, v1);
        return;
    }
    v9 = v2;
    v10 = v9 - 1;
    if (v10 < 2)
    {
        v11 = v9;
        if (!a1.opts_present(&g_502690, 6))
        {
            v8 = v1;
            uu_od::parse_inputs::parse_offset_operand(&v5, v1[v10], v1[v10 + 1]);
            v11 = v9;
            if (!v5)
            {
                v12 = *((long long *)&v6);
                if (v9 != 1)
                {
                    (char)v3.to_vec(v1[0], v1[1]);
                    a0->field_10 = v4;
                    a0->field_0 = *((int128_t *)&v3);
                    a0->field_18 = v12;
                    a0->field_20 = 0;
                    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v0, v8);
                    return;
                }
                v3 = 0;
                v11 = v9;
                if ((char)core::slice::<impl [T]>::starts_with(v1[0], v1[1], ::0x465460::core::char::methods::encode_utf8_raw(43, &v3), 1))
                {
                    v3.to_vec("-traditionaladdress-radixread-bytesskip-bytesformatoutput-duplicateswidthsrc/uu/od/src/parse_inputs.rsinvalid label: too many inputs after --traditional: ", 1);
                    a0->field_10 = v4;
                    a0->field_0 = *((int128_t *)&v3);
                    a0->field_18 = v12;
                    a0->field_20 = 0;
                    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v0, v8);
                    return;
                }
            }
        }
    }
    else
    {
        v11 = v9;
        if (!v11)
        {
            v0.push();
            v11 = v2;
        }
    }
    v3.collect(v1, &v1[v11]);
    a0->field_10 = v4;
    a0->field_0 = *((int128_t *)&v3);
    a0->field_20 = 2;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v13, v14);
    return;
}
