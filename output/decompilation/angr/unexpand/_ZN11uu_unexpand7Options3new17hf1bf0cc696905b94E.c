long long uu_unexpand::Options::new(struct_2 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    int v2;  // [bp-0x118], Other Possible Types: char
    unsigned long long v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    char v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf8]
    struct_0 *v7;  // [bp-0xf0]
    unsigned long long v8;  // [bp-0xe8]
    char v9;  // [bp-0xe0]
    char v10;  // [bp-0xb0]
    char v11;  // [bp-0x70]
    unsigned long long *v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long *v15;  // rax
    char v16;  // bpl
    char v17;  // al
    struct_0 *v18;  // rax
    struct_0 *v19;  // r15
    int v20;  // xmm0

    v5.try_get_many(a1, "tabskindAuto/");
    v10.unwrap("tabskindAuto/", &v5);
    if (*((long long *)&v10))
    {
        v2.collect(&v10);
        v0 = v3;
        alloc::str::join_generic_copy(&v5, v3, v4);
        uu_unexpand::tabstops_parse(&v5, v7, v8);
        v13 = v8;
        v14 = *((long long *)&v9);
        if (*((int *)&v5) == 1)
        {
            a0->field_8 = v7;
            a0->field_10 = v8;
            a0->field_18 = v14;
            a0->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(v6, v7);
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(*((long long *)&v2), v0);
            return a0;
        }
        v1 = v7;
        core::ptr::drop_in_place<alloc::string::String>(v6, v7);
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(*((long long *)&v2), v0);
    }
    else
    {
        v15 = 8.alloc_impl(8);
        if (!v15)
            alloc::alloc::handle_alloc_error(8, 8); /* do not return */
        v13 = v15;
        *(v15) = 8;
        v14 = 1;
        v1 = 1;
    }
    if ((char)a1.get_flag("allfirst-onlyno-utf8--first-only--all-a--tabs=", 3) || (char)a1.contains_id("tabskindAuto/", 4))
        v16 = (char)a1.get_flag("first-onlyno-utf8--first-only--all-a--tabs=", 10) ^ 1;
    v17 = a1.get_flag("no-utf8--first-only--all-a--tabs=", 7);
    v5.try_get_many(a1, "filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ");
    v11.unwrap("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", &v5);
    if (*((long long *)&v11))
    {
        v5.collect(&v11);
    }
    else
    {
        v18 = 8.alloc_impl(24);
        if (!v18)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v19 = v18;
        v5.to_vec("-allfirst-onlyno-utf8--first-only--all-a--tabs=", 1);
        v4 = v8;
        v20 = *((int128_t *)&v6);
        v2 = v20;
        v19->field_10 = v8;
        *((void*)&v19->field_0) = v20;
        v6 = 1;
        v7 = v19;
        v8 = 1;
    }
    a0->field_10 = v8;
    a0->field_0 = v6;
    a0->field_8 = v7;
    a0->field_18 = v1;
    a0->field_20 = v13;
    a0->field_28 = v14;
    a0->field_30 = v16;
    a0->field_31 = v17 ^ 1;
    return a0;
}
