long long linera_summary::main()
{
    unsigned long long v0;  // [bp-0xec8]
    unsigned long long v1;  // [bp-0xec0]
    int v2;  // [bp-0xeb8], Other Possible Types: char *
    int v3;  // [bp-0xeb8]
    int v4;  // [bp-0xeb8]
    unsigned long long v5;  // [bp-0xeb8]
    void* v6;  // [bp-0xeb0], Other Possible Types: unsigned long long
    int v7;  // [bp-0xea8], Other Possible Types: unsigned long long, unsigned long
    int v8;  // [bp-0xea8]
    void* v9;  // [bp-0xe98], Other Possible Types: char
    unsigned long v10;  // [bp-0xe90]
    int v11;  // [bp-0xe88]
    char v12;  // [bp-0xe78]
    char *v13;  // [bp-0xe68]
    char *v14;  // [bp-0xe60]
    unsigned long long v15;  // [bp-0xe58]
    char *v16;  // [bp-0xe50]
    unsigned long long v17;  // [bp-0xe48]
    unsigned long v18;  // [bp-0xe40]
    int v19;  // [bp-0xe38]
    char v20;  // [bp-0xe38]
    int v21;  // [bp-0xe28], Other Possible Types: char
    unsigned long v22;  // [bp-0xe18]
    unsigned long long v23;  // [bp-0xe10]
    int v24;  // [bp-0xe08]
    unsigned long long v25;  // [bp-0xe00]
    unsigned long long v26;  // [bp-0xdf8]
    int v27;  // [bp-0xdf8]
    int v28;  // [bp-0xdf8]
    void* v29;  // [bp-0xdf0]
    int v30;  // [bp-0xde8]
    char v31;  // [bp-0xdd8], Other Possible Types: unsigned long
    int v32;  // [bp-0xdc8]
    char v33;  // [bp-0xdb8]
    char *v34;  // [bp-0xda8]
    unsigned long long v35;  // [bp-0xda0]
    int v36;  // [bp-0xd98], Other Possible Types: char
    int v37;  // [bp-0xd88]
    unsigned long long v38;  // [bp-0xd78]
    char v39;  // [bp-0xd70]
    unsigned short v40;  // [bp-0xca3]
    unsigned long long v41;  // [bp-0xc98]
    int v42;  // [bp-0xc98]
    void* v43;  // [bp-0xc90], Other Possible Types: unsigned long long
    int v44;  // [bp-0xc88], Other Possible Types: char *, unsigned long
    unsigned long long v45;  // [bp-0xc80]
    void* v46;  // [bp-0xc78], Other Possible Types: unsigned long
    int v47;  // [bp-0xc70]
    int v48;  // [bp-0xc60]
    unsigned long long v49;  // [bp-0xc50]
    char v50;  // [bp-0xc20]
    char v53;  // al
    unsigned long long v54;  // rdi
    char v55;  // al
    unsigned long long v56;  // rax
    struct_2 *v57;  // rdx
    unsigned long v58;  // rax
    unsigned long v59;  // rax

    v36.init();
    linera_base::tracing::init("summaryFailed to create Tokio runtimelinera-summary::mainlinera_summaryevent linera-summary/src/main.rs:38", 7);
    v39.new_multi_thread();
    if (core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE, 0) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE, 0) <= 2)
    {
        v53 = _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E.interest();
        if (!v53 || !tracing::__macro_support::__is_enabled(_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E, v53))
            goto LABEL_88d3d3;
        v41 = 8;
        v43 = 0;
        v44 = _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E + 48;
        v20.new(_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E, &v41);
    }
    else
    {
LABEL_88d3d3:
        v41 = 2;
        v46 = _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E;
        if (!(char)core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E))
        {
            v5 = 8;
            v6 = 0;
            v7 = _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E + 48;
            v41.record_all(&v5);
        }
        v22 = v46;
        memcpy(&v21, &v44, 16);
        memcpy(&v20, &v41, 16);
    }
    v40 = 257;
    (unsigned long long)v42.build(&v39);
    (unsigned long long)v3.context(&(unsigned long long)v42);
    if (v5 == 2)
    {
        core::ptr::drop_in_place<tracing::span::Span>(&v20);
        core::ptr::drop_in_place<tokio::runtime::builder::Builder>(&v39);
        core::ptr::drop_in_place<linera_summary::summary_options::SummaryOptions>(&v36);
        return v6;
    }
    memcpy(&v33, &v12, 16);
    v32 = v11;
    memcpy(&v31, &v9, 16);
    v30 = v8;
    v26 = v5;
    v29 = v6;
    v49 = v38;
    v48 = v37;
    v47 = v36;
    v42 = v19;
    v44 = v21;
    v46 = v22;
    v50 = 0;
    v1 = v26.block_on(&(unsigned long long)v42);
    core::ptr::drop_in_place<tokio::runtime::runtime::Runtime>(&v26);
    v54 = 0;
    if (v1)
    {
        v0 = v1;
        if (core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE, 0) == 5)
        {
LABEL_88d5e4:
            if (!(char)core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E) && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE, 0))
            {
                v23 = 1;
                *((uint128_t *)&v24) = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_20;
                v56 = log::logger();
                if ((char)v57->field_18(v56, &v23))
                {
                    v58 = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_30[1];
                    *((unsigned long long [2])&v2) = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_30;
                    *((int128_t *)&v7) = *((int128_t *)&_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_38);
                    v9 = 0;
                    v10 = v58;
                    (unsigned long long)v42.next(&(unsigned long long)v3);
                    if (!v41)
                        core::option::expect_failed("FieldSet corrupted (this is a bug) jobs for run Filtered out  jobsReturning lint-check-outdated-cli-mdGot latest run for workflow \"\", on path \"\", for branch \"\" and event \"\", with \"success\" statusNo runs found for workflow \"", 34, &g_cd0938); /* do not return */
                    v31 = v46;
                    memcpy(&v30, &v44, 16);
                    *((int128_t *)&v27) = (int128_t)v42;
                    v34 = &v0;
                    v35 = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
                    v41 = &g_cd0910;
                    v43 = 1;
                    v46 = 0;
                    v44 = &v34;
                    v45 = 1;
                    v13 = &v26;
                    v14 = &v41;
                    v15 = &g_ccd5e8;
                    v16 = &v13;
                    v17 = 1;
                    v18 = &_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_30;
                    v7 = v25;
                    *((int128_t *)&v3) = *((int128_t *)&v23);
                    tracing::__macro_support::__tracing_log(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E, v56, v57, &(unsigned long long)v3, &v16);
                }
            }
        }
        else
        {
            v55 = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.interest();
            if (!v55 || !tracing::__macro_support::__is_enabled(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E, v55))
                goto LABEL_88d5e4;
            v59 = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_30[1];
            *((unsigned long long [2])&v4) = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_30;
            *((int128_t *)&v7) = *((int128_t *)&_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_38);
            v9 = 0;
            v10 = v59;
            (unsigned long long)v42.next(&(unsigned long long)v3);
            if (!v41)
                core::option::expect_failed("FieldSet corrupted (this is a bug) jobs for run Filtered out  jobsReturning lint-check-outdated-cli-mdGot latest run for workflow \"\", on path \"\", for branch \"\" and event \"\", with \"success\" statusNo runs found for workflow \"", 34, &g_cd0938); /* do not return */
            v31 = v46;
            memcpy(&v30, &v44, 16);
            *((int128_t *)&v28) = (int128_t)v42;
            v16 = &v0;
            v17 = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
            v41 = &g_cd0910;
            v43 = 1;
            v46 = 0;
            v44 = &v16;
            v45 = 1;
            v13 = &v26;
            v14 = &v41;
            v15 = &g_ccd5e8;
            v2 = &v13;
            v6 = 1;
            v7 = &_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E->field_30;
            linera_summary::main::{{closure}}(&v2);
        }
        core::ptr::drop_in_place<anyhow::Error>(&v0);
        v54 = 2;
    }
    std::process::exit(v54); /* do not return */
}
