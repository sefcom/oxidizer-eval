fn firecracker::api_server::ApiServer::run(a0: u64, a1: i64, a2: void*, a3: u32, a4: u32, a5: u64) -> void {
    let v0: struct40;  // [bp-0x318], Other Possible Types: struct16
    let v1: u64;  // [bp-0x318]
    let v2: u64;  // [bp-0x310]
    let v3: i64;  // [bp-0x308]
    let v4: &str;  // [sp-0x308]
    let v5: u64;  // [bp-0x300]
    let v6: iNone;  // [bp-0x2f8], Other Possible Types: void*
    let v7: u64;  // [bp-0x2e8]
    let v8: u64;  // [bp-0x2d8]
    let v9: u8;  // [bp-0x2d0]
    let v10: &str;  // [bp-0x2d0]
    let v11: &str;  // [bp-0x2d0]
    let v12: &str;  // [bp-0x2c0], Other Possible Types: u64
    let v13: &str;  // [bp-0x2c0]
    let v14: u64;  // [bp-0x2c0]
    let v15: u64;  // [bp-0x2b0]
    let v17: u64;  // [bp-0x2a0]
    let v18: i64;  // [bp-0x290], Other Possible Types: struct_6 *, u64
    let v19: u64;  // [bp-0x288]
    let v20: i64;  // [bp-0x280]
    let v21: u64;  // [bp-0x278]
    let v22: void*;  // [bp-0x270]
    let v23: struct40;  // [bp-0x260], Other Possible Types: u64
    let v24: i64;  // [bp-0x238]
    let v25: u64;  // [bp-0x230]
    let v26: u64;  // [bp-0x228]
    let v27: Option<struct8>;  // [bp-0x228]
    let v28: u64;  // [bp-0x228]
    let v29: u64;  // [bp-0x220]
    let v30: u64;  // [bp-0x218]
    let v31: iNone;  // [bp-0x208]
    let v32: u64;  // [bp-0x1f8]
    let v33: u64;  // [bp-0x1a0]
    let v34: u64;  // [bp-0x198]
    let v35: struct40;  // [sp-0x198]
    let v36: struct24;  // [bp-0x190]
    let v39: iNone;  // [bp-0x168]
    let v40: struct24;  // [bp-0x108]
    let v41: u64;  // [bp-0x38]
    let v43: u64;  // rdx
    let v44: i64;  // r12
    let v45: i64;  // r13
    let v46: struct72;  // r15
    let v47: struct24;  // r14
    let v48: u128;  // xmm0
    let v49: i64;  // rdi
    let v50: i64;  // rsi
    let v51: struct72;  // rbp
    let v52: struct24;  // r15
    let v53: struct16;  // xmm0
    let v54: u64;  // [bp-0x218]
    let v55: u128;  // [bp-0x210]
    let v57: u64;  // [bp-0x188]
    let v59: u64;  // [bp-0x178]
    let v60: struct32;  // [bp-0xe8]
    let v61: struct144;  // [bp-0xc8]

    *((a1 + 48) as &u64) = a5;
    v0 = struct16 {
        field_0: vmm::seccomp::apply_filter(a3, a4)
        field_8: v43
    };
    if (v0.field_0 & 1) {
        v9 = v43;
        panic!("Failed to set the requested seccomp filters on the API thread: {}", &v9);
    }
    v44 = &v26;
    v27 = micro_http::server::HttpServer::start_server(a1);
    core::result::Result<T,E>::expect(&v27, "Cannot start HTTP server", "src/firecracker/src/api_server/mod.rs");
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 >= 3 {
        v28 = "API server started.";
        v29 = 1;
        v54 = 8;
        v55 = 0;
        v35 = struct40 {
            field_0: "firecracker::api_server"
            field_16: "firecracker::api_server"
            field_32: log::__private_api::loc("src/firecracker/src/api_server/mod.rs")
        };
        log::__private_api::log_impl(&v28, 3, &v35);
    }
    vmm::logger::metrics::ProcessTimeReporter::report_start_time(a2);
    vmm::logger::metrics::ProcessTimeReporter::report_cpu_start_time(a2);
    loop {
        loop {
            micro_http::server::HttpServer::requests(v45, a1);
            if v34 != 28 {
                break;
            }
            v40 = v36;
            v60 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v40);
            v49 = v45;
            v50 = &v60;
            loop {
                <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v45, v50);
                if v34 == 0x8000000000000000 {
                    break;
                }
                memcpy(v44, v45, 144);
                v8 = utils::time::get_time_us(0);
                v51 = v46;
                v61 = firecracker::api_server::ApiServer::run::{{closure}}(a0, &v8, v44);
                v41 = v33;
                micro_http::server::HttpServer::respond(v52, a1, &v61);
                if v10.ptr as i32 == 28 {
                    v46 = v51;
                } else {
                    v7 = v17;
                    v53 = *(&v10.ptr as &i128);
                    v6 = *(&v15 as &i128);
                    *(&v4.ptr as &i128) = *(&v12 as &i128);
                    v0 = v53;
                    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 {
                        v24 = &v0 as u64;
                        v25 = <micro_http::common::ServerError as core::fmt::Display>::fmt;
                        v18 = "API Server encountered an error on response: ";
                        v19 = 1;
                        v22 = 0;
                        v20 = &v24;
                        v21 = 1;
                        v23 = struct40 {
                            field_0: "firecracker::api_server"
                            field_16: "firecracker::api_server"
                            field_32: log::__private_api::loc("src/firecracker/src/api_server/mod.rs")
                        };
                        log::__private_api::log_impl(&v18, 1, &v23);
                    }
                    v46 = v51;
                    v44 = &v26;
                    v47 = &v9;
                }
                v23 = utils::time::get_time_us(0) - v8;
                v12 = v12;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 >= 4 {
                    v18 = &v23;
                    v19 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v1 = "Total previous API call duration: ";
                    v2 = 2;
                    v6 = 0;
                    v3 = &v18;
                    v5 = 1;
                    v11 = "firecracker::api_server";
                    v12 = "firecracker::api_server";
                    v15 = log::__private_api::loc("src/firecracker/src/api_server/mod.rs");
                    log::__private_api::log_impl(&v1, 4, v47);
                    v12 = v14;
                }
                v12 = v12;
                v50 = &v60;
            }
        }
        if v34 == 26 {
            break;
        }
        v32 = v39 as i64;
        v48 = *(&v34 as &i128);
        v31 = *(&v59 as &i128);
        v30 = *(&v57 as &i128);
        v26 = v48;
        v12 = v12;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 {
            v18 = v44;
            v19 = <micro_http::common::ServerError as core::fmt::Display>::fmt;
            v1 = "API Server error on retrieving incoming request: ";
            v2 = 1;
            v6 = 0;
            v3 = &v18;
            v5 = 1;
            v10 = "firecracker::api_server";
            v13 = "firecracker::api_server";
            v15 = log::__private_api::loc("src/firecracker/src/api_server/mod.rs");
            log::__private_api::log_impl(&v1, 1, v47);
            v12 = v14;
        }
        v12 = v12;
    }
    micro_http::server::HttpServer::flush_outgoing_writes(a1);
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 <= 3 {
        return;
    }
    v26 = "shutdown request received, API server thread ending.";
    v29 = 1;
    v30 = 8;
    v55 = 0;
    v0 = struct40 {
        field_0: "firecracker::api_server"
        field_16: "firecracker::api_server"
        field_32: log::__private_api::loc("src/firecracker/src/api_server/mod.rs")
    };
    log::__private_api::log_impl(&v26, 4, &v0);
    return;
}
