void firecracker::api_server_adapter::run_with_api(uint128_t a0[4], unsigned long long a1, unsigned long long *a2, void* a3, uint128_t a4[5], uint128_t a5[3], char a6, char a7, unsigned long long a8, unsigned long long a9, unsigned long long a10, unsigned long long a11)
{
    unsigned int v0;  // [bp-0x5a8]
    unsigned int v1;  // [bp-0x5a4]
    struct_0 *v2;  // [bp-0x5a0]
    unsigned long long v3;  // [bp-0x598]
    unsigned long long v4;  // [bp-0x590]
    unsigned long long v5;  // [bp-0x588]
    unsigned int v6;  // [bp-0x574]
    unsigned long long v7;  // [bp-0x560]
    unsigned long long v8;  // [bp-0x550]
    int v9;  // [sp-0x548]
    char v10;  // [bp-0x548]
    void* v11;  // [sp-0x548], Other Possible Types: unsigned long long
    int v12;  // [bp-0x547]
    unsigned long long v13;  // [bp-0x540]
    int v14;  // [sp-0x538]
    int v15;  // [bp-0x537]
    int v16;  // [bp-0x528]
    int v17;  // [bp-0x518]
    int v18;  // [sp-0x508]
    int v19;  // [bp-0x4f8]
    int v20;  // [bp-0x4f1]
    int v21;  // [bp-0x4e8], Other Possible Types: char
    char v22;  // [bp-0x4e1]
    int v23;  // [bp-0x4d9]
    unsigned long long v24;  // [bp-0x4d1]
    int v25;  // [bp-0x4c8], Other Possible Types: char
    unsigned long long v26;  // [bp-0x4b8]
    unsigned long long v27;  // [bp-0x4b0]
    unsigned long long v28;  // [bp-0x4a0]
    unsigned long long v29;  // [bp-0x498]
    unsigned long long v30;  // [bp-0x490]
    unsigned long long v31;  // [bp-0x488]
    unsigned long long v32;  // [bp-0x480]
    int v33;  // [bp-0x478], Other Possible Types: char, unsigned long long
    unsigned long long v34;  // [bp-0x478]
    int v35;  // [bp-0x478]
    unsigned long long v36;  // [bp-0x470], Other Possible Types: char
    unsigned long long v37;  // [bp-0x470]
    int v38;  // [bp-0x46f]
    void* v39;  // [bp-0x468], Other Possible Types: char *, unsigned long long
    int v40;  // [bp-0x468]
    char v41;  // [bp-0x460], Other Possible Types: unsigned int, unsigned long long
    int v42;  // [bp-0x45f]
    char v43;  // [bp-0x458]
    void* v44;  // [bp-0x458]
    int v45;  // [bp-0x458]
    char v46;  // [bp-0x450]
    char v47;  // [bp-0x448], Other Possible Types: unsigned long long
    int v48;  // [bp-0x440], Other Possible Types: unsigned long long
    unsigned long long v49;  // [bp-0x438]
    unsigned long long v50;  // [bp-0x430]
    int v51;  // [bp-0x428]
    int v52;  // [bp-0x418]
    int v53;  // [bp-0x408]
    int v54;  // [bp-0x3f8]
    unsigned long long v55;  // [bp-0x3e8]
    unsigned long long v56;  // [bp-0x3e0]
    unsigned long long v57;  // [bp-0x3d8]
    unsigned int v58;  // [bp-0x3d0]
    unsigned long long v59;  // [bp-0x2f0]
    unsigned long long v60;  // [bp-0x2e8]
    unsigned long long v61;  // [bp-0x2e0]
    unsigned long long v62;  // [bp-0x2d8]
    unsigned long long v63;  // [bp-0x2d0]
    unsigned long long v64;  // [bp-0x2c8]
    unsigned long long v65;  // [bp-0x2c0]
    unsigned long long v66;  // [bp-0x2b8]
    char *v67;  // [bp-0x2b0]
    char *v68;  // [bp-0x2a8]
    unsigned int v69;  // [bp-0x2a0]
    int v70;  // [bp-0x298], Other Possible Types: char
    int v71;  // [bp-0x288], Other Possible Types: char
    int v72;  // [bp-0x278], Other Possible Types: char
    int v73;  // [bp-0x268], Other Possible Types: char
    unsigned long long v74;  // [bp-0x258]
    int v75;  // [bp-0x250], Other Possible Types: unsigned long
    int v76;  // [bp-0x249]
    unsigned long long v77;  // [bp-0x248]
    unsigned long v78;  // [bp-0x240]
    int v79;  // [bp-0x239], Other Possible Types: unsigned long long
    unsigned long long v80;  // [bp-0x238]
    unsigned long long v81;  // [bp-0x230]
    unsigned long v82;  // [bp-0x221]
    unsigned long long v83;  // [bp-0x219]
    int v84;  // [bp-0x198], Other Possible Types: char
    unsigned long long v85;  // [bp-0x188]
    int v86;  // [bp-0x180], Other Possible Types: char
    unsigned long long v87;  // [bp-0x170]
    int v88;  // [bp-0x168], Other Possible Types: char
    unsigned int v89;  // r15d
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax
    int v94;  // xmm1
    int v95;  // xmm2
    unsigned int v96;  // eax
    unsigned int v97;  // ebp
    uint128_t v98[5];  // rax
    int v99;  // xmm0
    unsigned long long v100;  // rbx
    char v101;  // bpl
    uint128_t v102[4];  // r14
    unsigned long long v103;  // rdx
    unsigned long long v104;  // rsi
    unsigned long long v105;  // rdi
    unsigned long long v106;  // rcx
    uint128_t v107[5];  // rax
    int v108;  // xmm0
    int v109;  // xmm0
    int v110;  // xmm0
    unsigned long long v113;  // rdx
    int v114;  // xmm0
    int v115;  // xmm1
    unsigned long long v116;  // rax
    unsigned long long v117;  // rcx
    int v118;  // xmm0
    int v119;  // xmm1
    int v120;  // xmm2

    v33.new();
    v0 = v33.expect("Cannot create API Eventfd.", 26, &g_7a3be8);
    v33.new();
    v1 = v33.expect("Cannot create API kill switch.", 30, &g_7a3c00);
    std::sync::mpmc::channel(&v33);
    v27 = v33;
    v59 = v27;
    v26 = *((long long *)&v36);
    v60 = *((long long *)&v36);
    v7 = v39;
    v28 = v7;
    v5 = *((long long *)&v41);
    v29 = *((long long *)&v41);
    std::sync::mpmc::channel(&v33);
    v4 = v33;
    v30 = v4;
    v3 = *((long long *)&v36);
    v31 = *((long long *)&v36);
    v61 = v39;
    v62 = *((long long *)&v41);
    v33.try_clone(&v0);
    v89 = v33.expect("Failed to clone API event FD", 28, &g_7a3c18);
    v90 = a1.remove();
    if (!v90)
        core::option::expect_failed("Missing seccomp filter for API thread.Listening on API socket ().", 38, &g_7a3c30); /* do not return */
    v32 = v90;
    v33.new(a3);
    if (v33)
    {
        v6 = v89;
        v74 = v49;
        memcpy(&v73, &v47, 16);
        memcpy(&v72, &v43, 16);
        memcpy(&v71, &v39, 16);
        memcpy(&v70, &v33, 16);
        v91 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0);
        if (v91 >= 3)
        {
            v11 = a3;
            v13 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
            v34 = &g_7a3bc8;
            v36 = 2;
            v44 = 0;
            v39 = &(char)v11;
            v41 = 1;
            v92 = log::__private_api::loc(&g_7a3c48);
            v75 = "firecracker::api_server_adapterFailed to register activate event: ";
            v77 = 31;
            v78 = "firecracker::api_server_adapterFailed to register activate event: ";
            v80 = 31;
            v81 = v92;
            log::__private_api::log_impl(&v34, 3, &(char)v75);
        }
        v33.try_clone(&v1);
        v33.add_kill_switch(&v70, (unsigned int)v33.expect("Failed to clone API kill switch", 31, &g_7a3c60));
        v33.expect("Cannot add HTTP server kill switch", 34, &g_7a3c78);
        v39 = 0x8000000000000000;
        *((unsigned long long *)&v35) = 0;
        v46 = 0;
        (char)v9.to_vec("fc_api", 6);
        (char)v75.name(&(unsigned long long)v35, &(char)v9);
        v47 = v27;
        v48 = v26;
        v49 = v61;
        v50 = v62;
        v58 = v6;
        v51 = v70;
        v52 = v71;
        v53 = v72;
        v54 = v73;
        v55 = v74;
        v94 = a5[1];
        v95 = a5[2];
        *((uint128_t *)&v35) = a5[0];
        v40 = v94;
        v45 = v95;
        v56 = v90;
        v57 = a8;
        (char)v9.spawn_unchecked(&(char)v75, &(unsigned long long)v35);
        v86.expect(&(char)v9);
        (unsigned long long)v35.new_with_capacity();
        (char)v75.expect(&(unsigned long long)v35, &g_7a3ca8);
        v96 = firecracker::metrics::PeriodicMetrics::new();
        v34 = 1;
        v37 = 1;
        v39 = 0;
        v41 = v96;
        *((double *)&v8) = v34.new();
        if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v8) + 1, 0, (unsigned long long)(char)(v91 < 3))))
        {
            v97 = a6;
            (char)v75.add_subscriber(v8, &g_7a3cc0);
            if (*(a2) == 0x8000000000000000)
            {
                v98 = a4;
                *((uint128_t *)&v18) = v98[4];
                v99 = v98[0];
                *((uint128_t *)&v17) = v98[3];
                *((uint128_t *)&v16) = v98[2];
                *((uint128_t *)&v14) = v98[1];
                v9 = v99;
                v34.build_microvm_from_requests(a1, &(char)v75, &(char)v9, &v28, &v30, &v0, v97, a7, a9, a10, a11);
                v100 = v34;
                if (v34 == 0x8000000000000000)
                {
                    v24 = (long long)(&v45)[8];
                    memcpy(&v22, &(char)v41, 16);
                    *((int128_t *)&v20) = *((int128_t *)&v37);
                    v101 = 28;
                }
                else
                {
                    *((int128_t *)&v19) = *((int128_t *)((char *)&v37 + 1));
                    memcpy(&v21, &(char)v41, 16);
                    *((int128_t *)&v23) = *((int128_t *)&v46);
                    memcpy(&v25, &v48, 16);
                    memcpy(&v88, &v50, 312);
                }
                v102 = a0;
                v103 = v5;
                v104 = v4;
                v105 = v3;
                v106 = v7;
            }
            else
            {
                v107 = a4;
                *((uint128_t *)&v18) = v107[4];
                v108 = v107[0];
                *((uint128_t *)&v17) = v107[3];
                *((uint128_t *)&v16) = v107[2];
                *((uint128_t *)&v14) = v107[1];
                v9 = v108;
                firecracker::build_microvm_from_json(&v34, a1, &(char)v75, a2, &(char)v9, v97, a7, a9, a10, a11);
                v100 = v34;
                *((int128_t *)&v19) = *((int128_t *)((char *)&v37 + 1));
                memcpy(&(char)v21, &(char)v41, 16);
                *((int128_t *)&v23) = *((int128_t *)&v46);
                memcpy(&v25, &v48, 16);
                if (v34 != 0x8000000000000000)
                    memcpy(&(char)v88, &v50, 312);
                v102 = a0;
                v106 = v7;
                v103 = v5;
                v104 = v4;
                v105 = v3;
            }
            v67 = &v8;
            v69 = v0;
            v63 = v106;
            v64 = v103;
            v65 = v104;
            v66 = v105;
            v68 = &(char)v75;
            if (v100 == 0x8000000000000000)
            {
                memcpy(&v16, &(char)v23, 16);
                v109 = (int128_t)v19;
                *((int128_t *)&v15) = (int128_t)v21;
                v12 = v109;
                v17 = v25;
                v10 = v101;
                core::ptr::drop_in_place<firecracker::api_server_adapter::run_with_api::{{closure}}>(&v63);
            }
            else
            {
                memcpy(&v46, &(char)v23, 16);
                v110 = (int128_t)v19;
                *((int128_t *)&v42) = (int128_t)v21;
                v38 = v110;
                v48 = v25;
                memcpy(&v50, &v88, 312);
                v34 = v100;
                v36 = v101;
                firecracker::api_server_adapter::run_with_api::{{closure}}(&v10, &v63, &v34);
            }
            v1.write(1).unwrap();
            v39 = v87;
            v33 = v86;
            v34.join().expect(v113);
            v114 = (int128_t)v9;
            v115 = (int128_t)(&v12)[15];
            *((void*)&v102[3]) = v17;
            *((void*)&v102[2]) = v16;
            *((void*)&v102[1]) = v115;
            *((void*)&v102[0]) = v114;
            core::ptr::drop_in_place<alloc::sync::Arc<std::sync::poison::mutex::Mutex<firecracker::metrics::PeriodicMetrics>>>(&v8);
            (char)v75.drop_in_place<event_manager::manager::EventManager<alloc::sync::Arc<std::sync::poison::mutex::Mutex<dyn event_manager::MutEventSubscriber>>>>();
            core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v1);
            core::ptr::drop_in_place<std::path::PathBuf>(*((long long *)a3), (long long)a3[8]);
            return;
        }
        [D] Unsupported jumpkind Ijk_NoDecode at address 5606456()
    }
    else
    {
        if (vvar_735{stack -1136} == 23 && (char)v39.kind() == 8)
        {
            v11 = v39;
            *((int128_t *)&v75) = (int128_t)a3[8];
            v84.spec_to_string(&(char)v75);
            v79 = v85;
            v76 = v84;
            v2->field_0 = 30;
            v116 = (long long)(&v76)[8];
            v117 = v79;
            *((int128_t *)&v2->field_1[0]) = (int128_t)v75;
            *((unsigned long long *)&v2->field_1[15]) = v116;
            v2->field_10 = v117;
            core::ptr::drop_in_place<std::io::error::Error>(&(char)v11);
        }
        else
        {
            v83 = v48;
            v118 = (int128_t)v33;
            memcpy(&(char)v81, &v46, 16);
            *((int128_t *)&v79) = *((int128_t *)&v41);
            v76 = v118;
            v2->field_0 = 31;
            v119 = (int128_t)(&v76)[9];
            v120 = *((int128_t *)&v81);
            *((int128_t *)&v2->field_1[0]) = (int128_t)v75;
            *((void*)&v2->field_1[16]) = v119;
            *((void*)&v2->field_11[1]) = v120;
            v2->field_18 = v82;
            *((unsigned long long *)&v2->padding_20) = v83;
        }
        core::ptr::drop_in_place<alloc::sync::Arc<alloc::vec::Vec<u64>>>(&v32);
        core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v89);
        core::ptr::drop_in_place<std::sync::mpsc::Receiver<alloc::boxed::Box<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>>>(&v61);
        core::ptr::drop_in_place<std::sync::mpsc::Sender<alloc::boxed::Box<core::result::Result<vmm::rpc_interface::VmmData,vmm::rpc_interface::VmmActionError>>>>(&v30);
        core::ptr::drop_in_place<std::sync::mpsc::Receiver<alloc::boxed::Box<vmm::rpc_interface::VmmAction>>>(&v28);
        core::ptr::drop_in_place<std::sync::mpsc::Sender<alloc::boxed::Box<vmm::rpc_interface::VmmAction>>>(&v59);
        core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v1);
        core::ptr::drop_in_place<vmm_sys_util::linux::eventfd::EventFd>(v0);
        core::ptr::drop_in_place<vmm::vmm_config::instance_info::InstanceInfo>(a4);
        core::ptr::drop_in_place<std::path::PathBuf>(*((long long *)a3), (long long)a3[8]);
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a2);
        return;
    }
}
