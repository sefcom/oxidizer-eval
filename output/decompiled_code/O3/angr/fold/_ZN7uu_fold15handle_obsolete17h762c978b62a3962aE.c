long long uu_fold::handle_obsolete::h762c978b62a3962a(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long long v1;  // [sp-0x88]
    char v2;  // [bp-0x80]
    int v3;  // [sp-0x78]
    unsigned long long v4;  // [sp-0x68]
    unsigned long v5;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x58]
    void* v7;  // [sp-0x50]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x38]
    unsigned long long v11;  // r15
    unsigned long long v12;  // rax
    unsigned long long v13[3];  // rdx
    unsigned long long v14[3];  // rdx
    unsigned long long v15;  // r13
    unsigned long long v16;  // r12
    unsigned long long v17;  // rdi
    unsigned long long v18;  // rsi
    struct_0 *v19;  // rbx
    unsigned long long v20;  // rax

    v11 = a1;
    v5 = a1;
    v6 = a1 + a2 * 24;
    v7 = 0;
    v12 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdd199cc046673ecb(&v5);
    if (v13)
    {
        do
        {
            v15 = v14[1];
            v16 = v14[2];
            v0 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9c5d442ffc4163c6(v15, v16, ::0x4b1030::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(45, &v0), v13))
            {
                v0 = v15;
                v1 = v16 + v15;
                v17 = 0x110000;
                if (!_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&v0, v18, v13))
                {
                    v17 = (!(int)core::str::validations::next_code_point::h43722f666619708e(&v0) ? 0x110000 : (unsigned int)v13);
                }
                if ((char)core::option::Option$LT$T$GT$::map_or::hf8b5b036367b0ac9(v17))
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h076562279060731c(&v8, v11, a2);
                    alloc::vec::Vec$LT$T$C$A$GT$::remove::h5a24e8282092613c(&v0, &v8, v12, &g_51bb38);
                    ::0x4b0340::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd56999072c42a543(&v0);
                    v4 = *((long long *)&v9);
                    *((int128_t *)&v3) = *((int128_t *)&v8);
                    v20 = ::0x4b0f30::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(v15, v16);
                    if (v20)
                    {
                        ::0x4b12e0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hb0fe0847107a640e(&v0, v20, v13);
                        v19 = a0;
                        v19->field_28 = *((long long *)&v2);
                        *((int128_t *)&v19->field_18) = *((int128_t *)&v0);
                        v19->field_10 = v4;
                        *((void*)&v19->field_0) = v3;
                        return v19;
                    }
                    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                }
            }
        } while ((v12 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdd199cc046673ecb(&v5), v13));
    }
    v19 = a0;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h076562279060731c(v19, v11, a2);
    v19->field_18 = 0x8000000000000000;
    return v19;
}
