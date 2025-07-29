long long uu_date::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x768]
    int v1;  // [bp-0x760], Other Possible Types: unsigned long long
    char v2;  // [bp-0x758], Other Possible Types: unsigned long long
    int v3;  // [bp-0x750]
    char v4;  // [bp-0x748]
    int v5;  // [bp-0x738], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x730]
    int v7;  // [bp-0x728], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0x720]
    char v9;  // [sp-0x718], Other Possible Types: unsigned long long
    char v10;  // [bp-0x708]
    unsigned long long v11;  // [bp-0x6c8]
    int v12;  // [bp-0x6c0]
    int v13;  // [bp-0x698]
    unsigned long long v14;  // [bp-0x698]
    char v15;  // [bp-0x690]
    unsigned long long v16;  // [bp-0x688]
    unsigned long long v17;  // [bp-0x658]
    int v18;  // [bp-0x650], Other Possible Types: unsigned long long
    unsigned int v19;  // [bp-0x648]
    unsigned long long v20;  // [bp-0x640]
    int v21;  // [bp-0x608], Other Possible Types: char
    int v22;  // [bp-0x5d8]
    unsigned long long v23;  // [bp-0x5a8]
    unsigned long long v24;  // [bp-0x5a0]
    char v25;  // [bp-0x598]
    char v26;  // [bp-0x588]
    unsigned long long v27;  // [bp-0x578]
    char v28;  // [bp-0x570]
    int v29;  // [bp-0x548]
    int v30;  // [bp-0x528], Other Possible Types: char
    unsigned int v31;  // [bp-0x528], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x528]
    int v33;  // [bp-0x520]
    unsigned long long v34;  // [bp-0x518]
    int v35;  // [bp-0x518], Other Possible Types: unsigned long long
    unsigned int v36;  // [bp-0x510], Other Possible Types: unsigned long long
    char v37;  // [bp-0x508]
    char v38;  // [bp-0x4f8]
    char v39;  // [bp-0x4e8]
    char v40;  // [bp-0x4d8]
    unsigned long long v41;  // [bp-0x4c8]
    char v42;  // [bp-0x4c0]
    int v43;  // [bp-0x258]
    char v44;  // [bp-0x248]
    unsigned long long v45;  // [bp-0x238]
    char v46;  // [bp-0x230]
    char v47;  // [bp-0x220]
    char v48;  // [bp-0x1b8]
    unsigned long long v49;  // [bp-0x1a8]
    char v50;  // [bp-0x1a0]
    unsigned long long v51;  // [bp-0x190]
    char v52;  // [bp-0x188]
    unsigned long long v53;  // [bp-0x178]
    char v54;  // [bp-0x170]
    unsigned long long v55;  // [bp-0x160]
    unsigned long long v57;  // r14
    unsigned long long v58[3];  // rbx
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rbx
    unsigned long long v61;  // rax
    unsigned long long v62;  // rbx
    int v63;  // xmm0
    unsigned long long v64;  // rax
    unsigned long long v65[3];  // rax
    unsigned long long v66[3];  // rbx
    unsigned long long v67[3];  // rbx
    unsigned long long v68;  // rax
    unsigned long long v69;  // r13
    char v70;  // al
    int v71;  // xmm0
    int v74;  // [bp-0x508]
    int v75;  // [bp-0x4f8]

    v57 = a0;
    uu_date::uu_app(&v30);
    (char)v5.try_get_matches_from(&v30, a0, a1);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        return v24.from();
    v27 = *((long long *)&v10);
    memcpy(&v26, &v9, 16);
    memcpy(&v25, &v7, 16);
    v23 = v5;
    v24 = v6;
    v30.try_get_one(&v23, "formaterrordate-error-invalid-daterfc-emailsetuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs", 6);
    v58 = "formaterrordate-error-invalid-daterfc-emailsetuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs".unwrap(6, &v30);
    if (!v58)
    {
        v30.try_get_many(&v23, "iso-8601", 8);
        (char)v5.unwrap("iso-8601", 8, &v30);
        if (v5)
        {
            v63 = (int128_t)v5;
            memcpy(&v38, &v10, 16);
            memcpy(&v37, &v9, 16);
            *((int128_t *)&v35) = *((int128_t *)&v7);
            v30 = v63;
            v15 = uu_date::uumain::uumain::{{closure}}(&v30);
            v64 = 0x8000000000000000;
        }
        else if ((char)v23.get_flag("rfc-emailsetuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs", 9))
        {
            v64 = 9223372036854775809;
        }
        else
        {
            v30.try_get_one(&v23, "rfc-3339saturday", 8);
            v65 = "rfc-3339saturday".unwrap(8, &v30);
            if (v65)
            {
                v15 = v65[1].from(v65[2]);
                v64 = 9223372036854775810;
            }
            else
            {
                v64 = 9223372036854775812;
            }
        }
        v14 = v64;
        goto LABEL_5e3364;
    }
    v31 = 0;
    if (!(char)core::slice::<impl [T]>::starts_with(v58[1], v58[2], ::0x5df0a0::core::char::methods::encode_utf8_raw(43, &v30), v59))
    {
        v30.to_vec("datethur]", 4);
        v7 = v35;
        *((int128_t *)&v5) = *((int128_t *)&v30);
        v30.clone(v58);
        v49 = v7;
        memcpy(&v48, &v5, 16);
        memcpy(&v50, &v30, 16);
        v51 = v35;
        v30.from_iter(&v48);
        uucore::mods::locale::get_message_with_args(&v44, "date-error-invalid-daterfc-emailsetuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs", 23, &v30);
        v36 = 1;
        memcpy(&v30, &v44, 16);
        v35 = v45;
        v62 = v30.new();
        goto LABEL_5e385d;
    }
    v57 = v58[1];
    v60 = v58[2];
    v61 = v57.get(v60);
    if (!v61)
        core::str::slice_error_fail(v57, v60, 1, v60, &g_7d8f28); /* do not return */
    v30.to_vec(v61, v59);
    v16 = v34;
    *((int128_t *)&v13) = *((int128_t *)&v30);
LABEL_5e3364:
    v30.try_get_one(&v23, "datethur]", 4);
    v66 = "datethur]".unwrap(4, &v30);
    if (v66)
    {
        uu_date::parse_offset(&v30, v66[1], v66[2]);
        if (((char)v32 & 1))
        {
            v30.clone(v66);
            v20 = v34;
            *((int128_t *)&v18) = (int128_t)v30;
            v17 = 1;
        }
        else
        {
            v18 = (long long)(&v30)[8];
            v19 = v34;
            v17 = 4;
        }
    }
    else
    {
        v30.try_get_one(&v23, "filemode{", 4);
        v67 = "filemode{".unwrap(4, &v30);
        if (!v67)
        {
            v17 = 0;
        }
        else if ((char)v67[1].equal(v67[2], "-formaterrordate-error-invalid-daterfc-emailsetuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs", 1))
        {
            v17 = 3;
        }
        else
        {
            v30.to_owned(v67[1], v67[2]);
            v20 = v34;
            *((int128_t *)&v18) = (int128_t)v30;
            v17 = 2;
        }
    }
    v30.try_get_one(&v23, "setuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs", 3);
    v68 = "setuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs".unwrap(3, &v30);
    if (v68)
    {
        v30.call_once(v68);
        memcpy(&v21, &v30, 16);
        v57 = v36;
        v22 = v74;
        if (v32 == 9223372036854775809)
        {
            v69 = 0;
        }
        else if ((char)(((0 ^ v32) & (0 ^ -(v32))) >> 63))
        {
            v43 = v21;
            v29 = v22;
            v69 = 1;
        }
        else
        {
            v11 = v32;
            v12 = v21;
            v0 = v57;
            v1 = v22;
            v30.to_vec("datethur]", 4);
            v7 = v34;
            *((int128_t *)&v5) = (int128_t)v30;
            v30.clone(&v11);
            v53 = v7;
            memcpy(&v52, &v5, 16);
            memcpy(&v54, &v30, 16);
            v55 = v34;
            v30.from_iter(&v52);
            uucore::mods::locale::get_message_with_args(&v46, "date-error-invalid-daterfc-emailsetuniversalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs", 23, &v30);
            v36 = 1;
            memcpy(&v30, &v46, 16);
            v35 = *((long long *)&v47);
            v62 = v30.new();
            ::0x5ded80::core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&v0);
            ::0x5dec20::core::ptr::drop_in_place<alloc::string::String>(&v11);
            core::ptr::drop_in_place<uu_date::DateSource>(&v17);
            core::ptr::drop_in_place<uu_date::Format>(&(char)v13);
LABEL_5e385d:
LABEL_5e4407:
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v23);
            return v62;
        }
    }
    else
    {
        v69 = 0;
    }
    v70 = v23.get_flag("universalsystem time is valid/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/jiff-0.2.15/src/zoned.rs", 9);
    v41 = v16;
    memcpy(&v40, &v13, 16);
    memcpy(&v75, &v17, 16);
    memcpy(&v39, &v19, 16);
    v33 = v43;
    memcpy(&v74, &v29, 16);
    v42 = v70;
    v31 = v69;
    v36 = v57;
    if (v69)
    {
        if (v42)
        {
            (char)v0.new((long long)v33, v34, 1);
            v9 = *((long long *)&v4);
            v71 = *((int128_t *)&v0);
            *((int128_t *)&v7) = *((int128_t *)&v2);
            v5 = v71;
            v62 = uu_date::set_system_datetime(&(char)v5);
            core::ptr::drop_in_place<jiff::zoned::Zoned>(v57);
        }
        else
        {
            v0 = (long long)v33;
            v1 = v34;
            v2 = v57;
            v3 = v29;
            v9 = (long long)(&v3)[8];
            v7 = v2;
            v8 = (long long)v3;
            v5 = v0;
            v6 = v1;
            v62 = uu_date::set_system_datetime(&v5);
        }
        core::ptr::drop_in_place<uu_date::Format>(&v40);
        core::ptr::drop_in_place<uu_date::DateSource>(&v75);
        if (!((~((char)v31) | (char)v69) & 1))
            core::ptr::drop_in_place<jiff::zoned::Zoned>(v36);
    }
    else
    {
        if (v42)
        {
            v28.new(jiff::timestamp::Timestamp::now(), v59, 1);
        }
        else
        {
            (char)v5.try_from(jiff::now::sys::system_time(), v59);
            v28.expect(&(char)v5);
        }
        goto (long long)(g_46a5f8[v75] + (char *)&g_46a5f8[0]);
    }
    goto LABEL_5e4407;
}
