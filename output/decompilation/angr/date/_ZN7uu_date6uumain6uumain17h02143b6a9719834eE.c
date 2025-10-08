long long uu_date::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char *v0;  // [bp-0x680]
    unsigned long long v1;  // [bp-0x678]
    unsigned long long v2;  // [bp-0x658]
    unsigned int v3;  // [bp-0x650]
    unsigned long long v4;  // [bp-0x640]
    unsigned int v5;  // [bp-0x638]
    char *v6;  // [bp-0x630], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x628], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x624]
    unsigned int v9;  // [bp-0x61c]
    int v10;  // [bp-0x5f8], Other Possible Types: void*, char
    void* v11;  // [bp-0x5f8], Other Possible Types: unsigned long long
    char v12;  // [bp-0x5f0], Other Possible Types: unsigned long long
    unsigned int v13;  // [bp-0x5f0]
    unsigned long long v14;  // [bp-0x5ec]
    int v15;  // [bp-0x5e8], Other Possible Types: char, unsigned long long
    unsigned int v16;  // [bp-0x5e4]
    char v17;  // [bp-0x5e0]
    int v18;  // [bp-0x5d8]
    unsigned long long v19;  // [bp-0x5c8]
    unsigned int v20;  // [bp-0x5c0]
    unsigned long long v21;  // [bp-0x5bc]
    unsigned int v22;  // [bp-0x5b8]
    unsigned int v23;  // [bp-0x5b4]
    char v24;  // [bp-0x5b0]
    int v25;  // [bp-0x5a8]
    unsigned long long v26;  // [bp-0x5a8]
    unsigned long long v27;  // [bp-0x5a8]
    char v28;  // [bp-0x5a0]
    unsigned long long v29;  // [bp-0x598]
    unsigned long long v30;  // [bp-0x568]
    int v31;  // [bp-0x560], Other Possible Types: unsigned long long
    unsigned int v32;  // [bp-0x558]
    unsigned long long v33;  // [bp-0x550]
    unsigned long long v34;  // [bp-0x520]
    unsigned int v35;  // [bp-0x518]
    unsigned long long v36;  // [bp-0x510]
    unsigned long long v37;  // [bp-0x508]
    char v38;  // [bp-0x500]
    int v39;  // [bp-0x4f0]
    unsigned long long v40;  // [bp-0x4e0]
    unsigned long long v41;  // [bp-0x4c8]
    unsigned int v42;  // [bp-0x4c0]
    int v43;  // [bp-0x4b8], Other Possible Types: char
    int v44;  // [bp-0x4b8], Other Possible Types: unsigned int
    int v45;  // [bp-0x4b8], Other Possible Types: unsigned long long
    unsigned long long v46;  // [bp-0x4b0]
    unsigned int v47;  // [bp-0x4ac]
    int v48;  // [bp-0x4a8], Other Possible Types: char *, char, unsigned long, unsigned long long
    unsigned int v49;  // [bp-0x4a4]
    unsigned int v50;  // [bp-0x4a0], Other Possible Types: unsigned long long
    int v51;  // [bp-0x498], Other Possible Types: void*
    unsigned long long v52;  // [bp-0x490]
    char v53;  // [bp-0x488]
    char v54;  // [bp-0x1e8]
    char v55;  // [bp-0x1d8]
    unsigned long long v56;  // [bp-0x1c8]
    int v57;  // [bp-0x1b8], Other Possible Types: char
    unsigned long v58;  // [bp-0x1a8]
    int v59;  // [bp-0x1a0], Other Possible Types: char
    char v60;  // [bp-0x190]
    unsigned long long v62[3];  // r14
    unsigned long long v63;  // rax
    unsigned long long v64;  // r14
    unsigned long long v65;  // rax
    unsigned long long v66;  // rdx
    unsigned long long v67;  // rcx
    unsigned long long v68;  // rbx
    int v69;  // xmm0
    int v70;  // xmm1
    unsigned long long v71;  // rax
    unsigned long long v72[3];  // rax
    unsigned long long v73[3];  // r14
    unsigned long long v74[3];  // rax
    unsigned long long v75;  // rax
    unsigned int v76;  // ebp
    char v77;  // al
    int v78;  // xmm1

    uu_date::uu_app(&v43);
    v10.try_get_matches_from(&v43, a0, a1);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
        return *((long long *)&v12).from();
    v40 = v19;
    v39 = v18;
    memcpy(&v38, &v15, 16);
    v36 = v11;
    v37 = *((long long *)&v12);
    v43.try_get_one(&v36, "formatrfc-emailsetuniversal%f%N/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 6);
    v62 = "formatrfc-emailsetuniversal%f%N/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ".unwrap(6, &v43);
    if (v62)
    {
        v44 = 0;
        v63 = ::0x5fcbd0::core::char::methods::encode_utf8_raw(43, &v44);
        if (!(char)core::slice::<impl [T]>::starts_with(v62[1], v62[2], v63))
        {
            v67 = v62[2];
            v10 = 0;
            v12 = v62[1];
            v15 = v67;
            v17 = 1;
            v6 = &v10;
            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v44) = &g_74b078;
            v46 = 1;
            v51 = 0;
            v48 = &v6;
            v50 = 1;
            v57.map_or_else(&(unsigned long long)v44);
            v50 = 1;
            v44 = v57;
            v48 = v58;
            v68 = (unsigned long long)v44.new();
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
            return v68;
        }
        v64 = v62[2];
        v65 = 1.get(v62[1], v64);
        if (!v65)
            core::str::slice_error_fail(v62[1], v64, 1, v64, &g_74b160); /* do not return */
        v44.to_vec(v65, v66);
        v29 = *((long long *)&v48);
        *((int128_t *)&v25) = *((int128_t *)&v44);
    }
    else
    {
        v43.try_get_many(&v36);
        v10.unwrap(&v43);
        if (v11)
        {
            v69 = *((int128_t *)&v11);
            v70 = *((int128_t *)&v15);
            memcpy(&v53, &v19, 16);
            v51 = v18;
            v48 = v70;
            v43 = v69;
            v28 = uu_date::uumain::uumain::{{closure}}(&v43);
            v26 = 0x8000000000000000;
        }
        else
        {
            if ((char)v36.get_flag("rfc-emailsetuniversal%f%N/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 9))
            {
                v71 = 9223372036854775809;
            }
            else
            {
                v43.try_get_one(&v36, "rfc-3339saturday", 8);
                v72 = "rfc-3339saturday".unwrap(8, &v43);
                if (v72)
                {
                    v28 = v72[1].from(v72[2]);
                    v71 = 9223372036854775810;
                }
                else
                {
                    v71 = 9223372036854775812;
                }
            }
            v27 = v71;
        }
    }
    v44.try_get_one(&v36, "datethur]", 4);
    v73 = "datethur]".unwrap(4, &v44);
    if (v73)
    {
        v54.now();
        parse_datetime::parse_datetime_at_date(&v44, &v54, v73[1], v73[2]);
        if (v45 == 9223372036854775810)
        {
            v31 = (char)v43.signed_duration_since(&v54);
            v32 = v66;
            v30 = 4;
            v44.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
        }
        else
        {
            v44.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
            v44.clone(v73);
            v33 = (long long)v48;
            *((int128_t *)&v31) = *((int128_t *)&v44);
            v30 = 1;
        }
    }
    else
    {
        v44.try_get_one(&v36, "filemode{", 4);
        v74 = "filemode{".unwrap(4, &v44);
        if (!v74)
        {
            v30 = 0;
        }
        else if ((char)v74[1].equal(v74[2], "-expected file, got directory invalid format ", 1))
        {
            v30 = 3;
        }
        else
        {
            v44.to_vec(v74[1], v74[2]);
            v33 = (long long)v48;
            *((int128_t *)&v31) = *((int128_t *)&v44);
            v30 = 2;
        }
    }
    v45.try_get_one(&v36, "setuniversal%f%N/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 3);
    v75 = "setuniversal%f%N/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ".unwrap(3, &v45);
    v76 = 0;
    if (v75)
    {
        uu_date::parse_date(&v45, v75);
        v2 = *((long long *)&v47);
        v3 = v49;
        memcpy(&v55, &v48, 16);
        v56 = v52;
        if ((char)(((0 ^ v45) & (0 ^ -(v45))) >> 63))
        {
            v35 = v3;
            v34 = v2;
            v76 = (int)(&v43)[8];
        }
        else if (v45 != 9223372036854775809)
        {
            v6 = v45;
            v7 = (int)(&v43)[8];
            v9 = v3;
            v8 = v2;
            v11 = 0;
            v13 = v7;
            v14 = v8;
            v16 = v9;
            v17 = 1;
            v0 = &v11;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            *((unsigned long long **)&v45) = &g_74b078;
            v46 = 1;
            v51 = 0;
            v48 = &v0;
            v50 = 1;
            v59.map_or_else(&(unsigned long long)v45);
            v50 = 1;
            v45 = v59;
            v48 = *((long long *)&v60);
            v68 = (unsigned long long)v45.new();
            core::ptr::drop_in_place<parse_datetime::ParseDateTimeError>(&v55);
            core::ptr::drop_in_place<alloc::string::String>(&v6);
            core::ptr::drop_in_place<uu_date::DateSource>(&v30);
            core::ptr::drop_in_place<uu_date::Format>(&(char)v26);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
            return v68;
        }
    }
    v77 = v36.get_flag("universal%f%N/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 9);
    v19 = v29;
    memcpy(&v18, &v26, 16);
    v78 = (int128_t)(&v31)[8];
    *((int128_t *)&v10) = *((int128_t *)&v30);
    v15 = v78;
    v21 = v34;
    v23 = v35;
    v24 = v77;
    v20 = v76;
    if (v76)
    {
        v42 = v22;
        v41 = *((long long *)&v20);
        v68 = uu_date::set_system_datetime(&v41);
        core::ptr::drop_in_place<uu_date::Settings>(&v10);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v36);
        return v68;
    }
    if (v24)
    {
        v45.now();
        v5 = (int)(&v43)[8];
        v4 = v45;
        goto (long long)(g_4fc418[v11] + (char *)&g_4fc418[0]);
    }
    else
    {
        v45.now();
        v5 = (int)(&v43)[8];
        v4 = v45;
        goto (long long)(g_4fc418[v11] + (char *)&g_4fc418[0]);
    }
}
