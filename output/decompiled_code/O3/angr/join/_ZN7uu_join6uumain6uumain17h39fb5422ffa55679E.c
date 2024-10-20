long long uu_join::uumain::uumain::h39fb5422ffa55679(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x650], Other Possible Types: unsigned long long, unsigned long
    uint128_t v1[2];  // [sp-0x648], Other Possible Types: unsigned long
    uint128_t v2[2];  // [sp-0x640], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [bp-0x638], Other Possible Types: unsigned int
    char v4;  // [bp-0x628]
    char v5;  // [bp-0x618]
    char v6;  // [bp-0x608]
    char v7;  // [bp-0x5f8]
    char v8;  // [bp-0x370]
    char v9;  // [bp-0x368]
    char v10;  // [bp-0x360]
    char v11;  // [bp-0x350]
    char v12;  // [bp-0x340]
    unsigned long v13;  // [sp-0x218], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x208]
    int v16;  // [sp-0x200]
    int v17;  // [sp-0x1f0]
    int v18;  // [sp-0x1e0]
    int v19;  // [sp-0x1d0]
    unsigned long long v20;  // [sp-0x1c0]
    unsigned long v21;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0x78]
    int v23;  // [sp-0x70]
    int v24;  // [sp-0x60]
    unsigned long long v25;  // [sp-0x50]
    uint128_t v29[2];  // rax
    unsigned long long v30[3];  // rbx
    unsigned long long v31[3];  // r12
    unsigned long long v32;  // rax
    uint128_t v33[2];  // rax
    int v34;  // xmm0

    uu_join::uu_app::hece56a249dc8a57d(&v0);
    clap_builder::builder::command::Command::try_get_matches_from::he63839741fa77f45(&v8, &v0, a0, a1);
    if (v21 == 0x8000000000000000)
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0cdf31ef837cc412(v22);
        return v29;
    }
    v25 = *((long long *)&v12);
    *((int128_t *)&v24) = *((int128_t *)&v11);
    *((int128_t *)&v23) = *((int128_t *)&v10);
    v21 = *((long long *)&v8);
    v22 = *((long long *)&v9);
    uu_join::parse_settings::hf734c75a77e0b641(&v0, &v21);
    if (v13 != 0x8000000000000000)
    {
        v20 = *((long long *)&v7);
        *((int128_t *)&v19) = *((int128_t *)&v6);
        *((int128_t *)&v18) = *((int128_t *)&v5);
        *((int128_t *)&v17) = *((int128_t *)&v4);
        *((int128_t *)&v16) = *((int128_t *)&v3);
        v13 = v0;
        *((uint128_t *[2])&v29[0]) = v1;
        v15 = v2;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h31b1474d3de76ade(&v0, &v21, "file1file2-", 5);
        v30 = clap_builder::parser::error::MatchesError::unwrap::h4849b5b03cdca8a2("file1file2-", 5, &v0);
        if (!v30)
        {
            goto LABEL_44654e;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h31b1474d3de76ade(&v0, &v21, "file2-", 5);
            v31 = clap_builder::parser::error::MatchesError::unwrap::h4849b5b03cdca8a2("file2-", 5, &v0);
            if (!v31)
            {
LABEL_44654e:
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            }
            else if (!((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf7a2b52011c30979(v30[1], v30[2], "-", 1)) || !((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf7a2b52011c30979(v31[1], v31[2], "-", 1)))
            {
                v32 = (long long)(&v17)[8] ^ 0x8000000000000000;
                if (v32 >= 4)
                    v32 = 1;
                goto *((int *)(4268672 + vvar_38{reg 24} * 4)) + 4268672;
            }
            else
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h5633f7e0e1157baf(&v0, 35, 0);
                if (v0)
                    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                v33 = v2;
                v33[1] = 146760927701809502397250260650940309620;
                v33[0] = 148117698967430905040467717767973597026;
                *((int *)((char *)&v33[1] + 15)) = 1953853550;
                v3 = 1;
                v0 = v1;
                *((uint128_t *[2])&v1[0]) = v33;
                v2 = 35;
                v29 = __rust_alloc(32, 8);
                if (!v29)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v34 = *((int128_t *)&v0);
                v29[1] = *((int128_t *)&v2);
                *((void*)&v29[0]) = v34;
                core::ptr::drop_in_place$LT$uu_join..Settings$GT$::h0270abb223b99291(&v13);
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h3a819d6649e5eb9e(&v21);
    return v29;
}
