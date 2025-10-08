fn linera_summary::main() -> long long {
    let v0: u64;  // [bp-0xec8]
    let v1: u64;  // [bp-0xec0]
    let v2: Result<struct80, struct16>;  // [bp-0xeb8], Other Possible Types: struct48, struct24
    let v3: struct80;  // [bp-0xeb8]
    let v4: u64;  // [bp-0xeb0]
    let v5: i64;  // [bp-0xe68], Other Possible Types: struct_9 *
    let v6: i64;  // [bp-0xe60], Other Possible Types: struct_7 *
    let v7: u64;  // [bp-0xe58]
    let v8: struct24;  // [bp-0xe50], Other Possible Types: struct_1 *
    let v9: u64;  // [bp-0xe48]
    let v10: iNone;  // [bp-0xe38], Other Possible Types: struct40
    let v11: iNone;  // [bp-0xe28]
    let v12: u64;  // [bp-0xe18]
    let v13: u64;  // [bp-0xe10]
    let v14: struct24;  // [bp-0xe10]
    let v15: u128;  // [bp-0xe08]
    let v16: struct80;  // [bp-0xdf8]
    let v17: u128;  // [bp-0xdf8]
    let v18: u128;  // [bp-0xdf8]
    let v19: iNone;  // [bp-0xde8]
    let v20: u64;  // [bp-0xdd8]
    let v21: i64;  // [bp-0xda8]
    let v22: u64;  // [bp-0xda0]
    let v23: struct40;  // [bp-0xd98]
    let v24: u128;  // [bp-0xd88]
    let v25: u64;  // [bp-0xd78]
    let v26: struct130;  // [bp-0xd70]
    let v27: u16;  // [bp-0xca3]
    let v28: struct40;  // [bp-0xc98], Other Possible Types: struct80, u64
    let v29: struct24;  // [bp-0xc98]
    let v30: Option<struct40>;  // [bp-0xc98]
    let v31: u64;  // [bp-0xc98]
    let v32: Option<struct40>;  // [bp-0xc98]
    let v33: u64;  // [bp-0xc90]
    let v34: i64;  // [bp-0xc88], Other Possible Types: struct_2 *
    let v35: u64;  // [bp-0xc80]
    let v36: void*;  // [bp-0xc78], Other Possible Types: u64
    let v37: u64;  // [bp-0xc78]
    let v38: u8;  // [bp-0xc20]
    let v41: u8;  // al
    let v42: u32;  // edi
    let v43: u8;  // al
    let v44: u64;  // rax
    let v45: i64;  // rdx

    v23 = linera_summary::summary_options::SummaryOptions::init();
    linera_base::tracing::init("summary");
    v26 = tokio::runtime::builder::Builder::new_multi_thread();
    if core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE, 0) != 5 && core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE, 0) <= 2 {
        v41 = tracing_core::callsite::DefaultCallsite::interest(&_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E.field_0);
        if !v41 || !tracing::__macro_support::__is_enabled(_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E.field_0, v41) {
            goto LABEL_88d3d3;
        }
        v29 = struct24 {
            field_0: ""
            field_16: _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E.field_0 + 48
        };
        v10 = tracing::span::Span::new(_ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E.field_0, &v29);
    } else {
LABEL_88d3d3:
        v31 = 2;
        v37 = _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E.field_0;
        if !core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E) {
            v2 = struct24 {
                field_0: ""
                field_16: _ZN14linera_summary4main10__CALLSITE17h317f18fb63efec68E.field_0 + 48
            };
            tracing::span::Span::record_all(&v31, &v2);
        }
        v12 = v37;
        v11 = *(&v29.field_0 as &i128);
        v10 = *(&v29.field_0 as &i128);
    }
    vvar_588{stack -3224} = struct40 OrderedDict([(0, 𝜙@64b [((8967118, None), vvar_473{stack -3224}), ((8967212, None), vvar_478{stack -3224})]), (16, 𝜙@64b [((8967118, None), vvar_475{stack -3208}), ((8967212, None), None)])])
    v27 = 257;
    tokio::runtime::builder::Builder::build(&v28, &v26);
    v2 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v28);
    match v2 {
        Err(_) => {
            return v4;
        },
        Ok(v16) => {
            v28 = struct80 {
                field_0: v10
                field_16: v11
                field_32: v12
                field_40: *(&v23.field_0 as &i128)
                field_56: v24
                field_72: v25
            };
            v38 = 0;
            v1 = tokio::runtime::runtime::Runtime::block_on(&v16, &v28);
            if v1 {
                v0 = v1;
                if core::sync::atomic::atomic_load(&_ZN12tracing_core8metadata9MAX_LEVEL17h02c344de83897b1dE, 0) == 5 {
LABEL_88d5f0:
                    if !core::sync::atomic::atomic_load(&_ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E) as u8 && core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE, 0) {
                        v13 = 1;
                        v15 = _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0->field_20;
                        v44 = log::logger();
                        if *((v45 + 24) as &i64)(v44, &v13) as i8 {
                            v2 = struct48 {
                                field_0: *(&_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0->field_30 as &i128)
                                field_16: _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0->field_40
                                field_32: 0
                                field_40: _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0->field_38
                            };
                            v30 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v2);
                            match v30 {
                                None => {
                                    core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                                },
                                Some(_) => {
                                    v20 = v36;
                                    v19 = *((&v30 as &char + 16) as &i128);
                                    v17 = v30 as i128 as u128;
                                    v21 = &v0;
                                    v22 = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
                                    v28 = "Error: ";
                                    v33 = 1;
                                    v36 = 0;
                                    v34 = &v21;
                                    v35 = 1;
                                    v5 = &v16;
                                    v6 = &v28;
                                    v7 = &g_ccd5e8;
                                    v8 = struct24 {
                                        field_0: &v5
                                        field_8: 1
                                        field_16: _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0 + 48
                                    };
                                    v2 = v14;
                                    tracing::__macro_support::__tracing_log(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0, v44, v45, &v2, &v8);
                                },
                            }
                        }
                    }
                } else {
                    v43 = tracing_core::callsite::DefaultCallsite::interest(&_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0) as u8;
                    if !v43 || !tracing::__macro_support::__is_enabled(_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0, v43) {
                        goto LABEL_88d5f0;
                    }
                    v2 = struct48 {
                        field_0: *(&_ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0->field_30 as &i128)
                        field_16: _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0->field_40
                        field_32: 0
                        field_40: _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0->field_38
                    };
                    v32 = <tracing_core::field::Iter as core::iter::traits::iterator::Iterator>::next(&v2);
                    match v32 {
                        None => {
                            core::option::expect_failed("FieldSet corrupted (this is a bug)"); /* do not return */
                        },
                        Some(_) => {
                            v20 = v36;
                            v19 = *((&v32 as &char + 16) as &i128);
                            v18 = v32 as i128 as u128;
                            v8 = &v0;
                            v9 = anyhow::error::<impl core::fmt::Debug for anyhow::Error>::fmt;
                            v28 = "Error: ";
                            v33 = 1;
                            v36 = 0;
                            v34 = &v8;
                            v35 = 1;
                            v5 = &v16;
                            v6 = &v28;
                            v7 = &g_ccd5e8;
                            v2 = struct24 {
                                field_0: &v5
                                field_8: 1
                                field_16: _ZN14linera_summary4main10__CALLSITE17h57c9c556b7219041E.field_0 + 48
                            };
                            linera_summary::main::{{closure}}(&v2);
                        },
                    }
                }
            }
            std::process::exit(v42); /* do not return */
        },
    }
}
