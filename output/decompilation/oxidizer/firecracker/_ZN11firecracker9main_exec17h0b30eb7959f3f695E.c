fn firecracker::main_exec() -> : struct72 {
    let a0: struct12;  // rdi
    let v0: u8;  // [bp-0x479]
    let v1: struct40;  // [bp-0x478], Other Possible Types: struct8, u64
    let v2: u64;  // [bp-0x478]
    let v3: u64;  // [bp-0x478]
    let v4: u64;  // [bp-0x478]
    let v5: u64;  // [bp-0x478]
    let v6: u64;  // [bp-0x478]
    let v7: u64;  // [bp-0x478]
    let v8: u64;  // [bp-0x478]
    let v9: struct24;  // [bp-0x478]
    let v10: u64;  // [bp-0x478]
    let v11: u64;  // [bp-0x478]
    let v12: u64;  // [bp-0x478]
    let v13: u64;  // [bp-0x478]
    let v14: u64;  // [bp-0x478]
    let v15: u64;  // [bp-0x478]
    let v16: u64;  // [bp-0x478]
    let v17: u64;  // [bp-0x478]
    let v19: struct48;  // [bp-0x478]
    let v20: struct28;  // [bp-0x478]
    let v21: struct24;  // [bp-0x478]
    let v22: Result<struct24, struct9>;  // [bp-0x478]
    let v23: alloc::string::String;  // [bp-0x478]
    let v24: struct51;  // [bp-0x478]
    let v25: struct9;  // [bp-0x478]
    let v26: Result<struct24, struct16>;  // [bp-0x478]
    let v27: struct24;  // [bp-0x478]
    let v28: Result<struct24, struct16>;  // [bp-0x478]
    let v29: struct80;  // [bp-0x478]
    let v30: struct24;  // [bp-0x478]
    let v31: u64;  // [bp-0x478]
    let v32: struct24;  // [bp-0x478]
    let v33: u64;  // [bp-0x478]
    let v34: u64;  // [bp-0x478]
    let v35: u64;  // [bp-0x478]
    let v36: iNone;  // [bp-0x474], Other Possible Types: u128
    let v37: u64;  // [bp-0x470]
    let v38: i64;  // [bp-0x468], Other Possible Types: struct_3 *
    let v39: u128;  // [bp-0x464]
    let v40: u64;  // [bp-0x460]
    let v41: u64;  // [bp-0x460]
    let v42: void*;  // [bp-0x458], Other Possible Types: u64
    let v43: u128;  // [bp-0x454]
    let v44: u128;  // [bp-0x450]
    let v45: u128;  // [bp-0x444]
    let v46: u128;  // [bp-0x444]
    let v47: u64;  // [bp-0x440]
    let v48: void*;  // [bp-0x438]
    let v49: u64;  // [bp-0x430]
    let v50: void*;  // [bp-0x428]
    let v51: &str;  // [bp-0x420]
    let v52: &str;  // [bp-0x410], Other Possible Types: void*
    let v53: void*;  // [bp-0x400], Other Possible Types: &str
    let v54: void*;  // [bp-0x3f0], Other Possible Types: u16
    let v55: u64;  // [bp-0x3f0]
    let v56: u64;  // [bp-0x3f0]
    let v57: u64;  // [bp-0x3f0]
    let v58: void*;  // [bp-0x3f0]
    let v59: u64;  // [bp-0x3f0]
    let v60: u64;  // [bp-0x3f0]
    let v61: u64;  // [bp-0x3f0]
    let v62: void*;  // [bp-0x3f0]
    let v63: void*;  // [bp-0x3f0]
    let v64: u64;  // [bp-0x3f0]
    let v65: void*;  // [bp-0x3f0]
    let v66: void*;  // [bp-0x3f0]
    let v67: void*;  // [bp-0x3f0]
    let v68: u16;  // [bp-0x3f0]
    let v69: u64;  // [bp-0x3f0]
    let v70: u8;  // [bp-0x3ee]
    let v71: iNone;  // [bp-0x3e0]
    let v72: u64;  // [bp-0x3d0]
    let v73: void*;  // [bp-0x3c8], Other Possible Types: struct16, struct24, struct48, u64
    let v74: struct48;  // [bp-0x3c8]
    let v75: u64;  // [bp-0x3c8]
    let v76: i64;  // [bp-0x3c8]
    let v77: u64;  // [bp-0x3c0]
    let v78: u64;  // [bp-0x3c0]
    let v79: iNone;  // [bp-0x3b8], Other Possible Types: u128
    let v80: u128;  // [bp-0x3a8]
    let v81: void*;  // [bp-0x3a0]
    let v82: u32;  // [bp-0x398]
    let v83: u64;  // [bp-0x390]
    let v84: u64;  // [bp-0x388]
    let v85: u8;  // [bp-0x388]
    let v86: core::fmt::rt::Argument;  // [bp-0x380], Other Possible Types: u64
    let v87: u64;  // [bp-0x378]
    let v88: struct24;  // [bp-0x378]
    let v89: u64;  // [bp-0x368]
    let v90: i64;  // [bp-0x360]
    let v91: struct48;  // [bp-0x358]
    let v92: struct24;  // [bp-0x328], Other Possible Types: struct144, struct48, u128
    let v93: struct48;  // [bp-0x328]
    let v94: alloc::string::String;  // [bp-0x328]
    let v95: u64;  // [bp-0x328]
    let v96: struct40;  // [bp-0x328]
    let v97: struct40;  // [bp-0x328]
    let v98: u128;  // [bp-0x328]
    let v99: u128;  // [bp-0x328]
    let v100: u128;  // [bp-0x328]
    let v101: u64;  // [bp-0x321]
    let v102: u128;  // [bp-0x318]
    let v103: void*;  // [bp-0x308], Other Possible Types: u128
    let v104: &str;  // [bp-0x2b0]
    let v105: struct16;  // [bp-0x298], Other Possible Types: struct24, struct48, u64
    let v106: iNone;  // [bp-0x288]
    let v107: iNone;  // [bp-0x278]
    let v108: u128;  // [bp-0x268]
    let v109: u64;  // [bp-0x260]
    let v110: u64;  // [bp-0x258]
    let v111: iNone;  // [bp-0x248]
    let v112: struct48;  // [bp-0x238]
    let v113: iNone;  // [bp-0x230]
    let v114: u128;  // [bp-0x220]
    let v115: iNone;  // [bp-0x218]
    let v116: Option<struct24>;  // [bp-0x208]
    let v117: u64;  // [bp-0x1f8]
    let v118: struct48;  // [bp-0x1f0]
    let v119: alloc::string::String;  // [bp-0x1c0]
    let v120: struct24;  // [bp-0x1a8]
    let v121: u128;  // [bp-0x1a0]
    let v122: struct24;  // [bp-0x190]
    let v123: u8;  // [bp-0x178]
    let v124: i8;  // [bp-0x16c]
    let v125: u128;  // [bp-0x168]
    let v126: u32;  // [bp-0x15c]
    let v127: u64;  // [bp-0x158]
    let v128: u32;  // [bp-0x150]
    let v129: u128;  // [bp-0x14c]
    let v130: u128;  // [bp-0x13c]
    let v131: u32;  // [bp-0x12c]
    let v132: iNone;  // [bp-0x128]
    let v133: struct24;  // [bp-0x110]
    let v134: struct24;  // [bp-0xf8]
    let v135: struct24;  // [bp-0xe0]
    let v136: struct64;  // [bp-0xc8]
    let v137: u128;  // [bp-0xb8]
    let v138: u128;  // [bp-0xa8]
    let v139: u128;  // [bp-0x98]
    let v140: struct1;  // [bp-0x88]
    let v141: u128;  // [bp-0x78]
    let v142: u128;  // [bp-0x68]
    let v143: u128;  // [bp-0x58]
    let v144: struct24;  // [bp-0x48]
    let v147: void*;  // rax
    let v148: u32;  // rdx
    let v149: struct24;  // rax
    let v150: i64;  // rax
    let v151: struct8;  // rax
    let v152: i64;  // rax
    let v153: u64;  // rax
    let v154: iNone;  // xmm0
    let v155: i64;  // rax
    let v156: i64;  // r15
    let v157: core::fmt::rt::Argument;  // r12
    let v158: u64;  // rbx
    let v159: i64;  // rax
    let v160: i64;  // rax
    let v161: u64;  // rcx
    let v162: u8;  // al
    let v163: u64;  // rdx
    let v164: u8;  // al
    let v165: u8;  // al
    let v166: u64;  // rax
    let v167: struct16;  // rcx
    let v168: u64;  // rax
    let v171: struct172;  // rax
    let v172: u32;  // eax
    let v174: struct12;  // rbx
    let v175: iNone;  // xmm1
    let v176: u64;  // rax
    let v177: u64;  // r14
    let v178: u64;  // rax
    let v179: u64;  // rax
    let v180: u64;  // rax
    let v181: struct17;  // r13
    let v182: i64;  // rax
    let v183: u64;  // r12
    let v184: i64;  // rax
    let v185: u64;  // r12
    let v187: u64;  // r15
    let v188: iNone;  // xmm1
    let v190: u32;  // eax
    let v191: i64;  // rax
    let v192: u64;  // rax
    let v193: i64;  // rax
    let v194: i64;  // rax
    let v195: u64;  // rbx
    let v196: struct40;  // rax
    let v197: u64;  // rcx
    let v199: u32;  // eax
    let v200: iNone;  // xmm0
    let v201: iNone;  // xmm0
    let v202: iNone;  // xmm1
    let v203: iNone;  // xmm0
    let v204: iNone;  // xmm0
    let v205: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v206: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v207: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v208: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v209: core::result::Result<(), core::fmt::Error>;  // rax
    let v210: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx

    if vmm::logger::logging::Logger::init(&_ZN3vmm6logger7logging6LOGGER17hf7b002b101b876e4E) {
        return struct4 {
            field_0: 0
        };
    }
    vmm::arch::host_page_size();
    std::panicking::set_hook(alloc::boxed::Box<T>::new(std::io::stdio::stdin()), &g_7a3f30);
    v209 = core::fmt::num::imp::<impl u64>::_fmt(0xc800, &v92) as u64;
    v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(&v209 as &i64), v148);
    v110 = v9.field_16;
    v108 = *(&v9.field_0 as &i128);
    v73 = 0;
    v78 = 8;
    v81 = 0;
    v79 = 0;
    v1 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "api-sock";
    v52 = 0;
    v53 = 0;
    v54 = 0x100;
    v70 = 0;
    v92 = utils::arg_parser::Argument::default_value(&v17, "/run/firecracker.socket");
    v104 = "Path to unix domain socket used by the API.";
    memcpy(&v17, &v92, 144);
    v105 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v13 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "id";
    v52 = 0;
    v53 = 0;
    v54 = 0x100;
    v70 = 0;
    v92 = utils::arg_parser::Argument::default_value(&v17, "anonymous-instance");
    v104 = "MicroVM unique identifier.";
    memcpy(&v17, &v92, 144);
    v73 = utils::arg_parser::ArgParser::arg(&v105, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v31 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "seccomp-filter";
    v52 = 0;
    v53 = 0;
    v54 = 0x100;
    v70 = 0;
    v149 = alloc::alloc::Global::alloc_impl(8, 16, 0);
    *(v149 as &&u8) = &g_438c7a;
    *((v149 + 8) as &i64) = 10;
    v105 = struct24 {
        field_0: 1
        field_8: v149
        field_16: 1
    };
    v92 = utils::arg_parser::Argument::forbids(&v17, &v105);
    v104 = "Optional parameter which allows specifying the path to a custom seccomp filter. For advanced users.";
    memcpy(&v17, &v92, 144);
    v105 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v33 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "no-seccomp";
    v52 = 0;
    v53 = 0;
    v68 = 0;
    v70 = 0;
    v150 = alloc::alloc::Global::alloc_impl(8, 16, 0);
    *(v150 as &&u8) = &g_438c09;
    *((v150 + 8) as &i64) = 14;
    v73 = struct24 {
        field_0: 1
        field_8: v150
        field_16: 1
    };
    v92 = utils::arg_parser::Argument::forbids(&v17, &v73);
    v104 = "Optional parameter which allows starting and using a microVM without seccomp filtering. Not recommended.";
    memcpy(&v17, &v92, 144);
    v92 = utils::arg_parser::ArgParser::arg(&v105, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v34 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "start-time-us";
    v52 = 0;
    v53 = "Process start time (wall clock, microseconds). This parameter is optional.";
    v69 = 0x100;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v35 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "start-time-cpu-us";
    v52 = 0;
    v53 = "Process start CPU time (wall clock, microseconds). This parameter is optional.";
    v54 = 0x100;
    v92 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v2 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "parent-cpu-time-us";
    v52 = 0;
    v53 = "Parent process CPU time (wall clock, microseconds). This parameter is optional.";
    v55 = 0x100;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v3 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "config-file";
    v52 = 0;
    v53 = "Path to a file that contains the microVM configuration in JSON format.";
    v56 = 0x100;
    v92 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v4 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "metadata";
    v52 = 0;
    v53 = "Path to a file that contains metadata in JSON format to add to the mmds.";
    v57 = 0x100;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v5 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "no-api";
    v52 = "config-file";
    v53 = "Optional parameter which allows starting and using a microVM without an active API socket.";
    v58 = 0;
    v92 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v6 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "log-path";
    v52 = 0;
    v53 = "Path to a fifo or a file used for configuring the logger on startup.";
    v59 = 0x100;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v7 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "level";
    v52 = 0;
    v53 = "Set the logger level.";
    v60 = 0x100;
    v92 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v8 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "module";
    v52 = 0;
    v53 = "Set the logger module filter.";
    v61 = 0x100;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v10 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "show-level";
    v52 = 0;
    v53 = "Whether or not to output the level in the logs.";
    v62 = 0;
    v92 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v11 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "show-log-origin";
    v52 = 0;
    v53 = "Whether or not to include the file path and line number of the log's origin.";
    v63 = 0;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v12 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "metrics-path";
    v52 = 0;
    v53 = "Path to a fifo or a file used for configuring the metrics on startup.";
    v64 = 0x100;
    v92 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v14 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "boot-timer";
    v52 = 0;
    v53 = "Whether or not to load boot timer device for logging elapsed time since InstanceStart command.";
    v65 = 0;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v15 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "version";
    v52 = 0;
    v53 = "Print the binary version number.";
    v66 = 0;
    v92 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v16 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "snapshot-version";
    v52 = 0;
    v53 = "Print the supported data format version.";
    v67 = 0;
    v73 = utils::arg_parser::ArgParser::arg(&v92, &v17);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v17 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "describe-snapshot";
    v52 = 0;
    v53 = "Print the data format version of the provided snapshot state file.";
    v54 = 0x100;
    v105 = utils::arg_parser::ArgParser::arg(&v73, &v17);
    *(&v44 as void*) = v71;
    v47 = v41;
    v2 = struct32 {
        field_0: 3
        field_8: v71
        field_24: v72
    };
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "http-api-max-payload-size";
    v52 = 0;
    v53 = 0;
    v54 = 0x100;
    v70 = 0;
    v92 = utils::arg_parser::Argument::default_value(&v2, v109, v110);
    v104 = "Http API request payload max size, in bytes.";
    memcpy(&v2, &v92, 144);
    v93 = utils::arg_parser::ArgParser::arg(&v105, &v2);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v1 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "mmds-size-limit";
    v52 = 0;
    v53 = "Mmds data store limit, in bytes.";
    v55 = 0x100;
    v74 = utils::arg_parser::ArgParser::arg(&v93, &v2);
    v40 = v72;
    *(&v37 as void*) = v71;
    *(&v44 as void*) = v71;
    v47 = v40;
    v2 = 3;
    v42 = 3;
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v51 = "enable-pci";
    v52 = 0;
    v53 = "Enables PCIe support.";
    v54 = 0;
    v91 = utils::arg_parser::ArgParser::arg(&v74, &v2);
    v1 = utils::arg_parser::ArgParser::parse_from_cmdline(&v91);
    v151 = v1.field_0;
    if v151 != 9223372036854775812 {
        v204 = v37;
        return struct56 {
            field_0: 2
            padding_4: <UNKNOWN>
            field_8: v151
            field_16: v204
            field_32: *(&v40 as &i128)
            field_48: v44 as i64
        };
    }
    if utils::arg_parser::Arguments::flag_present(&v91, "help") {
        println!("Firecracker v{}\n", "1.14.0-dev");
        v92 = utils::arg_parser::ArgParser::formatted_help(&v91);
        println!("{}", &v92);
    } else if utils::arg_parser::Arguments::flag_present(&v91, "version") {
        println!("Firecracker v{}\n", "1.14.0-dev");
    } else if utils::arg_parser::Arguments::flag_present(&v91, "snapshot-version") {
        v102 = 8;
        v92 = 340282366920938463463374607431768211455;
        v103 = 0;
        println!("v{}", &v93);
    } else {
        v152 = utils::arg_parser::Arguments::single_value(&v91, "describe-snapshot");
        if v152 {
            v19 = firecracker::print_snapshot_data_format(*((v152 + 8) as &i64), *((v152 + 16) as &i64));
            v153 = v19.field_0;
            if v153 != 7 {
                v154 = *((&v19.field_0 as &char + 8) as &i128);
                return struct56 {
                    field_0: 3
                    padding_4: <UNKNOWN>
                    field_8: v153
                    field_16: v154
                    field_32: *((&v19.field_16 as &char + 8) as &i128)
                    field_48: *((&v19.field_32 as &char + 8) as &i64)
                };
            }
        } else {
            v155 = utils::arg_parser::Arguments::single_value(&v91, "id");
            core::option::unwrap(v155);
            v156 = v155;
            v20 = utils::validators::validate_instance_id(*((v155 + 8) as &i64), *((v155 + 16) as &i64));
            core::result::Result<T,E>::expect(&v20);
            v157 = &v93;
            v94 = <alloc::string::String as core::clone::Clone>::clone(v156);
            v1 = std::sync::once_lock::OnceLock<T>::try_insert(&v94);
            v158 = 0x8000000000000000;
            if v20.field_8 == 0x8000000000000000 {
                v75 = 0x8000000000000000;
            } else {
                v79 = v40;
                *(&v73 as &i128) = *(&v20.field_8 as &i128);
            }
            vvar_2441{stack -968} = struct16 OrderedDict([(0, 𝜙@64b [((5615415, None), vvar_1914{stack -968}), ((5615355, None), vvar_2173{stack -968})]), (8, 𝜙@64b [((5615415, None), vvar_1915{stack -960}), ((5615355, None), vvar_1915{stack -960})])])
            core::result::Result<T,E>::unwrap(&v73);
            v159 = utils::arg_parser::Arguments::single_value(&v91, "log-path");
            if v159 {
                v21 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v159 + 8) as &i64), *((v159 + 16) as &i64));
            }
            v160 = utils::arg_parser::Arguments::single_value(&v91, "level");
            if v160 {
                v22 = <vmm::logger::logging::LevelFilter as core::str::traits::FromStr>::from_str(*((v160 + 8) as &i64), *((v160 + 16) as &i64));
                v161 = v22 as i64;
                v162 = *((&v22 as &char + 8) as &i8);
                v95 = *((&v22 as &char + 9) as &i64);
                v101 = *((&v22 as &char + 16) as &i64);
                if v161 != 9223372036854775809 && !((((0 ^ v161) & (0 ^ -(v161))) >> 63) as char) {
                    v163 = v95;
                    return struct40 {
                        field_0: 4
                        padding_4: <UNKNOWN>
                        field_8: v161
                        field_16: v162
                        field_17: v101
                        field_24: <UNKNOWN>
                    };
                }
            }
            v0 = 6;
            v84 = v158;
            v86 = v157;
            v90 = v156;
            v164 = utils::arg_parser::Arguments::flag_present(&v91, "show-level");
            v165 = utils::arg_parser::Arguments::flag_present(&v91, "show-log-origin");
            v166 = utils::arg_parser::Arguments::single_value(&v91, "module");
            v167 = 0x8000000000000000;
            if v166 {
                v23 = <alloc::string::String as core::clone::Clone>::clone(v166);
            }
            v24 = struct51 {
                field_0: v84
                field_8: v86
                field_16: v83
                field_24: v167
                field_32: v132
                field_48: 2 - v164
                field_49: 2 - v165
                field_50: 6
            };
            v168 = vmm::logger::logging::Logger::update(&_ZN3vmm6logger7logging6LOGGER17hf7b002b101b876e4E, &v24);
            if v168 {
                return struct16 {
                    field_0: 5
                    padding_4: <UNKNOWN>
                    field_8: v168
                };
            }
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 >= 3 {
                v76 = "1.14.0-dev";
                v77 = <&T as core::fmt::Display>::fmt;
                *(&v1 as &&str) = "Running Firecracker v";
                v37 = 1;
                v42 = 0;
                *(&v38 as &&struct_4 *) = &v76;
                v40 = 1;
                v96 = struct40 {
                    field_0: "firecracker"
                    field_16: "firecracker"
                    field_32: log::__private_api::loc("src/firecracker/src/main.rs")
                };
                log::__private_api::log_impl(&v24, 3, &v96);
            }
            if (vmm::signal_handler::register_signal_handlers() & 1) {
                return struct8 {
                    field_0: 1
                    field_4: v148 as u32
                };
            }
            v87 = firecracker::resize_fdtable();
            if v87 != 3 {
                v105 = struct16 {
                    field_0: v87
                    field_8: v148
                };
                if v87 >= 2 {
                    return struct24 {
                        field_0: 8
                        padding_4: <UNKNOWN>
                        field_8: v87
                        field_16: v148
                    };
                } else if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 > 3 {
                    v76 = &v105;
                    v77 = firecracker::_::<impl core::fmt::Display for firecracker::ResizeFdTableError>::fmt;
                    *(&v2 as &&str) = "Failed to resize fdtable: ";
                    v37 = 1;
                    v42 = 0;
                    *(&v38 as &&struct_4 *) = &v76;
                    v40 = 1;
                    v97 = struct40 {
                        field_0: "firecracker"
                        field_16: "firecracker"
                        field_32: log::__private_api::loc("src/firecracker/src/main.rs")
                    };
                    log::__private_api::log_impl(&v24, 4, &v97);
                }
            }
            v119 = <alloc::string::String as core::clone::Clone>::clone(v90);
            v120 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("1.14.0-dev");
            v122 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Firecracker");
            v123 = 0;
            v171 = utils::arg_parser::Arguments::single_value(&v91, "metrics-path");
            if v171 {
                v144 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v171 + 8) as &i64), *((v171 + 16) as &i64));
                v116 = vmm::vmm_config::metrics::init_metrics(&v144);
                if let Some(_) = v116 {
                    v127 = v117;
                    v125 = v116 as i128 as u128;
                    return struct88 {
                        field_0: 6
                        field_4: <UNKNOWN>
                        field_20: v127
                        field_24: v128
                        field_32: <UNKNOWN>
                        field_36: <UNKNOWN>
                        field_52: <UNKNOWN>
                        field_68: <UNKNOWN>
                    };
                }
            }
            v172 = utils::arg_parser::Arguments::flag_present(&v91, "no-seccomp");
            v27 as u128 = firecracker::seccomp::SeccompConfig::from_args(v172, utils::arg_parser::Arguments::single_value(&v91, "seccomp-filter"));
            if v25.field_0 == 21 {
                v112 = firecracker::seccomp::get_filters(*(&(&v25.field_0)[4] as &i32), v25.field_8);
                v174 = a0;
                if v112.field_0 as i64 {
                    v175 = v112.field_16;
                    v105 = v112.field_0;
                    v106 = v175;
                    v107 = v115;
                    v176 = utils::arg_parser::Arguments::single_value(&v91, "config-file");
                    v177 = 0x8000000000000000;
                    if v176 {
                        v26 = std::fs::read_to_string(v176);
                        v178 = v26 as i64;
                        v98 = *((&v26 as &char + 8) as &i128);
                        v177 = 0x8000000000000000;
                        if v178 != 9223372036854775809 {
                            v134 = struct24 {
                                field_0: v178
                                field_8: v98
                            };
                            v27 = core::result::Result<T,E>::expect(&v134, "Unable to open or read from the configuration file", "src/firecracker/src/main.rs");
                        }
                    }
                    v179 = utils::arg_parser::Arguments::single_value(&v91, "metadata");
                    v86 = v177;
                    if v179 {
                        v28 = std::fs::read_to_string(v179);
                        v180 = v28 as i64;
                        v99 = *((&v28 as &char + 8) as &i128);
                        if v180 != 9223372036854775809 {
                            v135 = struct24 {
                                field_0: v180
                                field_8: v99
                            };
                            v88 = core::result::Result<T,E>::expect(&v135, "Unable to open or read from the mmds content file", "src/firecracker/src/main.rs");
                        }
                    }
                    v84 = utils::arg_parser::Arguments::flag_present(&v91, "boot-timer");
                    v0 = utils::arg_parser::Arguments::flag_present(&v91, "enable-pci");
                    v181 = utils::arg_parser::Arguments::flag_present(&v91, "no-api");
                    v182 = utils::arg_parser::Arguments::single_value(&v91, "http-api-max-payload-size");
                    core::option::unwrap(v182);
                    v210 = core::num::<impl u64>::from_ascii_radix(&v27 as u128, *((v182 + 8) as &i64), *((v182 + 16) as &i64));
                    v183 = core::result::Result<T,E>::expect(&v27 as u128, "'http-api-max-payload-size' parameter expected to be of 'usize' type.", "src/firecracker/src/main.rs");
                    v184 = utils::arg_parser::Arguments::single_value(&v91, "mmds-size-limit");
                    v185 = v183;
                    if v184 {
                        v207 = core::num::<impl u64>::from_ascii_radix(&v27 as u128, *((v184 + 8) as &i64), *((v184 + 16) as &i64));
                        v185 = core::result::Result<T,E>::expect(&v27 as u128, "'mmds-size-limit' parameter expected to be of 'usize' type.", "src/firecracker/src/main.rs");
                    }
                    v187 = v185;
                    if v181 as u8 {
                        v1 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v105);
                        v92 = core::iter::traits::iterator::Iterator::collect(&v1);
                        v73 = struct24 {
                            field_0: v86
                            field_8: v111
                        };
                        v188 = *(&v119.vec.len as &i128);
                        v29 = struct80 {
                            field_0: *(&v119.vec.buf.inner.cap as &i128)
                            field_16: v188
                            field_32: v121
                            field_48: *(&v122.field_0 as &i128)
                            field_64: *(&v122.field_0 as &i128)
                        };
                        v140 = firecracker::run_without_api(&v92, &v73, &v29, v85, v0, v187, (v87 == 0x8000000000000000 ? 0 : v148), v89);
                        v45 = v143;
                        v43 = v142;
                        v39 = v141;
                        *(&v29 as u8 as &struct1) = v140;
                        v190 = 10;
                        return struct80 {
                            field_0: v147 as u32
                            field_4: <UNKNOWN>
                            field_20: <UNKNOWN>
                            field_36: <UNKNOWN>
                            field_52: <UNKNOWN>
                            field_68: <UNKNOWN>
                        };
                    }
                    v191 = utils::arg_parser::Arguments::single_value(&v91, "api-sock");
                    if v191 {
                        v30 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*((v191 + 8) as &i64), *((v191 + 16) as &i64));
                        v192 = v30.field_0;
                        v100 = *(&v30.field_8 as &i128);
                        if v192 != 0x8000000000000000 {
                            v133 = struct24 {
                                field_0: v192
                                field_8: v100
                            };
                            v193 = utils::arg_parser::Arguments::single_value(&v91, "start-time-us");
                            if v193 {
                                v181 = &v30;
                                v206 = core::num::<impl u64>::from_ascii_radix(&v30, *((v193 + 8) as &i64), *((v193 + 16) as &i64));
                                v90 = core::result::Result<T,E>::expect(&v30, "'start-time-us' parameter expected to be of 'u64' type.", "src/firecracker/src/main.rs");
                                v83 = 1;
                            }
                            v194 = utils::arg_parser::Arguments::single_value(&v91, "start-time-cpu-us");
                            if v194 {
                                v205 = core::num::<impl u64>::from_ascii_radix(&v30, *((v194 + 8) as &i64), *((v194 + 16) as &i64));
                                v181 = core::result::Result<T,E>::expect(&v30, "'start-time-cpu-us' parameter expected to be of 'u64' type.", "src/firecracker/src/main.rs");
                                v195 = 1;
                            }
                            v196 = utils::arg_parser::Arguments::single_value(&v91, "parent-cpu-time-us");
                            if v196 {
                                v208 = core::num::<impl u64>::from_ascii_radix(&v30, *((v196 + 8) as &i64), *((v196 + 16) as &i64));
                                v196 = core::result::Result<T,E>::expect(&v30, "'parent-cpu-time-us' parameter expected to be of 'u64' type.", "src/firecracker/src/main.rs");
                            }
                            v118 = struct48 {
                                field_0: v83
                                field_8: v90
                                field_16: v195
                                field_24: v181
                                field_32: v197
                                field_40: v196
                            };
                            v32 = struct24 {
                                field_0: v86
                                field_8: v111
                            };
                            v136 = firecracker::api_server_adapter::run_with_api(&v105, &v32, &v133, &v119, &v118, v85, v0, v183, v187, (v87 == 0x8000000000000000 ? 0 : v148), v89);
                            v46 = v139;
                            v43 = v138;
                            v39 = v137;
                            v36 = v136.field_0;
                            v199 = 9;
                            return struct80 {
                                field_0: v147 as u32
                                field_4: <UNKNOWN>
                                field_20: <UNKNOWN>
                                field_36: <UNKNOWN>
                                field_52: <UNKNOWN>
                                field_68: <UNKNOWN>
                            };
                        }
                    }
                    core::option::expect_failed("Missing argument: api-sock"); /* do not return */
                }
            } else {
                v200 = *(&v25.field_0 as &i128);
                v114 = *(&v24.field_16 as &i128);
                v113 = v200;
                v174 = a0;
            }
            v201 = *((&v112.field_0 as &char + 8) as &i128);
            v39 = *((&v112.field_16 as &char + 8) as &i128);
            v36 = v201;
            v103 = v24.field_32;
            v202 = (&v36)[12] as i128;
            v82 = *(&v24.field_48 as &i32);
            *(&v73 as &i128) = *(&v25.field_0 as &i128);
            v79 = v202;
            v80 = v103;
            *((v174 + 52) as &u32) = v82;
            v203 = *(&v73 as &i128);
            *((v174 + 36) as &u128) = v80;
            *((v174 + 20) as void*) = v79;
            *((v174 + 4) as void*) = v203;
            *(v174 as &i32) = 7;
        }
    }
    return struct4 {
        field_0: 11
    };
}
