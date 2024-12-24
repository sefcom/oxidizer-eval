long long uu_dd::uumain::uumain::ha181d47237076a0a(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x578]
    char v1;  // [bp-0x570]
    char v2;  // [bp-0x568]
    unsigned long v3;  // [sp-0x560], Other Possible Types: unsigned long long
    int v4;  // [sp-0x558]
    int v5;  // [sp-0x548]
    int v6;  // [sp-0x538]
    int v7;  // [sp-0x528]
    int v8;  // [sp-0x518]
    int v9;  // [sp-0x508]
    int v10;  // [sp-0x4f8]
    int v11;  // [sp-0x4e8]
    int v12;  // [sp-0x4d8]
    int v13;  // [sp-0x4c8]
    int v14;  // [sp-0x4b8]
    int v15;  // [sp-0x4a8]
    char v16;  // [bp-0x490], Other Possible Types: unsigned int
    unsigned int v17;  // [sp-0x48d]
    unsigned long v18;  // [sp-0x448], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0x440]
    int v20;  // [sp-0x438]
    int v21;  // [sp-0x428]
    unsigned long long v22;  // [sp-0x418]
    char v23;  // [bp-0x410], Other Possible Types: unsigned long long, unsigned long
    unsigned long v24;  // [sp-0x408], Other Possible Types: unsigned long long
    char v25;  // [bp-0x400]
    char v26;  // [bp-0x3f0]
    char v27;  // [bp-0x3e0]
    char v28;  // [bp-0x3d8]
    char v29;  // [bp-0x3c8]
    char v30;  // [bp-0x3b8]
    char v31;  // [bp-0x3a8]
    char v32;  // [bp-0x398]
    char v33;  // [bp-0x388]
    char v34;  // [bp-0x378]
    unsigned long v35;  // [sp-0x368], Other Possible Types: unsigned long long
    unsigned long long v36;  // [sp-0x360]
    int v37;  // [sp-0x358]
    int v38;  // [sp-0x348]
    unsigned long long v39;  // [sp-0x338]
    unsigned long long v40;  // [sp-0x330]
    char v41;  // [bp-0x328]
    char v42;  // [bp-0x320]
    char v43;  // [bp-0x318]
    char v44;  // [bp-0x308]
    char v45;  // [bp-0x2f8]
    char v46;  // [bp-0x2f0]
    int v47;  // [bp-0x2e8], Other Possible Types: void*, char
    unsigned int v48;  // [bp-0x2e7]
    unsigned long long v49;  // [sp-0x2e4], Other Possible Types: unsigned int
    int v50;  // [bp-0x2e0], Other Possible Types: char
    int v51;  // [bp-0x2d8], Other Possible Types: void*
    void* v52;  // [sp-0x2c8]
    void* v53;  // [sp-0x2b8]
    int v54;  // [sp-0x2a8]
    int v55;  // [sp-0x298]
    unsigned long long v56;  // [sp-0x288]
    unsigned long long v57;  // [sp-0x278]
    unsigned long long v58;  // [sp-0x260]
    int v59;  // [sp-0x248]
    int v60;  // [sp-0x238]
    int v61;  // [sp-0x228]
    char v62;  // [sp-0x218]
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67;  // rcx
    unsigned long long v71;  // rdx
    unsigned long long v72;  // r14
    unsigned long long v73;  // rbx
    int v76;  // xmm0

    uu_dd::uu_app::hccab1d6105fc018e(&v47, a1, v64);
    clap_builder::builder::command::Command::try_get_matches_from::hf22aff9bddce2602(&v23, &v47, a0, a1);
    if (v18 == 0x8000000000000000)
    {
        v65 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7cfa18d1f977710c(v19);
        return v65;
    }
    v22 = *((long long *)&v27);
    *((int128_t *)&v21) = *((int128_t *)&v26);
    *((int128_t *)&v20) = *((int128_t *)&v25);
    v18 = v23;
    v19 = v24;
    v57 = 0x8000000000000000;
    v58 = 0x8000000000000000;
    v47 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    *((int128_t *)&v54) = 0;
    *((int128_t *)&v55) = 0;
    v56 = 2;
    *((int128_t *)&v59) = 0;
    *((int128_t *)&v60) = 0;
    *((int128_t *)&v61) = 0;
    v62 = 3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h6db0931098e9d7af(&v16, &v18, "operands", 8);
    clap_builder::parser::error::MatchesError::unwrap::h7a684da793ea2ace(&v41, "operands", 8, &v16);
    v66 = *((long long *)&v41);
    if (v66)
    {
        v67 = *((long long *)&v42);
        v71 = *((long long *)&v46);
    }
    else
    {
        v67 = "&";
        v66 = core::ops::function::FnOnce::call_once::h08a568fcb8604b57;
        v71 = 0;
    }
    v35 = v66;
    v36 = v67;
    *((int128_t *)&v37) = *((int128_t *)&v43);
    *((int128_t *)&v38) = *((int128_t *)&v44);
    v39 = *((long long *)&v45);
    v40 = v71;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h23515de066b84e68(&v0, &v35, v40);
    uu_dd::parseargs::Parser::parse::h91be9f4dd71ca129(&v23, &v47, *((long long *)&v1), *((long long *)&v2));
    *((int128_t *)&v14) = *((int128_t *)&v24);
    *((int128_t *)&v15) = *((int128_t *)&(&v25)[8]);
    if (v3 == 3)
    {
        v51 = v15;
        v47 = v14;
        v65 = alloc::boxed::Box$LT$T$GT$::new::h00f59d495eae38ba(&v47);
        ::0x484f80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h2d816d2e1e95ebf9(&v0);
    }
    else
    {
        *((int128_t *)&v13) = *((int128_t *)&v34);
        *((int128_t *)&v12) = *((int128_t *)&v33);
        *((int128_t *)&v11) = *((int128_t *)&v32);
        *((int128_t *)&v10) = *((int128_t *)&v31);
        *((int128_t *)&v9) = *((int128_t *)&v30);
        *((int128_t *)&v8) = *((int128_t *)&v29);
        *((int128_t *)&v7) = *((int128_t *)&v28);
        *((int128_t *)&v6) = *((int128_t *)&(&v26)[8]);
        v4 = v14;
        v5 = v15;
        v3 = v23;
        ::0x484f80::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h2d816d2e1e95ebf9(&v0);
        if ((long long)(&v4)[8] == 0x8000000000000000)
        {
            uu_dd::Input::new_stdin::h7634afd9166c2628(&v47, &v3, v64);
        }
        else if (!(char)uu_dd::is_fifo::h3eb4a293c51ff4d7((long long)v5, (long long)(&v5)[8]))
        {
            uu_dd::Input::new_file::hdaa23f88e6737dc7(&v47, (long long)v5, (long long)(&v5)[8], &v3);
        }
        else
        {
            uu_dd::Input::new_fifo::h567732c77ba4777a(&v47, (long long)v5, (long long)(&v5)[8], &v3);
        }
        v72 = *((long long *)&v50);
        v73 = v51;
        if (v47)
        {
LABEL_48593c:
            core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::h3be193172a62f67e(&v3);
        }
        else
        {
            if ((long long)v6 != 0x8000000000000000)
            {
                if (!(char)uu_dd::is_fifo::h3eb4a293c51ff4d7((long long)(&v6)[8], (long long)v7))
                    uu_dd::Output::new_file::heb3995d6e9d10b89(&v47, (long long)(&v6)[8], (long long)v7, &v3);
                else
                    uu_dd::Output::new_fifo::he9ca46a60fe226d0(&v47, (long long)(&v6)[8], (long long)v7, &v3);
            }
            else
            {
                if (!(char)uu_dd::is_stdout_redirected_to_seekable_file::hb15285cbbe7ef8a2())
                    uu_dd::Output::new_stdout::h66e4a9bf79841a73(&v47, &v3, v64);
                else
                    uu_dd::Output::new_file_from_stdout::h253dc114c717ff67(&v47, &v3, v64);
            }
            if (v47 != 4)
            {
                v17 = v49;
                v16 = *((int *)((char *)&v47 + 1));
                v76 = *((int128_t *)&v50);
                v23 = v72;
                v24 = v73;
                v47 = v47;
                v48 = v16;
                v49 = v17;
                v50 = v76;
                v65 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h00b94cfaebae20ca(uu_dd::dd_copy::hc71a3ced2a888201(&v23, &v47, v49));
                core::ptr::drop_in_place$LT$uu_dd..Settings$GT$::h3be193172a62f67e(&v3);
            }
            else
            {
                core::ptr::drop_in_place$LT$uu_dd..Input$GT$::h4b5f4bd2089a7d76(v72 >> 32 & 4294967295);
                goto LABEL_48593c;
            }
        }
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h40925b3684b7b76e(&v18);
    return v65;
}
