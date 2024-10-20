long long uu_env::native_int_str::NativeStr::slice::h001e7abfafd3d5d0(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [sp-0x38]
    unsigned long v2;  // rax
    unsigned long long v3;  // r15
    unsigned long long v4;  // rsi
    unsigned long v5;  // rax
    unsigned long long v6;  // r15
    unsigned long v8;  // cc_ndep

    v0 = v2;
    v3 = a1[1];
    v4 = a1[2];
    if (a1[0] == 0x8000000000000000)
    {
        v5 = a3 - a2;
        if (a3 < a2)
        {
            goto LABEL_4a41bb;
        }
        else
        {
            if (v4 < a3)
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            v6 = v3 + a2;
        }
    }
    else if (a3 >= a2)
    {
        if (v4 < a3)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        v5 = a3 - a2;
        if (a3 == a2)
        {
            v6 = 1;
        }
        else if ((char)amd64g_calculate_condition(8, 8, a3, a2, v8))
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            v6 = __rust_alloc(v5, 1);
            if (!v6)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v6, v3 + a2, v5);
    }
    else
    {
LABEL_4a41bb:
        core::slice::index::slice_index_order_fail::h1c3351e14910b14a(); /* do not return */
    }
    a0[0] = 0x8000000000000000;
    a0[1] = v6;
    a0[2] = v5;
    return a0;
}
