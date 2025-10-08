long long uu_mktemp::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x440]
    int v1;  // [bp-0x438]
    unsigned long long v2;  // [bp-0x430]
    int v3;  // [bp-0x428], Other Possible Types: char
    struct_0 *v4;  // [bp-0x420], Other Possible Types: unsigned long long
    char v5;  // [bp-0x418], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x418]
    char v7;  // [bp-0x410]
    char v8;  // [bp-0x408]
    unsigned long long v9;  // [bp-0x400]
    unsigned long long v10;  // [bp-0x3f8]
    int v11;  // [bp-0x3f0]
    unsigned long long v12;  // [bp-0x3e0]
    int v13;  // [bp-0x3d8], Other Possible Types: char
    unsigned long long v14;  // [bp-0x3c8]
    char v15;  // [bp-0x3b8]
    unsigned long long v16;  // [bp-0x3b0]
    unsigned long long v17;  // [bp-0x3a8]
    char v18;  // [bp-0x3a0]
    unsigned long long v19;  // [bp-0x398]
    int v20;  // [bp-0x390], Other Possible Types: char
    int v21;  // [bp-0x380]
    int v22;  // [bp-0x370]
    char v23;  // [bp-0x360]
    char v24;  // [bp-0x358]
    char v25;  // [bp-0x357]
    char v26;  // [bp-0x356]
    unsigned long long v27;  // [bp-0x350]
    unsigned long long v28;  // [bp-0x348]
    unsigned long long v29;  // [bp-0x340]
    char v30;  // [bp-0x338]
    char v31;  // [bp-0x328]
    char v32;  // [bp-0x318]
    unsigned long long v33;  // [bp-0x308]
    int v34;  // [bp-0x2f8], Other Possible Types: char, unsigned long long
    unsigned long long v35;  // [bp-0x2f0]
    int v36;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v37;  // [bp-0x2e0]
    int v38;  // [bp-0x2d8], Other Possible Types: unsigned long long
    unsigned long long v39;  // [bp-0x2d0]
    int v40;  // [bp-0x2c8]
    char v41;  // [bp-0x2b8]
    unsigned long long v43;  // r15
    unsigned long long v44;  // rax
    char v45;  // bpl
    int v46;  // xmm0
    unsigned long long v47;  // r14
    unsigned long long v48;  // r8
    unsigned long long v49;  // r12

    v15.collect(a0, a1);
    uu_mktemp::uu_app(&(char)v34);
    v3.try_get_matches_from(&(char)v34, v16, v17);
    if (!((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63)))
    {
        v33 = v10;
        memcpy(&v32, &v8, 16);
        memcpy(&v31, &v5, 16);
        memcpy(&v30, &v3, 16);
        v18.from(&v30);
        std::env::var(&(char)v34);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&(char)v34);
        if (!(v34 & 1) && (char)v30.contains_id(_ZN9uu_mktemp12ARG_TEMPLATE17hfee3cbf22394565cE, g_4f8fb0))
        {
            if (!v17)
                core::option::unwrap_failed(&g_4f82c0); /* do not return */
            v44 = v17 * 3;
            if (v16 + v44 * 8 == 24)
                core::option::unwrap_failed(&g_4f82c0); /* do not return */
            if ((char)*((long long *)(v16 + v44 * 8 - 16)).equal(*((long long *)(v16 + v44 * 8 - 8)), v19, *((long long *)&v20)))
                goto LABEL_45e1a0;
            v34 = 9223372036854775814;
            v43 = v34.new();
            core::ptr::drop_in_place<uu_mktemp::Options>(&v18);
            goto LABEL_45e292;
        }
LABEL_45e1a0:
        v45 = v26;
        memcpy(&v41, &v23, 16);
        v46 = *((int128_t *)&v18);
        v40 = v22;
        v38 = v21;
        v36 = v20;
        v34 = v46;
        v3.from(&(char)v34);
        v47 = *((long long *)&v3);
        memcpy(&v13, &v7, 16);
        v14 = v9;
        if (v47 == 0x8000000000000000)
        {
            v38 = v14;
            v36 = v13;
            v34 = v4;
            v35 = v5;
            v39 = v0;
            v43 = v34.new();
LABEL_45e292:
            goto LABEL_45e386;
        }
        v1 = v11;
        v48 = v14;
        v6 = v14;
        v3 = v13;
        v0 = v39;
        if (v25)
            uu_mktemp::dry_exec(&(char)v34, v4, v5, v4, v48, v12, (long long)v1, v2);
        else
            uu_mktemp::exec(&(char)v34, v4, v5, v4, v48, v12, (long long)v1, v2, v24);
        v43 = v35;
        v49 = v36;
        if (v45)
        {
            if (v34 == 0x8000000000000000)
            {
                v43 = uu_mktemp::uumain::uumain::{{closure}}(v43, v49);
LABEL_45e367:
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                core::ptr::drop_in_place<alloc::string::String>(&v3);
                core::mem::drop(v47, v4);
LABEL_45e386:
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
            }
            else
            {
LABEL_45e395:
                v27 = v34;
                v28 = v43;
                v29 = v49;
                v43 = uucore::mods::display::println_verbatim(&v27).map_err_context();
                core::ptr::drop_in_place<alloc::string::String>(&v0);
                core::ptr::drop_in_place<alloc::string::String>(&v3);
                core::mem::drop(v47, v4);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
            }
        }
        else
        {
            if (v34 != 0x8000000000000000)
                goto LABEL_45e395;
            goto LABEL_45e367;
        }
    }
    else if (v4->field_dd == 5)
    {
        (char)v34.iter(&v4->padding_0[32]);
        if (!(char)v34.try_fold().eq())
            goto LABEL_45e29e;
        v18.to_vec("too many templatesPOSIXLY_CORRECT[template]failed to print directory nameError flushing stdout: ", 18);
        v36 = *((long long *)&v20);
        *((int128_t *)&v34) = *((int128_t *)&v18);
        v37 = 1;
        v43 = (char)v34.new();
        core::ptr::drop_in_place<clap_builder::error::Error>(v4);
    }
    else
    {
LABEL_45e29e:
        v43 = v4.from();
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v15);
    return v43;
}
