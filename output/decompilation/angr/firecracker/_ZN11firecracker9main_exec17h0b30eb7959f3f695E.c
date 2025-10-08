long long firecracker::main_exec(void* a0)
{
    char v0;  // [bp-0x479]
    int v1;  // [bp-0x478], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v2;  // [bp-0x478], Other Possible Types: unsigned long
    int v3;  // [bp-0x474]
    int v4;  // [bp-0x470], Other Possible Types: unsigned long long
    char *v5;  // [bp-0x470], Other Possible Types: unsigned long, unsigned long long
    int v6;  // [bp-0x468], Other Possible Types: char *, char
    char *v7;  // [bp-0x468], Other Possible Types: unsigned long, unsigned long long
    int v8;  // [bp-0x464]
    unsigned long long v9;  // [bp-0x460]
    int v10;  // [bp-0x458], Other Possible Types: void*, unsigned long long
    int v11;  // [bp-0x454]
    int v12;  // [bp-0x454]
    int v13;  // [bp-0x450]
    char v14;  // [bp-0x448]
    int v15;  // [bp-0x448]
    char v16;  // [bp-0x447]
    char v17;  // [bp-0x446]
    int v18;  // [bp-0x444]
    int v19;  // [bp-0x444]
    unsigned long long v20;  // [bp-0x440]
    int v21;  // [bp-0x438], Other Possible Types: void*
    unsigned long long v22;  // [bp-0x430]
    void* v23;  // [bp-0x428]
    unsigned long long v24;  // [bp-0x420]
    unsigned long long v25;  // [bp-0x418]
    void* v26;  // [bp-0x410], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x408]
    void* v28;  // [bp-0x400], Other Possible Types: unsigned long long
    unsigned long long v29;  // [bp-0x3f8]
    void* v30;  // [bp-0x3f0], Other Possible Types: unsigned long long, unsigned short
    unsigned long long v31;  // [bp-0x3f0]
    unsigned long long v32;  // [bp-0x3f0]
    unsigned long long v33;  // [bp-0x3f0]
    void* v34;  // [bp-0x3f0]
    unsigned long long v35;  // [bp-0x3f0]
    unsigned long long v36;  // [bp-0x3f0]
    unsigned long long v37;  // [bp-0x3f0]
    void* v38;  // [bp-0x3f0]
    void* v39;  // [bp-0x3f0]
    unsigned long long v40;  // [bp-0x3f0]
    void* v41;  // [bp-0x3f0]
    void* v42;  // [bp-0x3f0]
    void* v43;  // [bp-0x3f0]
    unsigned short v44;  // [bp-0x3f0]
    unsigned long long v45;  // [bp-0x3f0]
    char v46;  // [bp-0x3ee]
    int v47;  // [bp-0x3e0]
    unsigned long long v48;  // [bp-0x3d0]
    void* v49;  // [bp-0x3c8], Other Possible Types: int, char *, unsigned long long
    unsigned long long v50;  // [bp-0x3c8]
    unsigned long long v51[2];  // [bp-0x3c0], Other Possible Types: unsigned long long
    int v52;  // [bp-0x3b8], Other Possible Types: uint128_t, unsigned long long
    int v53;  // [bp-0x3a8]
    void* v54;  // [bp-0x3a0]
    unsigned int v55;  // [bp-0x398]
    unsigned long long v56;  // [bp-0x390]
    char v57;  // [bp-0x388], Other Possible Types: unsigned long long
    char v58;  // [bp-0x388]
    char *v59;  // [bp-0x380], Other Possible Types: unsigned long long
    unsigned long long v60;  // [bp-0x378]
    unsigned long long v61;  // [bp-0x368]
    unsigned long long v62[3];  // [bp-0x360]
    char v63;  // [bp-0x358]
    int v64;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned long long v65;  // [bp-0x321]
    unsigned long long v66[2];  // [bp-0x320], Other Possible Types: unsigned long long
    int v67;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v68;  // [bp-0x310]
    int v69;  // [bp-0x308], Other Possible Types: void*
    unsigned long v70;  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long long v71;  // [bp-0x2b0]
    unsigned long long v72;  // [bp-0x2a8]
    int v73;  // [bp-0x298], Other Possible Types: char
    unsigned long long v74;  // [bp-0x298]
    unsigned long long v75[2];  // [bp-0x290], Other Possible Types: unsigned long long
    int v76;  // [bp-0x288], Other Possible Types: unsigned long long
    int v77;  // [bp-0x278]
    int v78;  // [bp-0x268]
    unsigned long long v79;  // [bp-0x260]
    unsigned long long v80;  // [bp-0x258]
    int v81;  // [bp-0x248], Other Possible Types: char
    char v82;  // [bp-0x238], Other Possible Types: unsigned long
    int v83;  // [bp-0x230]
    int v84;  // [bp-0x228]
    int v85;  // [bp-0x218]
    char v86;  // [bp-0x208]
    unsigned long long v87;  // [bp-0x1f8]
    unsigned long long v88;  // [bp-0x1f0]
    unsigned long long v89[3];  // [bp-0x1e8]
    unsigned long long v90;  // [bp-0x1e0]
    unsigned long v91;  // [bp-0x1d8]
    unsigned long long v92;  // [bp-0x1d0]
    unsigned long long v93[3];  // [bp-0x1c8]
    int v94;  // [bp-0x1c0], Other Possible Types: BOT[5][3]
    char v95;  // [bp-0x1b0]
    char v96;  // [bp-0x1a8]
    int v97;  // [bp-0x1a0]
    int v98;  // [bp-0x190], Other Possible Types: char
    char v99;  // [bp-0x180]
    char v100;  // [bp-0x178]
    int v101;  // [bp-0x16c]
    char v102;  // [bp-0x168]
    unsigned int v103;  // [bp-0x15c]
    unsigned long long v104;  // [bp-0x158]
    unsigned int v105;  // [bp-0x150]
    int v106;  // [bp-0x14c]
    int v107;  // [bp-0x13c]
    unsigned int v108;  // [bp-0x12c]
    char v109;  // [bp-0x128]
    unsigned long long v110;  // [bp-0x110]
    char v111;  // [bp-0x108]
    unsigned long long v112;  // [bp-0xf8]
    char v113;  // [bp-0xf0]
    unsigned long long v114;  // [bp-0xe0]
    char v115;  // [bp-0xd8]
    int v116;  // [bp-0xc8], Other Possible Types: BOT[4][4]
    int v117;  // [bp-0xb8]
    int v118;  // [bp-0xa8]
    int v119;  // [bp-0x98]
    int v120;  // [bp-0x88], Other Possible Types: char
    int v121;  // [bp-0x78]
    int v122;  // [bp-0x68]
    int v123;  // [bp-0x58]
    char v124;  // [bp-0x48]
    unsigned long long v126;  // rax
    unsigned long long v129;  // rdx
    unsigned long long v130[2];  // rax
    unsigned long long v131[2];  // rax
    unsigned long long v132;  // rax
    unsigned long long v133[3];  // rax
    unsigned long long v134;  // rax
    int v135;  // xmm0
    unsigned long long v136[3];  // rax
    unsigned long long v137[3];  // r15
    char *v138;  // r12
    unsigned long long v139;  // rbx
    unsigned long long v140[3];  // rax
    unsigned long long v141[3];  // rax
    unsigned long long v142;  // rcx
    char v143;  // al
    unsigned long long v144;  // rdx
    char v145;  // al
    char v146;  // al
    unsigned long long v147;  // rax
    unsigned long long v148;  // rcx
    unsigned long long v149;  // rax
    unsigned long long v150;  // rax
    unsigned long long v151;  // rax
    unsigned long long v152[3];  // rax
    unsigned int v153;  // eax
    void* v155;  // rbx
    unsigned long long v156;  // rax
    unsigned long long v157;  // r14
    unsigned long long v158;  // rax
    unsigned long long v159;  // rax
    unsigned long long v160;  // rax
    unsigned long v161;  // r13
    unsigned long long v162[3];  // rax
    unsigned long long v163;  // r12
    unsigned long long v164[3];  // rax
    unsigned long long v165;  // r12
    unsigned long long v167;  // r15
    int v168;  // xmm1
    unsigned int v169;  // eax
    unsigned long long v170[3];  // rax
    unsigned long long v171;  // rax
    unsigned long long v172[3];  // rax
    unsigned long long v173[3];  // rax
    unsigned long long v174;  // rbx
    unsigned long long v175[3];  // rax
    unsigned long long v176;  // rcx
    unsigned int v177;  // eax
    int v178;  // xmm1
    int v179;  // xmm0
    int v180;  // xmm0

    v126 = _ZN3vmm6logger7logging6LOGGER17hf7b002b101b876e4E.init();
    if ((char)v126)
    {
        *((unsigned int *)a0) = 0;
        return v126;
    }
    vmm::arch::host_page_size();
    std::panicking::set_hook(std::io::stdio::stdin().new(), &g_7a3f30);
    (char)v1.to_vec(core::fmt::num::imp::<impl u64>::_fmt(0xc800, &(char)v64, 20), v129);
    v80 = *((long long *)&v6);
    *((int128_t *)&v78) = *((int128_t *)&v1);
    v49 = 0;
    v51 = 8;
    v54 = 0;
    v52 = 0;
    v1 = 3;
    v10 = 3;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v24 = "api-sock";
    v25 = 8;
    v26 = 0;
    v28 = 0;
    v30 = 0x100;
    v46 = 0;
    (char)v64.default_value(&(char)v1, "/run/firecracker.socket", 23);
    v71 = "Path to unix domain socket used by the API.";
    v72 = 43;
    memcpy(&(char)v1, &(char)v64, 144);
    v73.arg(&v49, &(char)v1);
    v1 = 3;
    v10 = 3;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v24 = "id";
    v25 = 2;
    v26 = 0;
    v28 = 0;
    v30 = 0x100;
    v46 = 0;
    (char)v64.default_value(&(char)v1, "anonymous-instance", 18);
    v71 = "MicroVM unique identifier.";
    v72 = 26;
    memcpy(&(char)v1, &(char)v64, 144);
    v49.arg(&v73, &(char)v1);
    v9 = v48;
    v4 = v47;
    v13 = v47;
    v20 = v9;
    v1 = 3;
    v10 = 3;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v24 = "seccomp-filter";
    v25 = 14;
    v26 = 0;
    v28 = 0;
    v30 = 0x100;
    v46 = 0;
    v130 = 8.alloc_impl(16, 0);
    if (v130)
    {
        v130[0] = "no-seccomp";
        v130[1] = 10;
        v74 = 1;
        v75[0] = v130;
        v76 = 1;
        (char)v64.forbids(&(char)v1, &v74);
        v71 = "Optional parameter which allows specifying the path to a custom seccomp filter. For advanced users.";
        v72 = 99;
        memcpy(&(char)v1, &(char)v64, 144);
        v74.arg(&v49, &(char)v1);
        v9 = v48;
        v4 = v47;
        v13 = v47;
        v20 = v9;
        v1 = 3;
        v10 = 3;
        v21 = 0;
        v22 = 8;
        v23 = 0;
        v24 = "no-seccomp";
        v25 = 10;
        v26 = 0;
        v28 = 0;
        v44 = 0;
        v46 = 0;
        v131 = 8.alloc_impl(16, 0);
        if (v131)
        {
            v131[0] = "seccomp-filter";
            v131[1] = 14;
            v50 = 1;
            v51[0] = v131;
            v52 = 1;
            (char)v64.forbids(&(char)v1, &v50);
            v71 = "Optional parameter which allows starting and using a microVM without seccomp filtering. Not recommended.";
            v72 = 104;
            memcpy(&(char)v1, &(char)v64, 144);
            (char)v64.arg(&v74, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "start-time-us";
            v25 = 13;
            v26 = 0;
            v28 = "Process start time (wall clock, microseconds). This parameter is optional.";
            v29 = 74;
            v45 = 0x100;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "start-time-cpu-us";
            v25 = 17;
            v26 = 0;
            v28 = "Process start CPU time (wall clock, microseconds). This parameter is optional.";
            v29 = 78;
            v30 = 0x100;
            (char)v64.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "parent-cpu-time-us";
            v25 = 18;
            v26 = 0;
            v28 = "Parent process CPU time (wall clock, microseconds). This parameter is optional.";
            v29 = 79;
            v31 = 0x100;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "config-file";
            v25 = 11;
            v26 = 0;
            v28 = "Path to a file that contains the microVM configuration in JSON format.";
            v29 = 70;
            v32 = 0x100;
            (char)v64.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "metadata";
            v25 = 8;
            v26 = 0;
            v28 = "Path to a file that contains metadata in JSON format to add to the mmds.";
            v29 = 72;
            v33 = 0x100;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "no-api";
            v25 = 6;
            v26 = "config-file";
            v27 = 11;
            v28 = "Optional parameter which allows starting and using a microVM without an active API socket.";
            v29 = 90;
            v34 = 0;
            (char)v64.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "log-path, flag: ";
            v25 = 8;
            v26 = 0;
            v28 = "Path to a fifo or a file used for configuring the logger on startup.";
            v29 = 68;
            v35 = 0x100;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "level";
            v25 = 5;
            v26 = 0;
            v28 = "Set the logger level.";
            v29 = 21;
            v36 = 0x100;
            (char)v64.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "modulestruct LoggerConfig with 5 elements";
            v25 = 6;
            v26 = 0;
            v28 = "Set the logger module filter.";
            v29 = 29;
            v37 = 0x100;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "show-level";
            v25 = 10;
            v26 = 0;
            v28 = "Whether or not to output the level in the logs.";
            v29 = 47;
            v38 = 0;
            (char)v64.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "show-log-origin";
            v25 = 15;
            v26 = 0;
            v28 = "Whether or not to include the file path and line number of the log's origin.";
            v29 = 76;
            v39 = 0;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "metrics-path";
            v25 = 12;
            v26 = 0;
            v28 = "Path to a fifo or a file used for configuring the metrics on startup.";
            v29 = 69;
            v40 = 0x100;
            (char)v64.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "boot-timer";
            v25 = 10;
            v26 = 0;
            v28 = "Whether or not to load boot timer device for logging elapsed time since InstanceStart command.";
            v29 = 94;
            v41 = 0;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "version";
            v25 = 7;
            v26 = 0;
            v28 = "Print the binary version number.";
            v29 = 32;
            v42 = 0;
            (char)v64.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "snapshot-version";
            v25 = 16;
            v26 = 0;
            v28 = "Print the supported data format version.";
            v29 = 40;
            v43 = 0;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "describe-snapshot";
            v25 = 17;
            v26 = 0;
            v28 = "Print the data format version of the provided snapshot state file.";
            v29 = 66;
            v30 = 0x100;
            v74.arg(&v50, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "http-api-max-payload-size";
            v25 = 25;
            v26 = 0;
            v28 = 0;
            v30 = 0x100;
            v46 = 0;
            (char)v64.default_value(&(char)v1, v79, v80);
            v71 = "Http API request payload max size, in bytes.";
            v72 = 44;
            memcpy(&(char)v1, &(char)v64, 144);
            (char)v64.arg(&v74, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "mmds-size-limit";
            v25 = 15;
            v26 = 0;
            v28 = "Mmds data store limit, in bytes.Failed to register queue event: ";
            v29 = 32;
            v31 = 0x100;
            v50.arg(&(char)v64, &(char)v1);
            v9 = v48;
            v4 = v47;
            v13 = v47;
            v20 = v9;
            v1 = 3;
            v10 = 3;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v24 = "enable-pci";
            v25 = 10;
            v26 = 0;
            v28 = "Enables PCIe support.Firecracker v\n\nvRunning Firecracker vFailed to resize fdtable: ";
            v29 = 21;
            v30 = 0;
            v63.arg(&v50, &(char)v1);
            (char)v1.parse_from_cmdline(&v63);
            v132 = v1;
            if (v132 != 9223372036854775812)
            {
                *((long long *)&a0[48]) = (long long)v13;
                v180 = (int128_t)v4;
                *((int128_t *)&a0[32]) = *((int128_t *)&v9);
                a0[16] = v180;
                *((unsigned int *)a0) = 2;
                *((unsigned long long *)&a0[8]) = v132;
                core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
            }
            if ((char)v63.flag_present("help", 4))
            {
                v64 = &g_7a3fa8;
                v66[0] = <&T as core::fmt::Display>::fmt;
                v1 = &g_7a3eb0;
                v4 = 2;
                v10 = 0;
                v6 = &(char)v64;
                v9 = 1;
                std::io::stdio::_print(&(char)v1);
                (char)v64.formatted_help(&v63);
                v49 = &(char)v64;
                v51 = <alloc::string::String as core::fmt::Display>::fmt;
                v1 = &g_7a3ed0;
                v4 = 2;
                v10 = 0;
                v6 = &v49;
                v9 = 1;
                std::io::stdio::_print(&(char)v1);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v64);
            }
            else if ((char)v63.flag_present("version", 7))
            {
                v64 = &g_7a3fa8;
                v66[0] = <&T as core::fmt::Display>::fmt;
                v1 = &g_7a3eb0;
                v4 = 2;
                v10 = 0;
                v6 = &(char)v64;
                v9 = 1;
                std::io::stdio::_print(&(char)v1);
            }
            else if ((char)v63.flag_present("snapshot-version", 16))
            {
                *((uint128_t *)&v67) = 8;
                *((uint128_t *)&v64) = 340282366920938463463374607431768211455;
                v69 = 0;
                v49 = &(char)v64;
                v51 = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
                v1 = &g_7a3ef0;
                v4 = 2;
                v10 = 0;
                v6 = &v49;
                v9 = 1;
                std::io::stdio::_print(&(char)v1);
                core::ptr::drop_in_place<semver::Version>(&(char)v64);
            }
            else
            {
                v133 = v63.single_value("describe-snapshot", 17);
                if (v133)
                {
                    firecracker::print_snapshot_data_format(&(char)v1, v133[1], v133[2]);
                    v134 = v1;
                    if (v134 != 7)
                    {
                        *((long long *)&a0[48]) = (long long)v13;
                        v135 = (int128_t)v4;
                        *((int128_t *)&a0[32]) = *((int128_t *)&v9);
                        a0[16] = v135;
                        *((unsigned int *)a0) = 3;
                        *((unsigned long long *)&a0[8]) = v134;
                        core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                    }
                }
                else
                {
                    v136 = v63.single_value("id", 2);
                    if (!v136)
                        core::option::unwrap_failed(&g_7a3f60); /* do not return */
                    v137 = v136;
                    utils::validators::validate_instance_id(&(char)v1, v136[1], v136[2]);
                    (char)v1.expect();
                    v138 = &(char)v64;
                    (char)v64.clone(v137);
                    (char)v1.try_insert(&(char)v64);
                    v139 = 0x8000000000000000;
                    if ((long long)v4 == 0x8000000000000000)
                    {
                        v50 = 0x8000000000000000;
                    }
                    else
                    {
                        v52 = v9;
                        *((int128_t *)&v49) = (int128_t)v4;
                    }
                    v50.unwrap();
                    v140 = v63.single_value("log-path, flag: ", 8);
                    if (v140)
                    {
                        (char)v1.to_vec(v140[1], v140[2]);
                        v139 = v1;
                        v138 = (long long)v4;
                        v56 = (long long)(&v4)[8];
                    }
                    v141 = v63.single_value("level", 5);
                    if (v141)
                    {
                        (char)v1.from_str(v141[1], v141[2]);
                        v142 = v1;
                        v143 = (char)v4;
                        v64 = (long long)(&v4)[1];
                        v65 = (long long)(&v4)[8];
                        if (v142 != 9223372036854775809 && !((char)(((0 ^ v142) & (0 ^ -(v142))) >> 63)))
                        {
                            v144 = v64;
                            *((unsigned long long *)&a0[24]) = v65;
                            *((unsigned long long *)&a0[17]) = v144;
                            *((unsigned int *)a0) = 4;
                            *((unsigned long long *)&a0[8]) = v142;
                            *((char *)&a0[16]) = v143;
                            core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v139, v138);
                            core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                        }
                    }
                    v0 = 6;
                    v57 = v139;
                    v59 = v138;
                    v62[0] = v137;
                    v145 = v63.flag_present("show-level", 10);
                    v146 = v63.flag_present("show-log-origin", 15);
                    v147 = v63.single_value("modulestruct LoggerConfig with 5 elements", 6);
                    v148 = 0x8000000000000000;
                    if (v147)
                    {
                        (char)v1.clone(v147);
                        v148 = v1;
                        memcpy(&v109, &(char)v4, 16);
                    }
                    *((int128_t *)&v10) = *((int128_t *)&v109);
                    v2 = v57;
                    v5 = v59;
                    v7 = v56;
                    v17 = 6;
                    v14 = 2 - v145;
                    v16 = 2 - v146;
                    v9 = v148;
                    v149 = _ZN3vmm6logger7logging6LOGGER17hf7b002b101b876e4E.update(&(char)v1);
                    if (v149)
                    {
                        *((unsigned int *)a0) = 5;
                        *((unsigned long long *)&a0[8]) = v149;
                        core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                    }
                    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) >= 3)
                    {
                        v50 = &g_7a3fa8;
                        v51[0] = <&T as core::fmt::Display>::fmt;
                        v2 = &g_7a3f10;
                        v5 = 1;
                        v10 = 0;
                        v7 = &v50;
                        v9 = 1;
                        v150 = log::__private_api::loc(&g_7a3fb8);
                        v64 = "firecracker";
                        v66 = 11;
                        v67 = "firecracker";
                        v68 = 11;
                        v70 = v150;
                        log::__private_api::log_impl(&(char)v1, 3, &(char)v64);
                    }
                    if (((char)vmm::signal_handler::register_signal_handlers() & 1))
                    {
                        *((unsigned int *)a0) = 1;
                        *((unsigned int *)&a0[4]) = v129;
                        core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                        return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                    }
                    v60 = firecracker::resize_fdtable();
                    if (v60 == 3)
                    {
                        v60.drop_in_place<core::result::Result<(),firecracker::ResizeFdTableError>>();
                    }
                    else
                    {
                        v74 = v60;
                        v75 = v129;
                        if (v60 >= 2)
                        {
                            *((unsigned int *)a0) = 8;
                            *((unsigned long long *)&a0[8]) = v60;
                            *((unsigned long long *)&a0[16]) = v129;
                            core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                        }
                        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) > 3)
                        {
                            v50 = &v74;
                            v51[0] = firecracker::_::<impl core::fmt::Display for firecracker::ResizeFdTableError>::fmt;
                            v2 = &g_7a3f20;
                            v5 = 1;
                            v10 = 0;
                            v7 = &v50;
                            v9 = 1;
                            v151 = log::__private_api::loc(&g_7a3fd0);
                            v64 = "firecracker";
                            v66 = 11;
                            v67 = "firecracker";
                            v68 = 11;
                            v70 = v151;
                            log::__private_api::log_impl(&(char)v1, 4, &(char)v64);
                        }
                        core::ptr::drop_in_place<firecracker::ResizeFdTableError>(&v74);
                    }
                    v94.clone(v62);
                    v96.to_vec("1.14.0-dev", 10);
                    v98.to_vec("Firecracker", 11);
                    v100 = 0;
                    v152 = v63.single_value("metrics-path", 12);
                    if (v152)
                    {
                        v124.to_vec(v152[1], v152[2]);
                        vmm::vmm_config::metrics::init_metrics(&v86, &v124);
                        if (*((long long *)&v86) == 0x8000000000000000)
                            goto LABEL_55b409;
                        v104 = v87;
                        memcpy(&v102, &v86, 16);
                        *((unsigned int *)a0) = 6;
                        a0[4] = v101;
                        *((unsigned int *)&a0[20]) = v103;
                        *((unsigned long long *)&a0[24]) = v104;
                        *((unsigned int *)&a0[32]) = v105;
                        a0[36] = v106;
                        a0[52] = v107;
                        *((unsigned int *)&a0[68]) = v108;
                    }
                    else
                    {
LABEL_55b409:
                        v153 = v63.flag_present("no-seccomp", 10);
                        (char)v1.from_args(v153, v63.single_value("seccomp-filter", 14));
                        if ((char)v2 == 21)
                        {
                            firecracker::seccomp::get_filters(&v82, *((int *)((char *)&v2 + 4)), v5);
                            v155 = a0;
                            if (v82)
                            {
                                *((int128_t *)&v73) = *((int128_t *)&v82);
                                v76 = v84;
                                v77 = v85;
                                v156 = v63.single_value("config-file", 11);
                                v157 = 0x8000000000000000;
                                if (v156)
                                {
                                    std::fs::read_to_string(&(char)v1, v156);
                                    v158 = v2;
                                    *((int128_t *)&v64) = *((int128_t *)&v5);
                                    v157 = 0x8000000000000000;
                                    if (v158 != 9223372036854775809)
                                    {
                                        v112 = v158;
                                        memcpy(&v113, &v64, 16);
                                        (char)v1.expect(&v112, "Unable to open or read from the configuration file", 50, &g_7a3fe8);
                                        v157 = v2;
                                        memcpy(&v81, &v5, 16);
                                    }
                                }
                                v159 = v63.single_value("metadata", 8);
                                v59 = v157;
                                if (v159)
                                {
                                    std::fs::read_to_string(&(char)v1, v159);
                                    v160 = v2;
                                    *((int128_t *)&v64) = *((int128_t *)&v5);
                                    if (v160 == 9223372036854775809)
                                        goto LABEL_55b5a7;
                                    v114 = v160;
                                    memcpy(&v115, &v64, 16);
                                    v60.expect(&v114, "Unable to open or read from the mmds content file", 49, &g_7a4000);
                                }
                                else
                                {
LABEL_55b5a7:
                                    v60 = 0x8000000000000000;
                                }
                                v57 = v63.flag_present("boot-timer", 10);
                                v0 = v63.flag_present("enable-pci", 10);
                                v161 = (unsigned int)v63.flag_present("no-api", 6);
                                v162 = v63.single_value("http-api-max-payload-size", 25);
                                if (!v162)
                                    core::option::unwrap_failed(&g_7a4030); /* do not return */
                                ::0x532600::core::num::<impl u64>::from_ascii_radix(&(char)v1, v162[1], v162[2]);
                                v163 = (char)v1.expect("'http-api-max-payload-size' parameter expected to be of 'usize' type.", 69, &g_7a4018);
                                v164 = v63.single_value("mmds-size-limit", 15);
                                v165 = v163;
                                if (v164)
                                {
                                    ::0x532600::core::num::<impl u64>::from_ascii_radix(&(char)v1, v164[1], v164[2]);
                                    v165 = (char)v1.expect("'mmds-size-limit' parameter expected to be of 'usize' type.", 59, &g_7a4048);
                                }
                                v167 = v165;
                                if ((char)v161)
                                {
                                    (char)v1.into_iter(&(unsigned long long)v73);
                                    (char)v64.collect(&(char)v1);
                                    v49 = v59;
                                    memcpy(&v51, &v81, 16);
                                    *((int128_t *)&v21) = *((int128_t *)&v99);
                                    v168 = *((int128_t *)&v95);
                                    v15 = v98;
                                    v10 = v97;
                                    v6 = v168;
                                    v1 = v94;
                                    firecracker::run_without_api(&v120, &(char)v64, &v49, &(char)v1, v58, v0, v167, (v60 == 0x8000000000000000 ? 0 : v129), v61);
                                    v169 = 11;
                                    if (v120 != 29)
                                    {
                                        v18 = v123;
                                        v11 = v122;
                                        v8 = v121;
                                        v3 = v120;
                                        *((int *)&a0[68]) = (int)(&v18)[12];
                                        *((int128_t *)&a0[52]) = (int128_t)(&v11)[12];
                                        *((int128_t *)&a0[36]) = (int128_t)(&v8)[12];
                                        *((int128_t *)&a0[20]) = (int128_t)(&v3)[12];
                                        *((int128_t *)&a0[4]) = (int128_t)v1;
                                        v169 = 10;
                                    }
                                    *((unsigned int *)a0) = v169;
                                    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(&(char)v64);
                                    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v60);
                                    core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                                }
                                else
                                {
                                    v170 = v63.single_value("api-sock", 8);
                                    if (!v170)
                                        core::option::expect_failed("Missing argument: api-sock", 26, &g_7a4060); /* do not return */
                                    (char)v1.to_vec(v170[1], v170[2]);
                                    v171 = v2;
                                    *((int128_t *)&v64) = *((int128_t *)&v5);
                                    if (v171 == 0x8000000000000000)
                                        core::option::expect_failed("Missing argument: api-sock", 26, &g_7a4060); /* do not return */
                                    v110 = v171;
                                    memcpy(&v111, &v64, 16);
                                    v172 = v63.single_value("start-time-us", 13);
                                    if (v172)
                                    {
                                        v161 = &(char)v1;
                                        ::0x532600::core::num::<impl u64>::from_ascii_radix(&(char)v1, v172[1], v172[2]);
                                        v62[0] = (char)v1.expect("'start-time-us' parameter expected to be of 'u64' type.", 55, &g_7a4078);
                                        v56 = 1;
                                    }
                                    else
                                    {
                                        v56 = 0;
                                    }
                                    v173 = v63.single_value("start-time-cpu-us", 17);
                                    if (v173)
                                    {
                                        ::0x532600::core::num::<impl u64>::from_ascii_radix(&(char)v1, v173[1], v173[2]);
                                        v161 = (char)v1.expect("'start-time-cpu-us' parameter expected to be of 'u64' type.", 59, &g_7a4090);
                                        v174 = 1;
                                    }
                                    else
                                    {
                                        v174 = 0;
                                    }
                                    v175 = v63.single_value("parent-cpu-time-us", 18);
                                    if (v175)
                                    {
                                        ::0x532600::core::num::<impl u64>::from_ascii_radix(&(char)v1, v175[1], v175[2]);
                                        v175 = (char)v1.expect("'parent-cpu-time-us' parameter expected to be of 'u64' type.", 60, &g_7a40a8);
                                        v176 = 1;
                                    }
                                    else
                                    {
                                        v176 = 0;
                                    }
                                    v88 = v56;
                                    v89[0] = v62;
                                    v90 = v174;
                                    v91 = v161;
                                    v92 = v176;
                                    v93[0] = v175;
                                    v1 = v59;
                                    v4 = v81;
                                    firecracker::api_server_adapter::run_with_api(&v116, &(unsigned long long)v73, &(char)v1, &v110, &v94, &v88, v58, v0, v163, v167, (v60 == 0x8000000000000000 ? 0 : v129), v61);
                                    v177 = 11;
                                    if ((char)v116[0] != 32)
                                    {
                                        v19 = v119;
                                        v12 = v118;
                                        v8 = v117;
                                        v3 = v116;
                                        *((int *)&a0[68]) = (int)(&v19)[12];
                                        *((int128_t *)&a0[52]) = (int128_t)(&v12)[12];
                                        *((int128_t *)&a0[36]) = (int128_t)(&v8)[12];
                                        *((int128_t *)&a0[20]) = (int128_t)(&v3)[12];
                                        *((int128_t *)&a0[4]) = *((int128_t *)&v1);
                                        v177 = 9;
                                    }
                                    *((unsigned int *)a0) = v177;
                                    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v60);
                                    core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,alloc::sync::Arc<alloc::vec::Vec<u64>>>>(&(unsigned long long)v73);
                                    core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                                }
                            }
                        }
                        else
                        {
                            memcpy(&(char)v84, &(char)v7, 16);
                            *((int128_t *)&v83) = *((int128_t *)&v2);
                            v155 = a0;
                        }
                        memcpy(&(char)v7, &(char)v84, 16);
                        *((int128_t *)&v3) = (int128_t)v83;
                        memcpy(&v70, &v10, 16);
                        v178 = (int128_t)(&v3)[12];
                        v55 = (int)(&v13)[8];
                        *((int128_t *)&v49) = *((int128_t *)&v2);
                        v52 = v178;
                        v53 = v69;
                        *((unsigned int *)&v155[52]) = v55;
                        v179 = (int128_t)v49;
                        *((int128_t *)&v155[36]) = (int128_t)v53;
                        v155[20] = v52;
                        v155[4] = v179;
                        *((unsigned int *)v155) = 7;
                    }
                    core::ptr::drop_in_place<vmm::vmm_config::instance_info::InstanceInfo>(&v94);
                    core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
                    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
                }
            }
            *((unsigned int *)a0) = 11;
            core::ptr::drop_in_place<utils::arg_parser::ArgParser>(&v63);
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v78);
        }
    }
    alloc::alloc::handle_alloc_error(8, 16); /* do not return */
}
