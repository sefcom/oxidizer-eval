void uu_tail::args::parse_args(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x410], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x408]
    unsigned long long v2;  // [bp-0x400]
    int v3;  // [bp-0x3f8]
    unsigned long long v4;  // [bp-0x3f0]
    int v5;  // [bp-0x3e8]
    unsigned long long v6;  // [bp-0x3e0]
    int v7;  // [bp-0x3d8]
    unsigned long long v8;  // [bp-0x3d0]
    unsigned long long v9;  // [bp-0x3c8]
    char v10;  // [bp-0x3c0]
    unsigned long long v11[6];  // [bp-0x3b8]
    unsigned long long v12;  // [bp-0x3b0]
    char v13;  // [bp-0x3a8], Other Possible Types: unsigned int
    int v14;  // [bp-0x398]
    int v15;  // [bp-0x388]
    unsigned long long v16;  // [bp-0x378]
    int v17;  // [bp-0x368]
    int v18;  // [bp-0x358]
    int v19;  // [bp-0x348], Other Possible Types: char
    unsigned long long v20;  // [bp-0x338]
    char v21;  // [bp-0x330], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x328]
    int v23;  // [bp-0x320]
    int v24;  // [bp-0x310]
    unsigned long long v25;  // [bp-0x300]
    unsigned long long v26;  // [bp-0x2f8]
    unsigned long long v28;  // [bp-0x2f0]
    unsigned long long v29;  // [bp-0x2e8]
    int v30;  // [bp-0x2e0]
    int v31;  // [bp-0x2d0]
    int v32;  // [bp-0x2c0]
    char v33;  // [bp-0x2b0]
    unsigned long long v35;  // rdx
    char v36;  // al
    int v37;  // xmm0
    int v38;  // xmm1
    int v39;  // xmm2
    unsigned long long v40;  // rsi
    int v41;  // xmm0

    v10.collect(a1, a2);
    uu_tail::args::uu_app(&(char)v26);
    v0.clone(v11, v12);
    v21.try_get_matches_from(&(char)v26, &v0);
    if ((char)(((0 ^ v21) & (0 ^ -(v21))) >> 63))
    {
        v1 = v22.from();
        v2 = v35;
        v0 = 5;
        if ((576460752303423486 & v12) != 2)
            goto LABEL_48ba23;
        goto LABEL_48b878;
    }
    v16 = v25;
    v15 = v24;
    v14 = v23;
    memcpy(&v13, &v21, 16);
    (char)v26.from(&v13);
    if (v26 == 5)
    {
        *((unsigned long long *)&a0[8]) = v28;
        *((unsigned long long *)&a0[16]) = v29;
        *((unsigned long long *)a0) = 5;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
    }
    else
    {
        v9 = *((long long *)&v33);
        v7 = v32;
        v5 = v31;
        v3 = v30;
        v0 = v26;
        v1 = v28;
        v2 = v29;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v13);
        if ((576460752303423486 & v12) == 2)
        {
            (char)v26.from_utf8_lossy(v11[4], v11[5]);
            v13 = 0;
            v36 = core::slice::<impl [T]>::starts_with(v28, v29, ::0x48a600::core::char::methods::encode_utf8_raw(&v13));
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v26, v28);
            if (!v36)
                goto LABEL_48baab;
LABEL_48b878:
            uu_tail::args::parse_obsolete(&(char)v26, &v11[3], (3 <= v12 ? v11 + 1 : 0));
            if (v26 == 6)
            {
                *((unsigned long long *)&a0[8]) = v28;
                *((unsigned long long *)&a0[16]) = v29;
                *((unsigned long long *)a0) = 5;
                goto LABEL_48bb14;
            }
            else
            {
                v20 = *((long long *)&v33);
                memcpy(&v19, &v32, 16);
                v18 = v31;
                v17 = v30;
                if ((unsigned int)v26 == 5)
                {
LABEL_48baab:
                    *((int128_t *)&a0[64]) = *((int128_t *)&v8);
                    v37 = *((int128_t *)&v0);
                    v38 = *((int128_t *)&v2);
                    v39 = *((int128_t *)&v4);
                    *((int128_t *)&a0[48]) = *((int128_t *)&v6);
                    a0[32] = v39;
                    a0[16] = v38;
                    *(a0) = v37;
                }
                else
                {
                    *((unsigned long long *)&a0[72]) = v20;
                    a0[56] = v19;
                    a0[40] = v18;
                    a0[24] = v17;
                    *((unsigned long long *)a0) = v26;
                    *((unsigned long long *)&a0[8]) = v28;
                    *((unsigned long long *)&a0[16]) = v29;
LABEL_48bb14:
                    core::ptr::drop_in_place<core::result::Result<uu_tail::args::Settings,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(&v0);
                }
            }
        }
        else
        {
LABEL_48ba23:
            *((int128_t *)&a0[64]) = *((int128_t *)&v8);
            v40 = (long long)v3;
            v41 = *((int128_t *)&v4);
            *((int128_t *)&a0[48]) = *((int128_t *)&v6);
            a0[32] = v41;
            *((unsigned long long *)&a0[16]) = v2;
            *((unsigned long long *)&a0[24]) = v40;
            *((unsigned long long *)a0) = v0;
            *((unsigned long long *)&a0[8]) = v1;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v10);
    return;
}
