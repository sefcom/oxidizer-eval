fn firecracker::api_server_adapter::run_with_api(a0: i64, a1: u64, a2: i64, a3: i64, a4: i64, a5: i64, a6: u8, a7: u8, a8: u64, a9: u64, a10: u64, a11: u64) -> void {
    let v0: u64;  // [bp-0x5a8]
    let v1: u32;  // [bp-0x5a4]
    let v2: i64;  // [bp-0x5a0]
    let v3: u64;  // [bp-0x598]
    let v4: u64;  // [bp-0x590]
    let v5: u64;  // [bp-0x588]
    let v6: u32;  // [bp-0x574]
    let v7: u64;  // [bp-0x560]
    let v8: u64;  // [bp-0x550]
    let v9: Option<struct1>;  // [bp-0x548], Other Possible Types: struct_0 *, struct24, u64
    let v10: struct80;  // [bp-0x548], Other Possible Types: u640
    let v11: u128;  // [bp-0x547]
    let v12: u64;  // [bp-0x540]
    let v13: u128;  // [bp-0x537]
    let v14: iNone;  // [bp-0x528]
    let v15: u128;  // [bp-0x518]
    let v16: u128;  // [bp-0x4f8]
    let v17: u128;  // [bp-0x4f1]
    let v18: iNone;  // [bp-0x4e8]
    let v19: u128;  // [bp-0x4e1]
    let v20: u128;  // [bp-0x4d9]
    let v21: u64;  // [bp-0x4d1]
    let v22: u128;  // [bp-0x4c8]
    let v23: u64;  // [bp-0x4b8]
    let v24: u64;  // [bp-0x4b0]
    let v25: u64;  // [bp-0x4a0]
    let v26: u64;  // [bp-0x498]
    let v27: u64;  // [bp-0x490]
    let v28: u64;  // [bp-0x488]
    let v29: struct24;  // [bp-0x480]
    let v30: void*;  // [bp-0x478], Other Possible Types: Option<struct8>, struct172, struct24, struct9, Result<struct4, struct8>, struct12, u64
    let v31: struct32;  // [bp-0x478]
    let v32: Result<struct68, struct24>;  // [bp-0x478]
    let v33: struct32;  // [bp-0x478]
    let v34: struct184;  // [bp-0x478]
    let v35: Result<struct40, struct41>;  // [bp-0x478]
    let v36: struct376;  // [bp-0x478]
    let v37: u64;  // [bp-0x478]
    let v38: u64;  // [bp-0x470]
    let v39: u128;  // [bp-0x46f]
    let v40: void*;  // [bp-0x468], Other Possible Types: struct_4 *, u64
    let v41: u32;  // [bp-0x460]
    let v42: u128;  // [bp-0x45f]
    let v43: void*;  // [bp-0x458]
    let v44: iNone;  // [bp-0x450], Other Possible Types: u8
    let v45: u64;  // [bp-0x440]
    let v46: u64;  // [bp-0x438]
    let v47: u64;  // [bp-0x2f0]
    let v48: u64;  // [bp-0x2e8]
    let v49: u64;  // [bp-0x2e0]
    let v50: u64;  // [bp-0x2d8]
    let v51: struct56;  // [bp-0x2d0]
    let v52: iNone;  // [bp-0x298]
    let v53: iNone;  // [bp-0x288]
    let v54: iNone;  // [bp-0x278]
    let v55: iNone;  // [bp-0x268]
    let v56: u64;  // [bp-0x258]
    let v57: struct184;  // [bp-0x250], Other Possible Types: struct40, struct48, u128
    let v58: u128;  // [bp-0x249]
    let v59: u128;  // [bp-0x239]
    let v60: u128;  // [bp-0x229]
    let v61: u64;  // [bp-0x221]
    let v62: u64;  // [bp-0x219]
    let v63: struct24;  // [bp-0x198]
    let v64: u64;  // [bp-0x188]
    let v65: struct24;  // [bp-0x180]
    let v66: struct24;  // [bp-0x180]
    let v67: iNone;  // [bp-0x168]
    let v68: u32;  // r15d
    let v69: struct24;  // rax
    let v70: struct24;  // rax
    let v73: struct24;  // xmm1
    let v74: struct24;  // xmm2
    let v75: u32;  // eax
    let v76: u32;  // ebp
    let v77: i64;  // rax
    let v78: u128;  // xmm0
    let v79: struct24;  // rbx
    let v80: u128;  // xmm0
    let v81: u8;  // bpl
    let v82: i64;  // r14
    let v83: struct24;  // rdx
    let v84: Option<struct32>;  // rsi
    let v85: u64;  // rdi
    let v86: struct33;  // rcx
    let v87: i64;  // rax
    let v88: iNone;  // xmm0
    let v89: u128;  // xmm0
    let v90: u128;  // xmm0
    let v93: u64;  // rdx
    let v94: iNone;  // xmm0
    let v95: iNone;  // xmm1
    let v96: u64;  // rax
    let v97: u64;  // rcx
    let v98: iNone;  // xmm0
    let v99: iNone;  // xmm1
    let v100: iNone;  // xmm1
    let v101: iNone;  // xmm2
    let v102: u8;  // [bp-0x548]

    v30 = vmm_sys_util::linux::eventfd::EventFd::new();
    v0 = core::result::Result<T,E>::expect(&v30, "Cannot create API Eventfd.", "src/firecracker/src/api_server_adapter.rs");
    v30 = vmm_sys_util::linux::eventfd::EventFd::new();
    v1 = core::result::Result<T,E>::expect(&v30, "Cannot create API kill switch.", "src/firecracker/src/api_server_adapter.rs");
    v33 = std::sync::mpmc::channel();
    v24 = v33.field_0;
    v47 = v24;
    v23 = v33.field_8;
    v48 = v33.field_8;
    v7 = v40;
    v25 = v7;
    v5 = v33.field_24;
    v26 = v33.field_24;
    v31 = std::sync::mpmc::channel();
    v4 = v31.field_0;
    v27 = v4;
    v3 = v31.field_8;
    v28 = v31.field_8;
    v49 = v40;
    v50 = v31.field_24;
    v30 = vmm_sys_util::linux::eventfd::EventFd::try_clone(&v0);
    v68 = core::result::Result<T,E>::expect(&v30, "Failed to clone API event FD", "src/firecracker/src/api_server_adapter.rs");
    v69 = hashbrown::map::HashMap<K,V,S,A>::remove(a1);
    if !v69 {
        core::option::expect_failed("Missing seccomp filter for API thread."); /* do not return */
    }
    v29 = v69;
    v32 = micro_http::server::HttpServer::new(a3);
    match v32 {
        Ok(_) => {
            v6 = v68;
            v56 = v46;
            v55 = *((&v32 as &char + 48) as &i128);
            v54 = *((&v32 as &char + 32) as &i128);
            v53 = *((&v32 as &char + 16) as &i128);
            v52 = v32 as i128;
            v70 = core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64;
            if v70 >= 3 {
                v9 = a3;
                v12 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
                v30 = "Listening on API socket (";
                v38 = 2 as u64;
                v43 = 0;
                v40 = &v9 as u8;
                v41 = 1 as u64;
                v57 = struct40 {
                    field_0: "firecracker::api_server_adapter"
                    field_16: "firecracker::api_server_adapter"
                    field_32: log::__private_api::loc("src/firecracker/src/api_server_adapter.rs")
                };
                log::__private_api::log_impl(&v30, 3, &v57);
            }
            v30 = vmm_sys_util::linux::eventfd::EventFd::try_clone(&v1);
            v30 = micro_http::server::HttpServer::add_kill_switch(&v52, core::result::Result<T,E>::expect(&v30, "Failed to clone API kill switch", "src/firecracker/src/api_server_adapter.rs") as u32 as u64);
            core::result::Result<T,E>::expect(&v30, "Cannot add HTTP server kill switch", "src/firecracker/src/api_server_adapter.rs");
            v40 = 0x8000000000000000;
            v30 = 0;
            v44 = 0;
            v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("fc_api");
            v57 = std::thread::Builder::name(&v30, &v9);
            v73 = *((a5 + 16) as &i128);
            v74 = *((a5 + 32) as &i128);
            v30 = struct172 {
                field_0: *(a5 as &i128)
                field_16: v73
                field_32: v74
                field_48: v24
                field_56: v23
                field_64: v49
                field_72: v50
                field_80: v52
                field_96: v53
                field_112: v54
                field_128: v55
                field_144: v56
                field_152: v69
                field_160: a8
                field_168: v6
            };
            v9 = std::thread::Builder::spawn_unchecked(&v57, &v30);
            v65 = core::result::Result<T,E>::expect(&v9);
            v34 = event_manager::manager::EventManager<S>::new_with_capacity();
            v57 = core::result::Result<T,E>::expect(&v34, "src/firecracker/src/api_server_adapter.rs");
            v75 = firecracker::metrics::PeriodicMetrics::new() as u32;
            v30 = 1;
            v38 = 1 as u64;
            v40 = 0;
            v41 = v75;
            v8 = alloc::boxed::Box<T>::new(&v30) as u64;
            if _ccall(14, 24, atomic_fetch_add(v8) as u64 + 1, 0, (v70 < 3) as u8 as u64) as char {
                [D] Unsupported jumpkind Ijk_NoDecode at address 5606456()
            }
            v76 = a6 as u32;
            <event_manager::manager::EventManager<T> as event_manager::SubscriberOps>::add_subscriber(&v57, v8, &g_7a3cc0);
            if *(a2 as &i64) == 0x8000000000000000 {
                v77 = a4;
                v78 = *(v77 as &i128);
                v10 = struct80 {
                    field_0: v78
                    field_16: *((v77 + 16) as &i128)
                    field_32: *((v77 + 32) as &i128)
                    field_48: *((v77 + 48) as &i128)
                    field_64: *((v77 + 64) as &i128)
                };
                v35 = vmm::rpc_interface::PrebootApiController::build_microvm_from_requests(a1, &v57, &v10, &v25, &v27, &v0, v76 as u8, a7, a9, a10, a11);
                v79 = v35 as i64;
                if let Ok(_) = v35 {
                    v21 = *((&v35 as &char + 40) as &i64);
                    v80 = *((&v35 as &char + 8) as &i128);
                    v19 = *((&v35 as &char + 24) as &i128) as u128;
                    v17 = v80;
                    v81 = 28;
                }
                v82 = a0;
                v83 = v5;
                v84 = v4;
                v85 = v3;
                v86 = v7;
            } else {
                v87 = a4;
                v88 = *(v87 as &i128);
                v10 = struct80 {
                    field_0: v88
                    field_16: *((v87 + 16) as &i128)
                    field_32: *((v87 + 32) as &i128)
                    field_48: *((v87 + 48) as &i128)
                    field_64: *((v87 + 64) as &i128)
                };
                v36 = firecracker::build_microvm_from_json(a1, &v57, a2, &v10, v76 as u64, a7, a9, a10, a11);
                v79 = v36.field_0;
                v16 = *((&(&v36)[1].field_0 as &char + 1) as &i128) as u128;
                *(&v18 as &i128) = *((&(&v36)[3].field_0 as &char + 1) as &i128);
                v20 = *(&v44 as &i128) as u128;
                v22 = *(&(&v36)[7] as &i128);
                if v36.field_0 != 0x8000000000000000 {
                    memcpy(&v67 as u8, &v34 as u64, 312);
                }
                v82 = a0;
                v86 = v7;
                v83 = v5;
                v84 = v4;
                v85 = v3;
            }
            v51 = struct56 {
                field_0: v86
                field_8: v83
                field_16: v84
                field_24: v85
                field_32: &v8
                field_40: &v57
                field_48: v0
            };
            if v79 == 0x8000000000000000 {
                v14 = (&v18)[15] as i128;
                v89 = v16;
                v13 = *((&v17 as &char + 9) as &i128) as u128;
                v11 = v89;
                v15 = v22;
                v102 = v81;
            } else {
                *(&v44 as &i128) = (&v18)[15] as i128;
                v90 = v16;
                v42 = *((&v17 as &char + 9) as &i128) as u128;
                v39 = v90;
                v45 = v22;
                memcpy(&v34 as u64, &v67, 312);
                v30 = struct9 {
                    field_0: v79
                    field_8: v81
                };
                v9 = firecracker::api_server_adapter::run_with_api::{{closure}}(&v51, &v30);
                v30 = v37;
            }
            core::result::Result<T,E>::unwrap(vmm_sys_util::linux::eventfd::EventFd::write(&v1, 1));
            v30 = v66;
            core::result::Result<T,E>::expect(std::thread::JoinInner<T>::join(&v30), v93);
            v94 = v10 as i128;
            v95 = *((&v10 as &char + 16) as &i128);
            *((v82 + 48) as &u128) = v15;
            *((v82 + 32) as void*) = v14;
            *((v82 + 16) as void*) = v95;
            *(v82 as void*) = v94;
            return;
        },
        Err(_) => {
            if vvar_733{stack -1136} == 23 && std::io::error::Error::kind(v40) as u8 == 8 {
                v9 = v40;
                v57 = *((a3 + 8) as &i128) as u128;
                v63 = <T as alloc::string::SpecToString>::spec_to_string(&v57 as u8);
                v59 = v64;
                v58 = v63.field_0;
                *(v2 as &i8) = 30;
                v96 = *((&v58 as &char + 8) as &i64);
                v97 = v59;
                *((v2 + 1) as &u128) = v57;
                *((v2 + 16) as &u64) = v96;
                *((v2 + 24) as &u64) = v97;
            } else {
                v62 = v45;
                v98 = *((&v32 as &char + 8) as &i128);
                v99 = *((&v32 as &char + 24) as &i128);
                v60 = *((&v32 as &char + 40) as &i128) as u128;
                *(&v59 as void*) = v99;
                *(&v58 as void*) = v98;
                *(v2 as &i8) = 31;
                v100 = *((&v58 as &char + 9) as &i128);
                v101 = *((&v59 as &char + 9) as &i128);
                *((v2 + 1) as &u128) = v57;
                *((v2 + 17) as void*) = v100;
                *((v2 + 33) as void*) = v101;
                *((v2 + 48) as &u64) = v61;
                *((v2 + 56) as &u64) = v62;
            }
            return;
        },
    }
}
