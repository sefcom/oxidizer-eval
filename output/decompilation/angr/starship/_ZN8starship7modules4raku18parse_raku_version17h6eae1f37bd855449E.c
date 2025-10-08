long long starship::modules::raku::parse_raku_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x108], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x100]
    char v2;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xf0]
    unsigned long v4;  // [bp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    unsigned short v6;  // [bp-0xd0]
    char v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    unsigned long long v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    unsigned int v13;  // [bp-0x90]
    unsigned long long v14;  // [bp-0x80]
    int v15;  // [bp-0x78], Other Possible Types: char
    unsigned long long v16;  // [bp-0x68]
    void* v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x58]
    char v19;  // [bp-0x50]
    unsigned short v20;  // [bp-0x20]
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax

    v19.into_searcher(10, a1, a2);
    v17 = 0;
    v18 = a2;
    v20 = 0;
    v22 = v17.next_inclusive();
    if (v22)
    {
        v22.call(v23);
        v24 = v17.next_inclusive();
        if (v24)
        {
            v2.into_searcher(v24.call(v23), a2);
            v0 = 0;
            v1 = v23;
            v6 = 1;
            if (!v0.advance_by(5))
            {
                v26 = v0.try_fold();
                if (v26)
                {
                    v13 = 0;
                    v27 = ::0xa7eb90::core::char::methods::encode_utf8_raw(46, &v13, 4).strip_suffix_of(v23, v26, v23);
                    if (v27)
                    {
                        v7.to_vec(v27, a2);
                        v28 = v17.next_inclusive();
                        if (v28)
                        {
                            v29 = v28.call(v23);
                            if (!v29)
                                goto LABEL_bb6caa;
                            v2.into_searcher(v29, a2);
                            v0 = 0;
                            v1 = v23;
                            v6 = 1;
                            if (v0.advance_by(2))
                                goto LABEL_bb6caa;
                            v30 = v0.try_fold();
                            if (!v30)
                                goto LABEL_bb6caa;
                            alloc::str::<impl str>::replace(&v10, v30, a2, "MoarVMError in module `red`:\nsrc/modules/red.rs", 6, "MoarpbactempUnitbindKey ", 4);
                            alloc::str::<impl str>::to_lowercase(&v15, v8, v9);
                            alloc::str::<impl str>::to_lowercase(&v13, v11, v12);
                            v2 = v16;
                            v0 = v15;
                            *((int128_t *)&v3) = *((int128_t *)&v13);
                            v5 = v14;
                            *((unsigned long *)&a0[32]) = v4;
                            *((unsigned long long *)&a0[40]) = v5;
                            *((unsigned long long *)&a0[16]) = v2;
                            *((long long *)&a0[24]) = (long long)v3;
                            *(a0) = v15;
                            core::ptr::drop_in_place<alloc::string::String>(&v10);
                        }
                        else
                        {
LABEL_bb6caa:
                            *((unsigned long long *)a0) = 0x8000000000000000;
                        }
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v7);
                    }
                }
            }
        }
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
