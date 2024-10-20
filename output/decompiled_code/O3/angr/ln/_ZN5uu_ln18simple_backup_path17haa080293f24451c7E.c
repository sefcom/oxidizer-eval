double uu_ln::simple_backup_path::haa080293f24451c7(long long a0, long long a1, long long a2, long long a3, long long a4)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long, unsigned long
    void* v1;  // [sp-0x48]
    unsigned long v2;  // [sp-0x40], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v5;  // r12
    unsigned long long v6;  // r13
    unsigned long long v7;  // r12
    int v8;  // xmm0
    int v9;  // ymm0

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1, a2);
    if (v0)
        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    v5 = v2;
    if (!v5)
    {
        v6 = 1;
        goto LABEL_48a099;
    }
    else
    {
        if (v5 < 0)
        {
            v3 = 0;
        }
        else
        {
            v3 = 1;
            v6 = __rust_alloc(v5, 1);
            if (v6)
            {
LABEL_48a099:
                memcpy(v1, v1, v5);
                v0 = v5;
                v1 = v6;
                v2 = v5;
                if (!a4)
                {
                    memcpy(v1 + v7, a3, a4);
                    v2 = v7 + a4;
                    v8 = *((int128_t *)&v0);
                    *((void*)&a0->field_0) = v8;
                    a0->field_10 = v2;
                    return (unsigned long long)(v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8);
                }
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h60326064412dc712(&v0, v5, a4);
                v7 = v2;
            }
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
}
