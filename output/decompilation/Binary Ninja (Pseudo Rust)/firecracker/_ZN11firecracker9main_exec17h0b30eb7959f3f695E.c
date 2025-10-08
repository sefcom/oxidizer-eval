
  fn firecracker::main_exec::h0b30eb7959f3f695(arg1: *mut i32) -> i64

{
    let result: i8 = vmm::logger::logging::Logger::init::hde53f9574ccc2810(
        &vmm::logger::logging::LOGGER::hf7b002b101b876e4);
    
    if result != 0
    {
        *arg1 = 0;
        return result;
    }
    
    vmm::arch::host_page_size::hc6d6bc838143332a();
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    std::panicking::set_hook::h907d45d363a27a50(
        alloc::boxed::Box$LT$T$GT$::new::hc010b2f6a24aeed3(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b), 
        &data_7a3f30);
    let mut var_328: *mut *mut [i8; 0x94];
    let mut rax_1: i64;
    let mut rdx_1: u64;
    rax_1 =
        core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(0xc800, &var_328, 0x14);
    let mut var_478: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_478, rax_1, rdx_1);
    let mut var_268: i128 = var_478;
    let mut var_3c8: *const *mut *mut [i8; 0x94] = nullptr;
    let var_3c0_1: i64 = 8;
    let var_3a0_1: i64 = 0;
    let mut var_3b8_1: i128 = {0};
    var_478 = 3;
    let var_458_1: i64 = 3;
    let var_438_1: i64 = 0;
    let var_430_1: i64 = 8;
    let var_428_1: i64 = 0;
    let var_420_1: *const i8 = &data_4310f8[0x28];
    let var_418_1: i64 = 8;
    let var_410_1: i64 = 0;
    let var_400_1: i64 = 0;
    let var_3f0_1: i16 = 0x100;
    let var_3ee_1: i8 = 0;
    utils::arg_parser::Argument::default_value::he023b124caa1f40a(&var_328, &var_478, 
        "/run/firecracker.socketanonymous…", 0x17);
    let var_2b0_1: *const i8 = "Path to unix domain socket used …";
    let var_2a8_1: i64 = 0x2b;
    memcpy(&var_478, &var_328, 0x90);
    let mut var_298: *mut *mut [i8; 0x94];
    utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_298, &var_3c8, &var_478);
    var_478 = 3;
    let var_458_2: i64 = 3;
    let var_438_2: i64 = 0;
    let var_430_2: i64 = 8;
    let var_428_2: i64 = 0;
    let var_420_2: *const i8 = "idvmm_versionMachineConfig/home/…";
    let var_418_2: i64 = 2;
    let var_410_2: i64 = 0;
    let var_400_2: i64 = 0;
    let var_3f0_2: i16 = 0x100;
    let var_3ee_2: i8 = 0;
    utils::arg_parser::Argument::default_value::he023b124caa1f40a(&var_328, &var_478, 
        "anonymous-instanceInvalid instan…", 0x12);
    let var_2b0_2: *const i8 = "MicroVM unique identifier.seccom…";
    let var_2a8_2: i64 = 0x1a;
    memcpy(&var_478, &var_328, 0x90);
    utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_298, &var_478);
    let var_3d0: i64;
    let var_460_1: i64 = var_3d0;
    let var_3e0: i128;
    var_478 = var_3e0;
    let var_450_1: i128 = var_3e0;
    let var_440_1: i64 = var_3d0;
    var_478 = 3;
    let var_458_3: i64 = 3;
    let var_438_3: i64 = 0;
    let var_430_3: i64 = 8;
    let var_428_3: i64 = 0;
    let var_420_3: *const i8 = "seccomp-filterOptional parameter…";
    let var_418_3: i64 = 0xe;
    let var_410_3: i64 = 0;
    let var_400_3: i64 = 0;
    let var_3f0_3: i16 = 0x100;
    let var_3ee_3: i8 = 0;
    let rax_4: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10, 0);
    
    if rax_4 != 0
    {
        *rax_4 = "no-seccompOptional parameter whi…";
        *(rax_4 + 8) = 0xa;
        var_298 = 1;
        let var_290_1: u64 = rax_4;
        let mut var_288_1: i64 = 1;
        utils::arg_parser::Argument::forbids::h0672c6c5882fec3f(&var_328, &var_478, &var_298);
        let var_2b0_3: *const i8 = "Optional parameter which allows …";
        let var_2a8_3: i64 = 0x63;
        memcpy(&var_478, &var_328, 0x90);
        utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_298, &var_3c8, &var_478);
        let var_460_2: i64 = var_3d0;
        var_478 = var_3e0;
        let var_450_2: i128 = var_3e0;
        let var_440_2: i64 = var_3d0;
        var_478 = 3;
        let var_458_4: i64 = 3;
        let var_438_4: i64 = 0;
        let var_430_4: i64 = 8;
        let var_428_4: i64 = 0;
        let var_420_4: *const i8 = "no-seccompOptional parameter whi…";
        let var_418_4: i64 = 0xa;
        let var_410_4: i64 = 0;
        let var_400_4: i64 = 0;
        let mut var_3f0_4: i16 = 0;
        let var_3ee_4: i8 = 0;
        let rax_6: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10, 0);
        
        if rax_6 != 0
        {
            *rax_6 = "seccomp-filterOptional parameter…";
            *(rax_6 + 8) = 0xe;
            var_3c8 = 1;
            let mut var_3c0_2: u64 = rax_6;
            var_3b8_1 = 1;
            utils::arg_parser::Argument::forbids::h0672c6c5882fec3f(&var_328, &var_478, &var_3c8);
            let var_2b0_4: *const i8 = "Optional parameter which allows …";
            let var_2a8_4: i64 = 0x68;
            memcpy(&var_478, &var_328, 0x90);
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_298, &var_478);
            let var_460_3: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_3: i128 = var_3e0;
            let var_440_3: i64 = var_3d0;
            var_478 = 3;
            let var_458_5: i64 = 3;
            let var_438_5: i64 = 0;
            let var_430_5: i64 = 8;
            let var_428_5: i64 = 0;
            let var_420_5: *const i8 = "start-time-usProcess start time …";
            let var_418_5: i64 = 0xd;
            let var_410_5: i64 = 0;
            let var_400_5: *const i8 = "Process start time (wall clock, …";
            let var_3f8_1: i64 = 0x4a;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_4: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_4: i128 = var_3e0;
            let var_440_4: i64 = var_3d0;
            var_478 = 3;
            let var_458_6: i64 = 3;
            let var_438_6: i64 = 0;
            let var_430_6: i64 = 8;
            let var_428_6: i64 = 0;
            let var_420_6: *const i8 = "start-time-cpu-usProcess start C…";
            let var_418_6: i64 = 0x11;
            let var_410_6: i64 = 0;
            let var_400_6: *const i8 = "Process start CPU time (wall clo…";
            let var_3f8_2: i64 = 0x4e;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            let var_460_5: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_5: i128 = var_3e0;
            let var_440_5: i64 = var_3d0;
            var_478 = 3;
            let var_458_7: i64 = 3;
            let var_438_7: i64 = 0;
            let var_430_7: i64 = 8;
            let var_428_7: i64 = 0;
            let var_420_7: *const i8 = "parent-cpu-time-usParent process…";
            let var_418_7: i64 = 0x12;
            let var_410_7: i64 = 0;
            let var_400_7: *const i8 = "Parent process CPU time (wall cl…";
            let var_3f8_3: i64 = 0x4f;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_6: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_6: i128 = var_3e0;
            let var_440_6: i64 = var_3d0;
            var_478 = 3;
            let var_458_8: i64 = 3;
            let var_438_8: i64 = 0;
            let var_430_8: i64 = 8;
            let var_428_8: i64 = 0;
            let var_420_8: *const i8 = "config-filePath to a file that c…";
            let var_418_8: i64 = 0xb;
            let var_410_8: i64 = 0;
            let var_400_8: *const i8 = "Path to a file that contains the…";
            let var_3f8_4: i64 = 0x46;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            let var_460_7: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_7: i128 = var_3e0;
            let var_440_7: i64 = var_3d0;
            var_478 = 3;
            let var_458_9: i64 = 3;
            let var_438_9: i64 = 0;
            let var_430_9: i64 = 8;
            let var_428_9: i64 = 0;
            let var_420_9: *const i8 = "metadataFileOpenSubleaf ENOTUNIQ…";
            let var_418_9: i64 = 8;
            let var_410_9: i64 = 0;
            let var_400_9: *const i8 = "Path to a file that contains met…";
            let var_3f8_5: i64 = 0x48;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_8: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_8: i128 = var_3e0;
            let var_440_8: i64 = var_3d0;
            var_478 = 3;
            let var_458_10: i64 = 3;
            let var_438_10: i64 = 0;
            let var_430_10: i64 = 8;
            let var_428_10: i64 = 0;
            let var_420_10: *const i8 = "no-apiOptional parameter which a…";
            let var_418_10: i64 = 6;
            let var_410_10: *const i8 = "config-filePath to a file that c…";
            let var_408_1: i64 = 0xb;
            let var_400_10: *const i8 = "Optional parameter which allows …";
            let var_3f8_6: i64 = 0x5a;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            let var_460_9: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_9: i128 = var_3e0;
            let var_440_9: i64 = var_3d0;
            var_478 = 3;
            let var_458_11: i64 = 3;
            let var_438_11: i64 = 0;
            let var_430_11: i64 = 8;
            let var_428_11: i64 = 0;
            let var_420_11: *const i8 = "log-path, flag: app_nameExtCpuid…";
            let var_418_11: i64 = 8;
            let var_410_11: i64 = 0;
            let var_400_11: *const i8 = "Path to a fifo or a file used fo…";
            let var_3f8_7: i64 = 0x44;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_10: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_10: i128 = var_3e0;
            let var_440_10: i64 = var_3d0;
            var_478 = 3;
            let var_458_12: i64 = 3;
            let var_438_12: i64 = 0;
            let var_430_12: i64 = 8;
            let var_428_12: i64 = 0;
            let var_420_12: *const i8 = "levelshow_levelshow_log_originmo…";
            let var_418_12: i64 = 5;
            let var_410_12: i64 = 0;
            let var_400_12: *const i8 = "Set the logger level.Set the log…";
            let var_3f8_8: i64 = 0x15;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            let var_460_11: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_11: i128 = var_3e0;
            let var_440_11: i64 = var_3d0;
            var_478 = 3;
            let var_458_13: i64 = 3;
            let var_438_13: i64 = 0;
            let var_430_13: i64 = 8;
            let var_428_13: i64 = 0;
            let var_420_13: *const i8 = "modulestruct LoggerConfig with 5…";
            let var_418_13: i64 = 6;
            let var_410_13: i64 = 0;
            let var_400_13: *const i8 = "Set the logger module filter.sho…";
            let var_3f8_9: i64 = 0x1d;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_12: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_12: i128 = var_3e0;
            let var_440_12: i64 = var_3d0;
            var_478 = 3;
            let var_458_14: i64 = 3;
            let var_438_14: i64 = 0;
            let var_430_14: i64 = 8;
            let var_428_14: i64 = 0;
            let var_420_14: *const i8 = "show-levelWhether or not to outp…";
            let var_418_14: i64 = 0xa;
            let var_410_14: i64 = 0;
            let var_400_14: *const i8 = "Whether or not to output the lev…";
            let var_3f8_10: i64 = 0x2f;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            let var_460_13: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_13: i128 = var_3e0;
            let var_440_13: i64 = var_3d0;
            var_478 = 3;
            let var_458_15: i64 = 3;
            let var_438_15: i64 = 0;
            let var_430_15: i64 = 8;
            let var_428_15: i64 = 0;
            let var_420_15: *const i8 = "show-log-originWhether or not to…";
            let var_418_15: i64 = 0xf;
            let var_410_15: i64 = 0;
            let var_400_15: *const i8 = "Whether or not to include the fi…";
            let var_3f8_11: i64 = 0x4c;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_14: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_14: i128 = var_3e0;
            let var_440_14: i64 = var_3d0;
            var_478 = 3;
            let var_458_16: i64 = 3;
            let var_438_16: i64 = 0;
            let var_430_16: i64 = 8;
            let var_428_16: i64 = 0;
            let var_420_16: *const i8 = "metrics-pathPath to a fifo or a …";
            let var_418_16: i64 = 0xc;
            let var_410_16: i64 = 0;
            let var_400_16: *const i8 = "Path to a fifo or a file used fo…";
            let var_3f8_12: i64 = 0x45;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            let var_460_15: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_15: i128 = var_3e0;
            let var_440_15: i64 = var_3d0;
            var_478 = 3;
            let var_458_17: i64 = 3;
            let var_438_17: i64 = 0;
            let var_430_17: i64 = 8;
            let var_428_17: i64 = 0;
            let var_420_17: *const i8 = "boot-timerWhether or not to load…";
            let var_418_17: i64 = 0xa;
            let var_410_17: i64 = 0;
            let var_400_17: *const i8 = "Whether or not to load boot time…";
            let var_3f8_13: i64 = 0x5e;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_16: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_16: i128 = var_3e0;
            let var_440_16: i64 = var_3d0;
            var_478 = 3;
            let var_458_18: i64 = 3;
            let var_438_18: i64 = 0;
            let var_430_18: i64 = 8;
            let var_428_18: i64 = 0;
            let var_420_18: *const i8 = "versionnetwork_interfacesimds_co…";
            let var_418_18: i64 = 7;
            let var_410_18: i64 = 0;
            let var_400_18: *const i8 = "Print the binary version number.…";
            let var_3f8_14: i64 = 0x20;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            let var_460_17: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_17: i128 = var_3e0;
            let var_440_17: i64 = var_3d0;
            var_478 = 3;
            let var_458_19: i64 = 3;
            let var_438_19: i64 = 0;
            let var_430_19: i64 = 8;
            let var_428_19: i64 = 0;
            let var_420_19: *const i8 = "snapshot-version";
            let var_418_19: i64 = 0x10;
            let var_410_19: i64 = 0;
            let var_400_19: *const i8 = "Print the supported data format …";
            let var_3f8_15: i64 = 0x28;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            let var_460_18: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_18: i128 = var_3e0;
            let var_440_18: i64 = var_3d0;
            var_478 = 3;
            let var_458_20: i64 = 3;
            let var_438_20: i64 = 0;
            let var_430_20: i64 = 8;
            let var_428_20: i64 = 0;
            let var_420_20: *const i8 = "describe-snapshotPrint the data …";
            let var_418_20: i64 = 0x11;
            let var_410_20: i64 = 0;
            let var_400_20: *const i8 = "Print the data format version of…";
            let var_3f8_16: i64 = 0x42;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_298, &var_3c8, &var_478);
            let var_460_19: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_19: i128 = var_3e0;
            let var_440_19: i64 = var_3d0;
            var_478 = 3;
            let var_458_21: i64 = 3;
            let var_438_21: i64 = 0;
            let var_430_21: i64 = 8;
            let var_428_21: i64 = 0;
            let var_420_21: *const i8 = "http-api-max-payload-sizeHttp AP…";
            let var_418_21: i64 = 0x19;
            let var_410_21: i64 = 0;
            let var_400_21: i64 = 0;
            let mut var_3f0_5: i16 = 0x100;
            let var_3ee_5: i8 = 0;
            let var_468: u64;
            utils::arg_parser::Argument::default_value::he023b124caa1f40a(&var_328, &var_478, 
                *var_268[8], var_468);
            let var_2b0_5: *const i8 = "Http API request payload max siz…";
            let var_2a8_5: i64 = 0x2c;
            memcpy(&var_478, &var_328, 0x90);
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_298, &var_478);
            let var_460_20: i64 = var_3d0;
            var_478 = var_3e0;
            let var_450_20: i128 = var_3e0;
            let var_440_20: i64 = var_3d0;
            var_478 = 3;
            let var_458_22: i64 = 3;
            let var_438_22: i64 = 0;
            let var_430_22: i64 = 8;
            let var_428_22: i64 = 0;
            let var_420_22: *const i8 = "mmds-size-limitenable-pciEnables…";
            let var_418_22: i64 = 0xf;
            let var_410_22: i64 = 0;
            let var_400_22: *const i8 = "Mmds data store limit, in bytes.…";
            let var_3f8_17: i64 = 0x20;
            var_3f0_5 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            var_478 = var_3e0;
            let var_440_21: i64 = var_3d0;
            var_478 = 3;
            let mut var_458_23: i64 = 3;
            let mut var_438_23: i32 = 0;
            let var_430_23: i64 = 8;
            let var_428_23: i64 = 0;
            let var_420_23: *const i8 = "enable-pciEnables PCIe support.F…";
            let var_418_23: i64 = 0xa;
            let var_410_23: i64 = 0;
            let var_400_23: *const i8 = "Enables PCIe support.Firecracker…";
            let var_3f8_18: i64 = 0x15;
            var_3f0_5 = 0;
            let mut var_358: ();
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_358, &var_3c8, &var_478);
            utils::arg_parser::ArgParser::parse_from_cmdline::h9e0c84309a12b615(&var_478, &var_358);
            let rax_26: i64 = var_478;
            
            if rax_26 != -0x7ffffffffffffffc
            {
                *arg1.byte_offset(0x30) = var_3e0;
                let zmm0_23: i128 = var_478;
                *arg1.byte_offset(0x20) = var_3d0;
                *arg1.byte_offset(0x10) = zmm0_23;
                *arg1 = 2;
                *arg1.byte_offset(8) = rax_26;
            }
            else if utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                "help_EVT-infNoneshimOs: vcpuT2CL…", 4) == 0
            {
                if utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                    "versionnetwork_interfacesimds_co…", 7) == 0
                {
                    if utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                        "snapshot-version", 0x10) == 0
                    {
                        let rax_30: *mut c_void =
                            utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                            "describe-snapshotPrint the data …", 0x11);
                        
                        if rax_30 == 0
                        {
                            let rax_33: *mut c_void =
                                utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                &var_358, "idvmm_versionMachineConfig/home/…", 2);
                            
                            if rax_33 == 0
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            utils::validators::validate_instance_id::hcd21babe44300cc2(&var_478, 
                                *rax_33.byte_offset(8), *rax_33.byte_offset(0x10));
                            core::result::Result$LT$T$C$E$GT$::expect::h5d8591333a73f7d6(&var_478);
                            let mut r12_1: *const *mut *mut [i8; 0x94] = &var_328;
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_328, rax_33);
                            std::sync::once_lock::OnceLock$LT$T$GT$::try_insert::h69345edf13b69164(
                                &var_478, &var_328);
                            let mut rbx_1: i64 = -0x8000000000000000;
                            
                            if *var_478[8] != -0x8000000000000000
                            {
                                var_3b8_1 = var_3d0;
                                var_3c8 = var_478;
                            }
                            else
                            {
                                var_3c8 = -0x8000000000000000;
                            }
                            
                            core::result::Result$LT$T$C$E$GT$::unwrap::hf28495ede029d5e8(&var_3c8);
                            let rax_34: *mut c_void =
                                utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                &var_358, "log-path, flag: app_nameExtCpuid…", 8);
                            let mut var_390: u64;
                            
                            if rax_34 != 0
                            {
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_478, *rax_34.byte_offset(8), *rax_34.byte_offset(0x10));
                                rbx_1 = var_478;
                                r12_1 = *var_478[8];
                                var_390 = var_468;
                            }
                            
                            let rax_36: *mut c_void =
                                utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                &var_358, "levelshow_levelshow_log_originmo…", 5);
                            let mut r13_1: i8 = 6;
                            
                            if rax_36 == 0
                            {
                                goto 'label_55b021;
                            }
                            
                            _$LT$vmm..logger..logging..LevelFilter$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h921333696ec799d7(&var_478, *rax_36.byte_offset(8), *rax_36.byte_offset(0x10));
                            let rcx_5: i64 = var_478;
                            let rax_37: i8 = *var_478[8];
                            var_328 = *var_478[9];
                            var_328 = var_468;
                            
                            if rcx_5 == -0x7fffffffffffffff
                            {
                                goto 'label_55b021;
                            }
                            
                            if -(rcx_5) != -0x8000000000000000
                            {
                                let rdx_40: *mut *mut [i8; 0x94] = var_328;
                                *arg1.byte_offset(0x18) = var_328;
                                *arg1.byte_offset(0x11) = rdx_40;
                                *arg1 = 4;
                                *arg1.byte_offset(8) = rcx_5;
                                arg1[4] = rax_37;
                                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1485ca768f6a6c3c(rbx_1, r12_1);
                            }
                            else
                            {
                                r13_1 = rax_37;
                                'label_55b021:
                                let var_479_1: i8 = r13_1;
                                let mut var_388_1: i64 = rbx_1;
                                let mut var_360_1: *mut c_void = rax_33;
                                rbx_1 = 2;
                                r13_1 = 2 -
                                    utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(
                                    &var_358, "show-levelWhether or not to outp…", 0xa);
                                rbx_1 = 2 -
                                    utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(
                                    &var_358, "show-log-originWhether or not to…", 0xf);
                                let rax_40: *mut c_void =
                                    utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                    &var_358, "modulestruct LoggerConfig with 5…", 6);
                                let mut rcx_6: i64 = -0x8000000000000000;
                                let mut var_128: i128;
                                
                                if rax_40 != 0
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_478, rax_40);
                                    rcx_6 = var_478;
                                    var_128 = var_478;
                                }
                                
                                var_458_23 = var_128;
                                var_478 = var_388_1;
                                *var_478[8] = r12_1;
                                let mut var_468_5: u64 = var_390;
                                let mut var_450_21: i128;
                                *var_450_21[0xa] = var_479_1;
                                *var_450_21[8] = r13_1;
                                *var_450_21[9] = rbx_1;
                                let var_460_26: i64 = rcx_6;
                                let rax_45: i64 =
                                    vmm::logger::logging::Logger::update::hd8ab21c64c0e5747(
                                    &vmm::logger::logging::LOGGER::hf7b002b101b876e4, &var_478);
                                
                                if rax_45 == 0
                                {
                                    let mut var_318: i128;
                                    let mut var_308: i64;
                                    
                                    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                                        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3
                                    {
                                        var_3c8 = &data_7a3fa8;
                                        var_3c0_2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                                        var_478 = &data_7a3f10;
                                        *var_478[8] = 1;
                                        var_458_23 = 0;
                                        var_468_5 = &var_3c8;
                                        let var_460_27: i64 = 1;
                                        let rax_47: i64 =
                                            log::__private_api::loc::h0b1bf3028c786bb7(
                                            &data_7a3fb8);
                                        var_328 = "firecrackerPath to unix domain s…";
                                        let var_320_3: i64 = 0xb;
                                        var_318 = "firecrackerPath to unix domain s…";
                                        *var_318[8] = 0xb;
                                        var_308 = rax_47;
                                        log::__private_api::log_impl::h05439a06b798919c(&var_478, 
                                            3, &var_328);
                                    }
                                    
                                    let mut rax_48: i8;
                                    let mut rdx_39: i32;
                                    rax_48 = vmm::signal_handler::register_signal_handlers::h8d2a27a71192403b();
                                    
                                    if (rax_48 & 1) == 0
                                    {
                                        let mut rax_50: *mut *mut [i8; 0x94];
                                        let mut rdx_41: *mut i8;
                                        rax_50 = firecracker::resize_fdtable::ha61461e97c9c9377();
                                        let mut var_378: *mut *mut [i8; 0x94] = rax_50;
                                        
                                        if rax_50 != 3
                                        {
                                            var_298 = rax_50;
                                            let var_290_2: *mut i8 = rdx_41;
                                            
                                            if rax_50 < 2
                                            {
                                                if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(&log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0)
                                                    > 3
                                                {
                                                    var_3c8 = &var_298;
                                                    var_3c0_2 = firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..ResizeFdTableError$GT$::fmt::h9119a7abbd9ad688;
                                                    var_478 = &data_7a3f20;
                                                    *var_478[8] = 1;
                                                    var_458_23 = 0;
                                                    var_468_5 = &var_3c8;
                                                    let var_460_28: i64 = 1;
                                                    let rax_52: i64 =
                                                        log::__private_api::loc::h0b1bf3028c786bb7(
                                                        &data_7a3fd0);
                                                    var_328 = "firecrackerPath to unix domain s…";
                                                    let var_320_4: i64 = 0xb;
                                                    var_318 = "firecrackerPath to unix domain s…";
                                                    *var_318[8] = 0xb;
                                                    var_308 = rax_52;
                                                    log::__private_api::log_impl::h05439a06b798919c(
                                                        &var_478, 4, &var_328);
                                                }
                                                
                                                core::ptr::drop_in_place$LT$firecracker..ResizeFdTableError$GT$::h1642bdd3e12b6ad9(&var_298);
                                                goto 'label_55b373;
                                            }
                                            
                                            *arg1 = 8;
                                            *arg1.byte_offset(8) = rax_50;
                                            *arg1.byte_offset(0x10) = rdx_41;
                                        }
                                        else
                                        {
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$firecracker..ResizeFdTableError$GT$$GT$::hac3548dabfd2b9fa(&var_378);
                                            'label_55b373:
                                            let mut var_1c0: i128;
                                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c0, var_360_1);
                                            let mut var_1b0: i128;
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&*var_1b0[8], "1.14.0-devFirecrackerMissing arg…", 0xa);
                                            let mut var_190: i128;
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_190, "FirecrackerMissing argument: api…", 0xb);
                                            let var_178_1: i8 = 0;
                                            let rax_53: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                "metrics-pathPath to a fifo or a …", 0xc);
                                            let mut var_208: i64;
                                            
                                            if rax_53 != 0
                                            {
                                                let mut var_48: ();
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_48, *rax_53.byte_offset(8), 
                                                    *rax_53.byte_offset(0x10));
                                                vmm::vmm_config::metrics::init_metrics::hddd84842699c0a5f(&var_208, &var_48);
                                            }
                                            
                                            if rax_53 != 0 && var_208 != -0x8000000000000000
                                            {
                                                let var_168_1: i128 = var_208;
                                                *arg1 = 6;
                                                let var_16c: i128;
                                                *arg1.byte_offset(4) = var_16c;
                                                arg1[5] = *var_168_1[0xc];
                                                let var_1f8: i64;
                                                *arg1.byte_offset(0x18) = var_1f8;
                                                let var_150: i32;
                                                arg1[8] = var_150;
                                                let var_14c: i128;
                                                *arg1.byte_offset(0x24) = var_14c;
                                                let var_13c: i128;
                                                *arg1.byte_offset(0x34) = var_13c;
                                                let var_12c: i32;
                                                arg1[0x11] = var_12c;
                                                core::ptr::drop_in_place$LT$vmm..vmm_config..instance_info..InstanceInfo$GT$::h8bafaefa3a8db683(&var_1c0);
                                            }
                                            else
                                            {
                                                firecracker::seccomp::SeccompConfig::from_args::he53bf44f0843d7e2(&var_478, 
                                                    utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, "no-seccompOptional parameter whi…", 
                                                        0xa), 
                                                    utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, "seccomp-filterOptional parameter…", 
                                                    0xe));
                                                let mut var_230: i128;
                                                let mut var_220: i128;
                                                let mut rbx_3: *mut i32;
                                                
                                                if var_478 != 0x15
                                                {
                                                    var_220 = var_468_5;
                                                    var_230 = var_478;
                                                    rbx_3 = arg1;
                                                    'label_55b5f6:
                                                    *var_468_5[4] = var_220;
                                                    var_478 = var_230;
                                                    let mut zmm0_29: i128 = var_458_23;
                                                    var_308 = zmm0_29;
                                                    var_3c8 = var_478;
                                                    let var_3a8_1: i128 = zmm0_29;
                                                    rbx_3[0xd] = *var_450_21[8];
                                                    zmm0_29 = var_3c8;
                                                    *rbx_3.byte_offset(0x24) = var_3a8_1;
                                                    *rbx_3.byte_offset(0x14) = var_468_5;
                                                    *rbx_3.byte_offset(4) = zmm0_29;
                                                    *rbx_3 = 7;
                                                    core::ptr::drop_in_place$LT$vmm..vmm_config..instance_info..InstanceInfo$GT$::h8bafaefa3a8db683(&var_1c0);
                                                }
                                                else
                                                {
                                                    let mut var_238: i64;
                                                    firecracker::seccomp::get_filters::hd13d8ec80e3e2eb0(&var_238, *var_478[4], *var_478[8]);
                                                    rbx_3 = arg1;
                                                    
                                                    if var_238 == 0
                                                    {
                                                        goto 'label_55b5f6;
                                                    }
                                                    
                                                    var_298 = var_238;
                                                    var_288_1 = var_230;
                                                    let var_278_1: i128 = var_220;
                                                    let rax_56: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "config-filePath to a file that c…", 0xb);
                                                    let mut r14_1: *mut *mut *mut [i8; 0x94] =
                                                        -0x8000000000000000;
                                                    let mut var_248: i128;
                                                    
                                                    if rax_56 != 0
                                                    {
                                                        std::fs::read_to_string::hda21ec86c0a6ebb0(
                                                            &var_478, rax_56);
                                                        let rax_57: i64 = var_478;
                                                        var_328 = var_478;
                                                        r14_1 = -0x8000000000000000;
                                                        
                                                        if rax_57 != -0x7fffffffffffffff
                                                        {
                                                            let mut var_f8: i64 = rax_57;
                                                            let var_f0_1: i128 = var_328;
                                                            core::result::Result$LT$T$C$E$GT$::expect::hee03fd7c598fd428(&var_478, &var_f8, 
                                                                "Unable to open or read from the …", 
                                                                0x32);
                                                            r14_1 = var_478;
                                                            var_248 = var_478;
                                                        }
                                                    }
                                                    
                                                    let rax_58: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "metadataFileOpenSubleaf ENOTUNIQ…", 8);
                                                    let mut rax_59: i64;
                                                    
                                                    if rax_58 != 0
                                                    {
                                                        std::fs::read_to_string::hda21ec86c0a6ebb0(
                                                            &var_478, rax_58);
                                                        rax_59 = var_478;
                                                        var_328 = var_478;
                                                    }
                                                    
                                                    if rax_58 != 0 && rax_59 != -0x7fffffffffffffff
                                                    {
                                                        let mut var_e0: i64 = rax_59;
                                                        let var_d8_1: i128 = var_328;
                                                        core::result::Result$LT$T$C$E$GT$::expect::hee03fd7c598fd428(&var_378, &var_e0, 
                                                            "Unable to open or read from the …", 
                                                            0x31);
                                                    }
                                                    else
                                                    {
                                                        var_378 = -0x8000000000000000;
                                                    }
                                                    
                                                    var_388_1 = utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                                                        "boot-timerWhether or not to load…", 0xa);
                                                    let rax_66: i8 = utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                                                        "enable-pciEnables PCIe support.F…", 0xa);
                                                    let mut r13_2: u64 = utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                                                        "no-apiOptional parameter which a…", 6);
                                                    let rax_68: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "http-api-max-payload-sizeHttp AP…", 0x19);
                                                    
                                                    if rax_68 == 0
                                                    {
                                                        core::option::unwrap_failed::h893f57cb7db71cb7();
                                                        /* no return */
                                                    }
                                                    
                                                    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *rax_68.byte_offset(8), 
                                                        *rax_68.byte_offset(0x10));
                                                    let rax_69: *mut i8 = core::result::Result$LT$T$C$E$GT$::expect::h7e2a11c0926c2669(&var_478, 
                                                        "'http-api-max-payload-size' para…", 0x45);
                                                    let rax_70: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "mmds-size-limitenable-pciEnables…", 0xf);
                                                    let mut r15_3: *mut i8 = rax_69;
                                                    
                                                    if rax_70 != 0
                                                    {
                                                        core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *rax_70.byte_offset(8), 
                                                            *rax_70.byte_offset(0x10));
                                                        r15_3 = core::result::Result$LT$T$C$E$GT$::expect::h7e2a11c0926c2669(&var_478, 
                                                            "'mmds-size-limit' parameter expe…", 
                                                            0x3b);
                                                    }
                                                    
                                                    let var_368: i64;
                                                    
                                                    if r13_2 == 0
                                                    {
                                                        let rax_74: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            &data_4310f8[0x28], 8);
                                                        let mut rax_75: i64;
                                                        
                                                        if rax_74 != 0
                                                        {
                                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_478, *rax_74.byte_offset(8), 
                                                                *rax_74.byte_offset(0x10));
                                                            rax_75 = var_478;
                                                            var_328 = var_478;
                                                        }
                                                        
                                                        if rax_74 == 0
                                                            || rax_75 == -0x8000000000000000
                                                        {
                                                            core::option::expect_failed::h3f620cfb8545dc61("Missing argument: api-sock/run/f…");
                                                            /* no return */
                                                        }
                                                        
                                                        let mut var_110: i64 = rax_75;
                                                        let var_108_1: i128 = var_328;
                                                        let rax_76: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            "start-time-usProcess start time …", 
                                                            0xd);
                                                        let mut var_390_1: i64;
                                                        
                                                        if rax_76 == 0
                                                        {
                                                            var_390_1 = 0;
                                                        }
                                                        else
                                                        {
                                                            r13_2 = &var_478;
                                                            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *rax_76.byte_offset(8), 
                                                                *rax_76.byte_offset(0x10));
                                                            var_360_1 = core::result::Result$LT$T$C$E$GT$::expect::he6dd91a8ad03e809(&var_478, 
                                                                "'start-time-us' parameter expect…", 
                                                                0x37);
                                                            var_390_1 = 1;
                                                        }
                                                        
                                                        let rax_80: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            "start-time-cpu-usProcess start C…", 
                                                            0x11);
                                                        let mut rbx_4: i64;
                                                        
                                                        if rax_80 == 0
                                                        {
                                                            rbx_4 = 0;
                                                        }
                                                        else
                                                        {
                                                            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *rax_80.byte_offset(8), 
                                                                *rax_80.byte_offset(0x10));
                                                            r13_2 = core::result::Result$LT$T$C$E$GT$::expect::he6dd91a8ad03e809(&var_478, 
                                                                "'start-time-cpu-us' parameter ex…", 
                                                                0x3b);
                                                            rbx_4 = 1;
                                                        }
                                                        
                                                        let mut rax_82: *mut c_void = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            "parent-cpu-time-usParent process…", 
                                                            0x12);
                                                        let mut rcx_12: i64;
                                                        
                                                        if rax_82 == 0
                                                        {
                                                            rcx_12 = 0;
                                                        }
                                                        else
                                                        {
                                                            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *rax_82.byte_offset(8), 
                                                                *rax_82.byte_offset(0x10));
                                                            rax_82 = core::result::Result$LT$T$C$E$GT$::expect::he6dd91a8ad03e809(&var_478, 
                                                                "'parent-cpu-time-us' parameter e…", 
                                                                0x3c);
                                                            rcx_12 = 1;
                                                        }
                                                        
                                                        let mut var_1f0: i64 = var_390_1;
                                                        let var_1e8_1: *mut c_void = var_360_1;
                                                        let var_1e0_1: i64 = rbx_4;
                                                        let var_1d8_1: u64 = r13_2;
                                                        let var_1d0_1: i64 = rcx_12;
                                                        let var_1c8_1: *mut c_void = rax_82;
                                                        var_478 = r14_1;
                                                        var_478 = var_248;
                                                        let mut r10_2: *mut i8;
                                                        
                                                        if var_378 == -0x8000000000000000
                                                        {
                                                            r10_2 = nullptr;
                                                        }
                                                        else
                                                        {
                                                            r10_2 = rdx_41;
                                                        }
                                                        
                                                        let mut var_c8: i8;
                                                        firecracker::api_server_adapter::run_with_api::h95de3867043d5470(&var_c8, &var_298, &var_478, &var_110, 
                                                            &var_1c0, &var_1f0, var_388_1, rax_66, 
                                                            rax_69, r15_3, r10_2, var_368);
                                                        let mut rax_85: i32 = 0xb;
                                                        
                                                        if var_c8 != 0x20
                                                        {
                                                            let var_a8: i128;
                                                            *var_458_23[4] = var_a8;
                                                            let var_b8: i128;
                                                            *var_468_5[4] = var_b8;
                                                            var_478 = var_c8;
                                                            arg1[0x11] = var_438_23;
                                                            let var_98: i128;
                                                            *arg1.byte_offset(0x34) = var_98;
                                                            *arg1.byte_offset(0x24) = var_458_23;
                                                            *arg1.byte_offset(0x14) = var_468_5;
                                                            *arg1.byte_offset(4) = var_478;
                                                            rax_85 = 9;
                                                        }
                                                        
                                                        *arg1 = rax_85;
                                                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf8b36c6afb1cf6ed(&var_378);
                                                        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..sync..Arc$LT$alloc..vec..Vec$LT$u64$GT$$GT$$GT$$GT$::h19ec4151a8c22d65(&var_298);
                                                    }
                                                    else
                                                    {
                                                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h51daf4a5599e18c5(&var_478, &var_298);
                                                        core::iter::traits::iterator::Iterator::collect::h8f1bd563443c2c3c(&var_328, &var_478);
                                                        var_3c8 = r14_1;
                                                        var_3c0_2 = var_248;
                                                        let var_180: i128;
                                                        var_438_23 = var_180;
                                                        var_450_21 = var_190;
                                                        let var_1a0: i128;
                                                        var_458_23 = var_1a0;
                                                        var_468_5 = var_1b0;
                                                        var_478 = var_1c0;
                                                        let mut r10_1: *mut i8;
                                                        
                                                        if var_378 == -0x8000000000000000
                                                        {
                                                            r10_1 = nullptr;
                                                        }
                                                        else
                                                        {
                                                            r10_1 = rdx_41;
                                                        }
                                                        
                                                        let mut var_88: i8;
                                                        firecracker::run_without_api::h14833a82da343b1a(&var_88, &var_328, &var_3c8, &var_478, 
                                                            var_388_1, rax_66, r15_3, r10_1, 
                                                            var_368);
                                                        let mut rax_78: i32 = 0xb;
                                                        
                                                        if var_88 != 0x1d
                                                        {
                                                            let var_68: i128;
                                                            *var_458_23[4] = var_68;
                                                            let var_78: i128;
                                                            *var_468_5[4] = var_78;
                                                            var_478 = var_88;
                                                            rbx_3[0x11] = var_438_23;
                                                            let var_58: i128;
                                                            *rbx_3.byte_offset(0x34) = var_58;
                                                            *rbx_3.byte_offset(0x24) = var_458_23;
                                                            *rbx_3.byte_offset(0x14) = var_468_5;
                                                            *rbx_3.byte_offset(4) = var_478;
                                                            rax_78 = 0xa;
                                                        }
                                                        
                                                        *rbx_3 = rax_78;
                                                        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..sync..Arc$LT$alloc..vec..Vec$LT$u64$GT$$GT$$GT$$GT$::h19ec4151a8c22d65(&var_328);
                                                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf8b36c6afb1cf6ed(&var_378);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        *arg1 = 1;
                                        arg1[1] = rdx_39;
                                    }
                                }
                                else
                                {
                                    *arg1 = 5;
                                    *arg1.byte_offset(8) = rax_45;
                                }
                            }
                        }
                        else
                        {
                            *rax_30.byte_offset(0x10);
                            firecracker::print_snapshot_data_format::hddac348824e0a41b(&var_478, 
                                *rax_30.byte_offset(8));
                            let rax_31: i64 = var_478;
                            
                            if rax_31 != 7
                            {
                                *arg1.byte_offset(0x30) = var_3e0;
                                let zmm0_25: i128 = var_478;
                                *arg1.byte_offset(0x20) = var_3d0;
                                *arg1.byte_offset(0x10) = zmm0_25;
                                *arg1 = 3;
                                *arg1.byte_offset(8) = rax_31;
                            }
                            else
                            {
                                *arg1 = 0xb;
                            }
                        }
                    }
                    else
                    {
                        let var_318_1: i128 = data_4393f8;
                        var_328 = *data_4393e8;
                        let var_308_1: i64 = 0;
                        var_3c8 = &var_328;
                        let var_3c0_4: fn(arg1: i64, arg2: *mut i64) -> u64 = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::ha9f34b03bf53131a;
                        var_478 = &data_7a3ef0;
                        *var_478[8] = 2;
                        let var_458_27: i64 = 0;
                        let var_468_4: *mut *const *mut *mut [i8; 0x94] = &var_3c8;
                        let var_460_25: i64 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_478);
                        core::ptr::drop_in_place$LT$semver..Version$GT$::h899d2d10dc06f6c7(
                            &var_328);
                        *arg1 = 0xb;
                    }
                }
                else
                {
                    var_328 = &data_7a3fa8;
                    let var_320_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    var_478 = &data_7a3eb0;
                    *var_478[8] = 2;
                    let var_458_26: i64 = 0;
                    let var_468_3: *const *mut *mut [i8; 0x94] = &var_328;
                    let var_460_24: i64 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_478);
                    *arg1 = 0xb;
                }
            }
            else
            {
                var_328 = &data_7a3fa8;
                let var_320_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                var_478 = &data_7a3eb0;
                *var_478[8] = 2;
                let var_458_24: i64 = 0;
                let var_468_1: *const *mut *mut [i8; 0x94] = &var_328;
                let var_460_22: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_478);
                utils::arg_parser::ArgParser::formatted_help::h2dfefc7734439043(&var_328, &var_358);
                var_3c8 = &var_328;
                let var_3c0_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_478 = &data_7a3ed0;
                *var_478[8] = 2;
                let var_458_25: i64 = 0;
                let var_468_2: *mut *const *mut *mut [i8; 0x94] = &var_3c8;
                let var_460_23: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_478);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_328);
                *arg1 = 0xb;
            }
            
            core::ptr::drop_in_place$LT$utils..arg_parser..ArgParser$GT$::h4867b8e4a23b8fa6(
                &var_358);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(
                &var_268);
        }
    }
    
    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
    /* no return */
}
