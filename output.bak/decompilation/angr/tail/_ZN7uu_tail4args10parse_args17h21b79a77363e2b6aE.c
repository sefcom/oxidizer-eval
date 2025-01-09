long long uu_tail::args::parse_args::h21b79a77363e2b6a(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x400]
    char v1;  // [bp-0x3f8]
    char v2;  // [bp-0x3f0]
    char v3;  // [bp-0x3e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x3e0]
    unsigned long v5;  // [sp-0x3d8], Other Possible Types: unsigned long long
    int v6;  // [sp-0x3d0]
    int v7;  // [sp-0x3c0]
    int v8;  // [sp-0x3b0]
    unsigned long long v9;  // [sp-0x3a0]
    int v10;  // [bp-0x398], Other Possible Types: unsigned int
    int v11;  // [sp-0x388]
    int v12;  // [sp-0x378]
    unsigned long long v13;  // [sp-0x368]
    int v14;  // [sp-0x358]
    int v15;  // [sp-0x348]
    int v16;  // [sp-0x338]
    unsigned long long v17;  // [sp-0x328]
    char v18;  // [bp-0x320]
    char v19;  // [bp-0x318]
    char v20;  // [bp-0x310]
    char v21;  // [bp-0x300]
    char v22;  // [bp-0x2f0]
    char v23;  // [bp-0x2e8]
    char v24;  // [bp-0x2e0]
    char v25;  // [bp-0x2d8]
    char v26;  // [bp-0x2d0]
    char v27;  // [bp-0x2c0]
    char v28;  // [bp-0x2b0]
    char v29;  // [bp-0x2a0]
    unsigned long long v31;  // r15
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rcx
    unsigned long long v37[6];  // rax
    unsigned long long v38;  // r14
    unsigned long long v39;  // rsi
    int v40;  // xmm0
    unsigned long long v41;  // r15
    unsigned long long v42;  // r12
    void* v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rcx
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2

    core::iter::traits::iterator::Iterator::collect::h9a07ea5ceb8902af(&v0, a1, a2);
    uu_tail::args::uu_app::hb87d3ad1fe9d91d4(&v23);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb500688f0df0df44(&v3, &v0);
    clap_builder::builder::command::Command::try_get_matches_from::he22c6d91c73138b9(&v18, &v23, &v3);
    v31 = *((long long *)&v18);
    if (v31 != 0x8000000000000000)
    {
        v13 = *((long long *)&v22);
        *((int128_t *)&v12) = *((int128_t *)&v21);
        *((int128_t *)&v11) = *((int128_t *)&v20);
        *((int128_t *)&v10) = *((int128_t *)&v18);
        uu_tail::args::Settings::from::h35563f42b90fb353(&v23, &v10);
        v34 = *((long long *)&v23);
        v35 = *((long long *)&v24);
        v36 = *((long long *)&v25);
        if (v3 == 5)
        {
            *((unsigned long long *)&a0->padding_8[0]) = v4;
            a0->field_10 = v5;
            a0->field_0 = 5;
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9697b187ba43e683(&v10);
            ::0x4a9db0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h11a21213503eb125(&v0);
            return a0;
        }
        v9 = *((long long *)&v29);
        *((int128_t *)&v8) = *((int128_t *)&v28);
        *((int128_t *)&v7) = *((int128_t *)&v27);
        *((int128_t *)&v6) = *((int128_t *)&v26);
        v3 = v34;
        v4 = v35;
        v5 = v36;
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h9697b187ba43e683(&v10);
        if ((*((long long *)&v2) & -2) != 2)
        {
            a0->field_30 = (int128_t)(&v8)[8];
            v39 = (long long)v6;
            v40 = (int128_t)(&v6)[8];
            a0->field_28 = (int128_t)(&v7)[8];
            *((void*)&a0->field_20) = v40;
            a0->field_10 = v5;
            a0->field_18 = v39;
            a0->field_0 = v3;
            *((unsigned long long *)&a0->padding_8[0]) = v4;
            ::0x4a9db0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h11a21213503eb125(&v0);
            return a0;
        }
        v37 = *((long long *)&v1);
        v38 = &v37[3];
        goto LABEL_4aa62c;
        goto LABEL_4aa62c;
    }
    else
    {
        v4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(*((long long *)&v19));
        v5 = v32;
        v3 = 5;
        v33 = *((long long *)&v2);
        if ((v33 & -2) != 2)
        {
            a0->field_30 = (int128_t)(&v8)[8];
            vvar_392{reg 64} = (long long)v6;
            vvar_393{reg 224} = (int128_t)(&v6)[8];
            a0->field_28 = (int128_t)(&v7)[8];
            *((void*)&a0->field_20) = v40;
            a0->field_10 = v5;
            a0->field_18 = v39;
            a0->field_0 = v3;
            *((unsigned long long *)&a0->padding_8[0]) = v4;
            ::0x4a9db0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h11a21213503eb125(&v0);
            return a0;
        }
        v37 = *((long long *)&v1);
        v38 = &v37[3];
        if (v31 == 0x8000000000000000)
        {
LABEL_4aa694:
            v43 = v37 + 1;
            if (3 > v33)
                v43 = 0;
            uu_tail::args::parse_obsolete::hfe2542368a23c75b(&v23, v38, v43);
            v44 = *((long long *)&v23);
            v45 = *((long long *)&v24);
            v46 = *((long long *)&v25);
            if (v44 == 6)
            {
                *((unsigned long long *)&a0->padding_8[0]) = v45;
                a0->field_10 = v46;
                a0->field_0 = 5;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h81b323902802f082(&v3);
            }
            else
            {
                v17 = *((long long *)&v29);
                *((int128_t *)&v16) = *((int128_t *)&v28);
                *((int128_t *)&v15) = *((int128_t *)&v27);
                *((int128_t *)&v14) = *((int128_t *)&v26);
                if ((unsigned int)v44 == 5)
                    goto LABEL_4aa7cb;
                *((unsigned long long *)((char *)&a0->field_30 + 8)) = v17;
                *((void*)((char *)&a0->field_28 + 8)) = v16;
                *((void*)((char *)&a0->field_20 + 8)) = v15;
                *((void*)&a0->field_18) = v14;
                a0->field_0 = v44;
                *((unsigned long long *)&a0->padding_8[0]) = v45;
                a0->field_10 = v46;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_tail..args..Settings$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h81b323902802f082(&v3);
            }
        }
        else
        {
LABEL_4aa62c:
            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v23, v37[4], v37[5]);
            v41 = *((long long *)&v24);
            v42 = *((long long *)&v25);
            v10 = 0;
            if ((char)core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h816ac8a5e781244a(v41, v42, ::0x4aa130::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&v10), v32))
            {
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hc14f4d026d489064(&v23);
                v37 = *((long long *)&v1);
                v33 = *((long long *)&v2);
                goto LABEL_4aa694;
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hc14f4d026d489064(&v23);
LABEL_4aa7cb:
                a0->field_30 = (int128_t)(&v8)[8];
                v47 = *((int128_t *)&v3);
                v48 = *((int128_t *)&v5);
                v49 = (int128_t)(&v6)[8];
                a0->field_28 = (int128_t)(&v7)[8];
                *((void*)&a0->field_20) = v49;
                *((void*)&a0->field_10) = v48;
                *((void*)&a0->field_0) = v47;
            }
        }
        ::0x4a9db0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h11a21213503eb125(&v0);
        return a0;
    }
}
