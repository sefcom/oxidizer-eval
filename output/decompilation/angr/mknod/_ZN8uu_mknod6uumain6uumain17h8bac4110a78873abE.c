long long uu_mknod::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x368], Other Possible Types: char
    unsigned long long v1;  // [bp-0x360]
    char v2;  // [bp-0x358], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x350]
    char v4;  // [bp-0x348]
    char v5;  // [bp-0x338]
    char v6;  // [bp-0x328], Other Possible Types: unsigned long
    char v7;  // [bp-0x320]
    unsigned long long v8;  // [bp-0x318]
    unsigned long long v9;  // [bp-0x310]
    unsigned long long v10;  // [bp-0x308]
    unsigned int v11;  // [bp-0x300]
    char v12;  // [bp-0x2fc]
    char v13;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x2f0]
    char v15;  // [bp-0x2e8]
    char v16;  // [bp-0x2d8]
    unsigned long long v17;  // [bp-0x2c8]
    char *v19;  // rbx
    unsigned long long v21[3];  // r14
    char v22;  // al
    unsigned long long v23;  // r15
    unsigned long long *v24;  // r12
    unsigned long long *v25;  // rax
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rbx
    unsigned int v29;  // ecx

    uu_mknod::uu_app(&v13);
    v0.try_get_matches_from(&v13, a0, a1);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        return v14.from();
    v17 = *((long long *)&v5);
    memcpy(&v16, &v4, 16);
    memcpy(&v15, &v2, 16);
    v13 = *((long long *)&v0);
    v14 = v1;
    v0.try_get_one(&v13);
    v19 = v0.unwrap();
    if (!v19)
        core::option::unwrap_failed(&g_4e32c8); /* do not return */
    v0.try_get_one(&v13, "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    uu_mknod::get_mode(&v6, "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ".unwrap(4, &v0));
    if (v6 != 0x8000000000000000)
    {
        v2 = v8;
        *((int128_t *)&v0) = *((int128_t *)&v6);
        v3 = 1;
        v28 = v0.new();
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
        return v28;
    }
    v0.try_get_one(&v13, "name", 4);
    v21 = "name".unwrap(4, &v0);
    if (!v21)
        core::option::expect_failed("Missing argument 'NAME'Special files require major and minor device numbers.Fifos do not have major and minor device numbers.zcontextmajorminorError flushing stdout: ", 23, &g_4e3368); /* do not return */
    v22 = v13.get_flag("zcontextmajorminorError flushing stdout: ", 1);
    v0.try_get_one(&v13, "contextmajorminorError flushing stdout: ", 7);
    v23 = "contextmajorminorError flushing stdout: ".unwrap(7, &v0);
    v0.try_get_one(&v13, "majorminorError flushing stdout: ");
    v24 = "majorminorError flushing stdout: ".unwrap(&v0);
    v0.try_get_one(&v13, "minorError flushing stdout: ");
    v25 = "minorError flushing stdout: ".unwrap(&v0);
    if (*(v19) == 2)
    {
        if (!v24 && !v25)
        {
            v26 = 0;
            goto LABEL_45582f;
        }
        else
        {
            v6.to_vec("Fifos do not have major and minor device numbers.zcontextmajorminorError flushing stdout: ", 49);
            v2 = v8;
            *((int128_t *)&v0) = *((int128_t *)&v6);
            v3 = 1;
            v27 = v0.new();
        }
    }
    else
    {
        if (!v24 || !v25)
        {
            v6.to_vec("Special files require major and minor device numbers.Fifos do not have major and minor device numbers.zcontextmajorminorError flushing stdout: ", 53);
            v2 = v8;
            *((int128_t *)&v0) = *((int128_t *)&v6);
            v3 = 1;
            v27 = v0.new();
        }
        else
        {
            v29 = *(v24);
            v26 = (v29 & 0xfffff000) * 0x100000000 | v29 * 0x100 & 0xfff00 | *(v25) & 4294967295 | *(v25) * 0x1000 & 0xfffffffffff00000;
LABEL_45582f:
            v11 = *((int *)&v7) | g_418c10[*(v19)];
            v9 = v26;
            v12 = v22 | v23;
            v10 = v23;
            uucore::mods::error::set_exit_code((unsigned int)uu_mknod::mknod(v21[1], v21[2], &v9));
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
            return 0;
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
    return v28;
}
