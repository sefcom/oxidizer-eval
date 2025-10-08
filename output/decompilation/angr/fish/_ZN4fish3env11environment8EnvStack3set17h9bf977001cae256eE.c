long long fish::env::environment::EnvStack::set(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, struct_0 *a4)
{
    char v0;  // [bp-0x78]
    struct_1 *v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    char v3;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    int v6;  // [bp-0x48]
    unsigned long v7;  // [bp-0x38]
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rbp
    unsigned long v12;  // rbp
    unsigned long v13;  // rbp

    v9 = a1 + a2 * 4;
    if (a4->field_8 == 1 && (a1.eq_by(v9, "PWDsrc/env/environment.rsCDPATH", "src/env/environment.rsCDPATH") || a1.eq_by(v9, "HOME\r", "\r")))
        fish::path::path_make_canonical(a4->field_0[1]);
    if (a1.eq_by(v9, "PATHYankkMSGsmsckentsnlqkundkendkRESmsgrkNXTkprtkrescwin.", "YankkMSGsmsckentsnlqkundkendkRESmsgrkNXTkprtkrescwin.") || a1.eq_by(v9, "CDPATH", &g_a15b2a))
    {
        fish::env::environment_impl::colon_split(&v0, a4->field_0[1], a4->field_8);
        if (v2)
        {
            v10 = v2 * 24;
            do
            {
                v11 = v10;
                if (!v1->field_10)
                    v1.push(46);
                v1 += 1;
                v12 = v11 - 24;
                v10 = v12;
            } while (v11 != 24);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a4);
        a4->field_8 = v2;
        *((int128_t *)&a4->field_0[0]) = *((int128_t *)&v0);
    }
    v3.lock(a0);
    v7 = a4->field_8;
    *((unsigned long long [2])&v6) = a4->field_0;
    v13 = (unsigned int)v3.set(a1, a2, a3, &v6);
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v4, *((int *)&v5));
    if (((unsigned int)v13 & 16777215) <= 65535 && (((char)v13 & 1) || a0->field_81 == 1))
        fish::env_dispatch::env_dispatch_var_change(a1, a2, a0);
    if (((unsigned short)v13 & 0x100))
        _ZN4fish3env11environment22UVARS_LOCALLY_MODIFIED17h7f7672bb64b2b548E.store(1);
    return (v13 & 4294967295) >> 16 & 4294967295;
}
