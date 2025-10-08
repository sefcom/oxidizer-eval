
  int64_t firecracker::main_exec::h0b30eb7959f3f695(int32_t* arg1)

{
    char result = vmm::logger::logging::Logger::init::hde53f9574ccc2810(
        &vmm::logger::logging::LOGGER::hf7b002b101b876e4);
    
    if (result)
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
    char const (** const var_328)[0x94];
    int64_t rax_1;
    uint64_t rdx_1;
    rax_1 =
        core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(0xc800, &var_328, 0x14);
    int128_t var_478;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_478, rax_1, rdx_1);
    int128_t var_268 = var_478;
    char const (** const* var_3c8)[0x94] = nullptr;
    int64_t var_3c0_1 = 8;
    int64_t var_3a0_1 = 0;
    int128_t var_3b8_1 = {0};
    var_478 = 3;
    int64_t var_458_1 = 3;
    int64_t var_438_1 = 0;
    int64_t var_430_1 = 8;
    int64_t var_428_1 = 0;
    char const* const var_420_1 = &data_4310f8[0x28];
    int64_t var_418_1 = 8;
    int64_t var_410_1 = 0;
    int64_t var_400_1 = 0;
    int16_t var_3f0_1 = 0x100;
    char var_3ee_1 = 0;
    utils::arg_parser::Argument::default_value::he023b124caa1f40a(&var_328, &var_478, 
        "/run/firecracker.socketanonymous…", 0x17);
    char const* const var_2b0_1 = "Path to unix domain socket used …";
    int64_t var_2a8_1 = 0x2b;
    memcpy(&var_478, &var_328, 0x90);
    char const (** var_298)[0x94];
    utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_298, &var_3c8, &var_478);
    var_478 = 3;
    int64_t var_458_2 = 3;
    int64_t var_438_2 = 0;
    int64_t var_430_2 = 8;
    int64_t var_428_2 = 0;
    char const* const var_420_2 = "idvmm_versionMachineConfig/home/…";
    int64_t var_418_2 = 2;
    int64_t var_410_2 = 0;
    int64_t var_400_2 = 0;
    int16_t var_3f0_2 = 0x100;
    char var_3ee_2 = 0;
    utils::arg_parser::Argument::default_value::he023b124caa1f40a(&var_328, &var_478, 
        "anonymous-instanceInvalid instan…", 0x12);
    char const* const var_2b0_2 = "MicroVM unique identifier.seccom…";
    int64_t var_2a8_2 = 0x1a;
    memcpy(&var_478, &var_328, 0x90);
    utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_298, &var_478);
    int64_t var_3d0;
    int64_t var_460_1 = var_3d0;
    int128_t var_3e0;
    var_478 = var_3e0;
    int128_t var_450_1 = var_3e0;
    int64_t var_440_1 = var_3d0;
    var_478 = 3;
    int64_t var_458_3 = 3;
    int64_t var_438_3 = 0;
    int64_t var_430_3 = 8;
    int64_t var_428_3 = 0;
    char const* const var_420_3 = "seccomp-filterOptional parameter…";
    int64_t var_418_3 = 0xe;
    int64_t var_410_3 = 0;
    int64_t var_400_3 = 0;
    int16_t var_3f0_3 = 0x100;
    char var_3ee_3 = 0;
    uint64_t rax_4 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10, 0);
    
    if (rax_4)
    {
        *rax_4 = "no-seccompOptional parameter whi…";
        *(rax_4 + 8) = 0xa;
        var_298 = 1;
        uint64_t var_290_1 = rax_4;
        int64_t var_288_1 = 1;
        utils::arg_parser::Argument::forbids::h0672c6c5882fec3f(&var_328, &var_478, &var_298);
        char const* const var_2b0_3 = "Optional parameter which allows …";
        int64_t var_2a8_3 = 0x63;
        memcpy(&var_478, &var_328, 0x90);
        utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_298, &var_3c8, &var_478);
        int64_t var_460_2 = var_3d0;
        var_478 = var_3e0;
        int128_t var_450_2 = var_3e0;
        int64_t var_440_2 = var_3d0;
        var_478 = 3;
        int64_t var_458_4 = 3;
        int64_t var_438_4 = 0;
        int64_t var_430_4 = 8;
        int64_t var_428_4 = 0;
        char const* const var_420_4 = "no-seccompOptional parameter whi…";
        int64_t var_418_4 = 0xa;
        int64_t var_410_4 = 0;
        int64_t var_400_4 = 0;
        int16_t var_3f0_4 = 0;
        char var_3ee_4 = 0;
        uint64_t rax_6 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10, 0);
        
        if (rax_6)
        {
            *rax_6 = "seccomp-filterOptional parameter…";
            *(rax_6 + 8) = 0xe;
            var_3c8 = 1;
            uint64_t var_3c0_2 = rax_6;
            var_3b8_1 = 1;
            utils::arg_parser::Argument::forbids::h0672c6c5882fec3f(&var_328, &var_478, &var_3c8);
            char const* const var_2b0_4 = "Optional parameter which allows …";
            int64_t var_2a8_4 = 0x68;
            memcpy(&var_478, &var_328, 0x90);
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_298, &var_478);
            int64_t var_460_3 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_3 = var_3e0;
            int64_t var_440_3 = var_3d0;
            var_478 = 3;
            int64_t var_458_5 = 3;
            int64_t var_438_5 = 0;
            int64_t var_430_5 = 8;
            int64_t var_428_5 = 0;
            char const* const var_420_5 = "start-time-usProcess start time …";
            int64_t var_418_5 = 0xd;
            int64_t var_410_5 = 0;
            char const* const var_400_5 = "Process start time (wall clock, …";
            int64_t var_3f8_1 = 0x4a;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_4 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_4 = var_3e0;
            int64_t var_440_4 = var_3d0;
            var_478 = 3;
            int64_t var_458_6 = 3;
            int64_t var_438_6 = 0;
            int64_t var_430_6 = 8;
            int64_t var_428_6 = 0;
            char const* const var_420_6 = "start-time-cpu-usProcess start C…";
            int64_t var_418_6 = 0x11;
            int64_t var_410_6 = 0;
            char const* const var_400_6 = "Process start CPU time (wall clo…";
            int64_t var_3f8_2 = 0x4e;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            int64_t var_460_5 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_5 = var_3e0;
            int64_t var_440_5 = var_3d0;
            var_478 = 3;
            int64_t var_458_7 = 3;
            int64_t var_438_7 = 0;
            int64_t var_430_7 = 8;
            int64_t var_428_7 = 0;
            char const* const var_420_7 = "parent-cpu-time-usParent process…";
            int64_t var_418_7 = 0x12;
            int64_t var_410_7 = 0;
            char const* const var_400_7 = "Parent process CPU time (wall cl…";
            int64_t var_3f8_3 = 0x4f;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_6 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_6 = var_3e0;
            int64_t var_440_6 = var_3d0;
            var_478 = 3;
            int64_t var_458_8 = 3;
            int64_t var_438_8 = 0;
            int64_t var_430_8 = 8;
            int64_t var_428_8 = 0;
            char const* const var_420_8 = "config-filePath to a file that c…";
            int64_t var_418_8 = 0xb;
            int64_t var_410_8 = 0;
            char const* const var_400_8 = "Path to a file that contains the…";
            int64_t var_3f8_4 = 0x46;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            int64_t var_460_7 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_7 = var_3e0;
            int64_t var_440_7 = var_3d0;
            var_478 = 3;
            int64_t var_458_9 = 3;
            int64_t var_438_9 = 0;
            int64_t var_430_9 = 8;
            int64_t var_428_9 = 0;
            char const* const var_420_9 = "metadataFileOpenSubleaf ENOTUNIQ…";
            int64_t var_418_9 = 8;
            int64_t var_410_9 = 0;
            char const* const var_400_9 = "Path to a file that contains met…";
            int64_t var_3f8_5 = 0x48;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_8 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_8 = var_3e0;
            int64_t var_440_8 = var_3d0;
            var_478 = 3;
            int64_t var_458_10 = 3;
            int64_t var_438_10 = 0;
            int64_t var_430_10 = 8;
            int64_t var_428_10 = 0;
            char const* const var_420_10 = "no-apiOptional parameter which a…";
            int64_t var_418_10 = 6;
            char const* const var_410_10 = "config-filePath to a file that c…";
            int64_t var_408_1 = 0xb;
            char const* const var_400_10 = "Optional parameter which allows …";
            int64_t var_3f8_6 = 0x5a;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            int64_t var_460_9 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_9 = var_3e0;
            int64_t var_440_9 = var_3d0;
            var_478 = 3;
            int64_t var_458_11 = 3;
            int64_t var_438_11 = 0;
            int64_t var_430_11 = 8;
            int64_t var_428_11 = 0;
            char const* const var_420_11 = "log-path, flag: app_nameExtCpuid…";
            int64_t var_418_11 = 8;
            int64_t var_410_11 = 0;
            char const* const var_400_11 = "Path to a fifo or a file used fo…";
            int64_t var_3f8_7 = 0x44;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_10 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_10 = var_3e0;
            int64_t var_440_10 = var_3d0;
            var_478 = 3;
            int64_t var_458_12 = 3;
            int64_t var_438_12 = 0;
            int64_t var_430_12 = 8;
            int64_t var_428_12 = 0;
            char const* const var_420_12 = "levelshow_levelshow_log_originmo…";
            int64_t var_418_12 = 5;
            int64_t var_410_12 = 0;
            char const* const var_400_12 = "Set the logger level.Set the log…";
            int64_t var_3f8_8 = 0x15;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            int64_t var_460_11 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_11 = var_3e0;
            int64_t var_440_11 = var_3d0;
            var_478 = 3;
            int64_t var_458_13 = 3;
            int64_t var_438_13 = 0;
            int64_t var_430_13 = 8;
            int64_t var_428_13 = 0;
            char const* const var_420_13 = "modulestruct LoggerConfig with 5…";
            int64_t var_418_13 = 6;
            int64_t var_410_13 = 0;
            char const* const var_400_13 = "Set the logger module filter.sho…";
            int64_t var_3f8_9 = 0x1d;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_12 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_12 = var_3e0;
            int64_t var_440_12 = var_3d0;
            var_478 = 3;
            int64_t var_458_14 = 3;
            int64_t var_438_14 = 0;
            int64_t var_430_14 = 8;
            int64_t var_428_14 = 0;
            char const* const var_420_14 = "show-levelWhether or not to outp…";
            int64_t var_418_14 = 0xa;
            int64_t var_410_14 = 0;
            char const* const var_400_14 = "Whether or not to output the lev…";
            int64_t var_3f8_10 = 0x2f;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            int64_t var_460_13 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_13 = var_3e0;
            int64_t var_440_13 = var_3d0;
            var_478 = 3;
            int64_t var_458_15 = 3;
            int64_t var_438_15 = 0;
            int64_t var_430_15 = 8;
            int64_t var_428_15 = 0;
            char const* const var_420_15 = "show-log-originWhether or not to…";
            int64_t var_418_15 = 0xf;
            int64_t var_410_15 = 0;
            char const* const var_400_15 = "Whether or not to include the fi…";
            int64_t var_3f8_11 = 0x4c;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_14 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_14 = var_3e0;
            int64_t var_440_14 = var_3d0;
            var_478 = 3;
            int64_t var_458_16 = 3;
            int64_t var_438_16 = 0;
            int64_t var_430_16 = 8;
            int64_t var_428_16 = 0;
            char const* const var_420_16 = "metrics-pathPath to a fifo or a …";
            int64_t var_418_16 = 0xc;
            int64_t var_410_16 = 0;
            char const* const var_400_16 = "Path to a fifo or a file used fo…";
            int64_t var_3f8_12 = 0x45;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            int64_t var_460_15 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_15 = var_3e0;
            int64_t var_440_15 = var_3d0;
            var_478 = 3;
            int64_t var_458_17 = 3;
            int64_t var_438_17 = 0;
            int64_t var_430_17 = 8;
            int64_t var_428_17 = 0;
            char const* const var_420_17 = "boot-timerWhether or not to load…";
            int64_t var_418_17 = 0xa;
            int64_t var_410_17 = 0;
            char const* const var_400_17 = "Whether or not to load boot time…";
            int64_t var_3f8_13 = 0x5e;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_16 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_16 = var_3e0;
            int64_t var_440_16 = var_3d0;
            var_478 = 3;
            int64_t var_458_18 = 3;
            int64_t var_438_18 = 0;
            int64_t var_430_18 = 8;
            int64_t var_428_18 = 0;
            char const* const var_420_18 = "versionnetwork_interfacesimds_co…";
            int64_t var_418_18 = 7;
            int64_t var_410_18 = 0;
            char const* const var_400_18 = "Print the binary version number.…";
            int64_t var_3f8_14 = 0x20;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_3c8, &var_478);
            int64_t var_460_17 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_17 = var_3e0;
            int64_t var_440_17 = var_3d0;
            var_478 = 3;
            int64_t var_458_19 = 3;
            int64_t var_438_19 = 0;
            int64_t var_430_19 = 8;
            int64_t var_428_19 = 0;
            char const* const var_420_19 = "snapshot-version";
            int64_t var_418_19 = 0x10;
            int64_t var_410_19 = 0;
            char const* const var_400_19 = "Print the supported data format …";
            int64_t var_3f8_15 = 0x28;
            var_3f0_4 = 0;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            int64_t var_460_18 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_18 = var_3e0;
            int64_t var_440_18 = var_3d0;
            var_478 = 3;
            int64_t var_458_20 = 3;
            int64_t var_438_20 = 0;
            int64_t var_430_20 = 8;
            int64_t var_428_20 = 0;
            char const* const var_420_20 = "describe-snapshotPrint the data …";
            int64_t var_418_20 = 0x11;
            int64_t var_410_20 = 0;
            char const* const var_400_20 = "Print the data format version of…";
            int64_t var_3f8_16 = 0x42;
            var_3f0_4 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_298, &var_3c8, &var_478);
            int64_t var_460_19 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_19 = var_3e0;
            int64_t var_440_19 = var_3d0;
            var_478 = 3;
            int64_t var_458_21 = 3;
            int64_t var_438_21 = 0;
            int64_t var_430_21 = 8;
            int64_t var_428_21 = 0;
            char const* const var_420_21 = "http-api-max-payload-sizeHttp AP…";
            int64_t var_418_21 = 0x19;
            int64_t var_410_21 = 0;
            int64_t var_400_21 = 0;
            int16_t var_3f0_5 = 0x100;
            char var_3ee_5 = 0;
            uint64_t var_468;
            utils::arg_parser::Argument::default_value::he023b124caa1f40a(&var_328, &var_478, 
                *var_268[8], var_468);
            char const* const var_2b0_5 = "Http API request payload max siz…";
            int64_t var_2a8_5 = 0x2c;
            memcpy(&var_478, &var_328, 0x90);
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_328, &var_298, &var_478);
            int64_t var_460_20 = var_3d0;
            var_478 = var_3e0;
            int128_t var_450_20 = var_3e0;
            int64_t var_440_20 = var_3d0;
            var_478 = 3;
            int64_t var_458_22 = 3;
            int64_t var_438_22 = 0;
            int64_t var_430_22 = 8;
            int64_t var_428_22 = 0;
            char const* const var_420_22 = "mmds-size-limitenable-pciEnables…";
            int64_t var_418_22 = 0xf;
            int64_t var_410_22 = 0;
            char const* const var_400_22 = "Mmds data store limit, in bytes.…";
            int64_t var_3f8_17 = 0x20;
            var_3f0_5 = 0x100;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_3c8, &var_328, &var_478);
            var_478 = var_3e0;
            int64_t var_440_21 = var_3d0;
            var_478 = 3;
            int64_t var_458_23 = 3;
            int32_t var_438_23 = 0;
            int64_t var_430_23 = 8;
            int64_t var_428_23 = 0;
            char const* const var_420_23 = "enable-pciEnables PCIe support.F…";
            int64_t var_418_23 = 0xa;
            int64_t var_410_23 = 0;
            char const* const var_400_23 = "Enables PCIe support.Firecracker…";
            int64_t var_3f8_18 = 0x15;
            var_3f0_5 = 0;
            void var_358;
            utils::arg_parser::ArgParser::arg::hea156377e60f3f8c(&var_358, &var_3c8, &var_478);
            utils::arg_parser::ArgParser::parse_from_cmdline::h9e0c84309a12b615(&var_478, &var_358);
            int64_t rax_26 = var_478;
            
            if (rax_26 != -0x7ffffffffffffffc)
            {
                *(arg1 + 0x30) = var_3e0;
                int128_t zmm0_23 = var_478;
                *(arg1 + 0x20) = var_3d0;
                *(arg1 + 0x10) = zmm0_23;
                *arg1 = 2;
                *(arg1 + 8) = rax_26;
            }
            else if (!utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                "help_EVT-infNoneshimOs: vcpuT2CL…", 4))
            {
                if (!utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                    "versionnetwork_interfacesimds_co…", 7))
                {
                    if (!utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                        "snapshot-version", 0x10))
                    {
                        void* rax_30 =
                            utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                            "describe-snapshotPrint the data …", 0x11);
                        
                        if (!rax_30)
                        {
                            void* rax_33 =
                                utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                &var_358, "idvmm_versionMachineConfig/home/…", 2);
                            
                            if (!rax_33)
                            {
                                core::option::unwrap_failed::h893f57cb7db71cb7();
                                /* no return */
                            }
                            
                            utils::validators::validate_instance_id::hcd21babe44300cc2(&var_478, 
                                *(rax_33 + 8), *(rax_33 + 0x10));
                            core::result::Result$LT$T$C$E$GT$::expect::h5d8591333a73f7d6(&var_478);
                            char const (** const* r12_1)[0x94] = &var_328;
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_328, rax_33);
                            std::sync::once_lock::OnceLock$LT$T$GT$::try_insert::h69345edf13b69164(
                                &var_478, &var_328);
                            int64_t rbx_1 = -0x8000000000000000;
                            
                            if (*var_478[8] != -0x8000000000000000)
                            {
                                var_3b8_1 = var_3d0;
                                var_3c8 = var_478;
                            }
                            else
                                var_3c8 = -0x8000000000000000;
                            
                            core::result::Result$LT$T$C$E$GT$::unwrap::hf28495ede029d5e8(&var_3c8);
                            void* rax_34 =
                                utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                &var_358, "log-path, flag: app_nameExtCpuid…", 8);
                            uint64_t var_390;
                            
                            if (rax_34)
                            {
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_478, *(rax_34 + 8), *(rax_34 + 0x10));
                                rbx_1 = var_478;
                                r12_1 = *var_478[8];
                                var_390 = var_468;
                            }
                            
                            void* rax_36 =
                                utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                &var_358, "levelshow_levelshow_log_originmo…", 5);
                            char r13_1 = 6;
                            
                            if (!rax_36)
                                goto label_55b021;
                            
                            _$LT$vmm..logger..logging..LevelFilter$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h921333696ec799d7(&var_478, *(rax_36 + 8), *(rax_36 + 0x10));
                            int64_t rcx_5 = var_478;
                            char rax_37 = *var_478[8];
                            var_328 = *var_478[9];
                            var_328 = var_468;
                            
                            if (rcx_5 == -0x7fffffffffffffff)
                                goto label_55b021;
                            
                            if (-(rcx_5) != -0x8000000000000000)
                            {
                                char const (** const rdx_40)[0x94] = var_328;
                                *(arg1 + 0x18) = var_328;
                                *(arg1 + 0x11) = rdx_40;
                                *arg1 = 4;
                                *(arg1 + 8) = rcx_5;
                                arg1[4] = rax_37;
                                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1485ca768f6a6c3c(rbx_1, r12_1);
                            }
                            else
                            {
                                r13_1 = rax_37;
                                label_55b021:
                                char var_479_1 = r13_1;
                                int64_t var_388_1 = rbx_1;
                                void* var_360_1 = rax_33;
                                rbx_1 = 2;
                                r13_1 = 2 -
                                    utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(
                                    &var_358, "show-levelWhether or not to outp…", 0xa);
                                rbx_1 = 2 -
                                    utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(
                                    &var_358, "show-log-originWhether or not to…", 0xf);
                                void* rax_40 =
                                    utils::arg_parser::Arguments::single_value::hfa922a008317d735(
                                    &var_358, "modulestruct LoggerConfig with 5…", 6);
                                int64_t rcx_6 = -0x8000000000000000;
                                int128_t var_128;
                                
                                if (rax_40)
                                {
                                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_478, rax_40);
                                    rcx_6 = var_478;
                                    var_128 = var_478;
                                }
                                
                                var_458_23 = var_128;
                                var_478 = var_388_1;
                                *var_478[8] = r12_1;
                                uint64_t var_468_5 = var_390;
                                int128_t var_450_21;
                                *var_450_21[0xa] = var_479_1;
                                *var_450_21[8] = r13_1;
                                *var_450_21[9] = rbx_1;
                                int64_t var_460_26 = rcx_6;
                                int64_t rax_45 =
                                    vmm::logger::logging::Logger::update::hd8ab21c64c0e5747(
                                    &vmm::logger::logging::LOGGER::hf7b002b101b876e4, &var_478);
                                
                                if (!rax_45)
                                {
                                    int128_t var_318;
                                    int64_t var_308;
                                    
                                    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                                        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3)
                                    {
                                        var_3c8 = &data_7a3fa8;
                                        var_3c0_2 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                                        var_478 = &data_7a3f10;
                                        *var_478[8] = 1;
                                        var_458_23 = 0;
                                        var_468_5 = &var_3c8;
                                        int64_t var_460_27 = 1;
                                        int64_t rax_47 = log::__private_api::loc::h0b1bf3028c786bb7(
                                            &data_7a3fb8);
                                        var_328 = "firecrackerPath to unix domain s…";
                                        int64_t var_320_3 = 0xb;
                                        var_318 = "firecrackerPath to unix domain s…";
                                        *var_318[8] = 0xb;
                                        var_308 = rax_47;
                                        log::__private_api::log_impl::h05439a06b798919c(&var_478, 
                                            3, &var_328);
                                    }
                                    
                                    char rax_48;
                                    int32_t rdx_39;
                                    rax_48 = vmm::signal_handler::register_signal_handlers::h8d2a27a71192403b();
                                    
                                    if (!(rax_48 & 1))
                                    {
                                        char const (** rax_50)[0x94];
                                        char* rdx_41;
                                        rax_50 = firecracker::resize_fdtable::ha61461e97c9c9377();
                                        char const (** var_378)[0x94] = rax_50;
                                        
                                        if (rax_50 != 3)
                                        {
                                            var_298 = rax_50;
                                            char* var_290_2 = rdx_41;
                                            
                                            if (rax_50 < 2)
                                            {
                                                if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(&log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 
                                                    0) > 3)
                                                {
                                                    var_3c8 = &var_298;
                                                    var_3c0_2 = firecracker::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$firecracker..ResizeFdTableError$GT$::fmt::h9119a7abbd9ad688;
                                                    var_478 = &data_7a3f20;
                                                    *var_478[8] = 1;
                                                    var_458_23 = 0;
                                                    var_468_5 = &var_3c8;
                                                    int64_t var_460_28 = 1;
                                                    int64_t rax_52 =
                                                        log::__private_api::loc::h0b1bf3028c786bb7(
                                                        &data_7a3fd0);
                                                    var_328 = "firecrackerPath to unix domain s…";
                                                    int64_t var_320_4 = 0xb;
                                                    var_318 = "firecrackerPath to unix domain s…";
                                                    *var_318[8] = 0xb;
                                                    var_308 = rax_52;
                                                    log::__private_api::log_impl::h05439a06b798919c(
                                                        &var_478, 4, &var_328);
                                                }
                                                
                                                core::ptr::drop_in_place$LT$firecracker..ResizeFdTableError$GT$::h1642bdd3e12b6ad9(&var_298);
                                                goto label_55b373;
                                            }
                                            
                                            *arg1 = 8;
                                            *(arg1 + 8) = rax_50;
                                            *(arg1 + 0x10) = rdx_41;
                                        }
                                        else
                                        {
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$firecracker..ResizeFdTableError$GT$$GT$::hac3548dabfd2b9fa(&var_378);
                                            label_55b373:
                                            int128_t var_1c0;
                                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1c0, var_360_1);
                                            int128_t var_1b0;
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&*var_1b0[8], "1.14.0-devFirecrackerMissing arg…", 0xa);
                                            int128_t var_190;
                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_190, "FirecrackerMissing argument: api…", 0xb);
                                            char var_178_1 = 0;
                                            void* rax_53 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                "metrics-pathPath to a fifo or a …", 0xc);
                                            int64_t var_208;
                                            
                                            if (rax_53)
                                            {
                                                void var_48;
                                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_48, *(rax_53 + 8), *(rax_53 + 0x10));
                                                vmm::vmm_config::metrics::init_metrics::hddd84842699c0a5f(&var_208, &var_48);
                                            }
                                            
                                            if (rax_53 && var_208 != -0x8000000000000000)
                                            {
                                                int128_t var_168_1 = var_208;
                                                *arg1 = 6;
                                                int128_t var_16c;
                                                *(arg1 + 4) = var_16c;
                                                arg1[5] = *var_168_1[0xc];
                                                int64_t var_1f8;
                                                *(arg1 + 0x18) = var_1f8;
                                                int32_t var_150;
                                                arg1[8] = var_150;
                                                int128_t var_14c;
                                                *(arg1 + 0x24) = var_14c;
                                                int128_t var_13c;
                                                *(arg1 + 0x34) = var_13c;
                                                int32_t var_12c;
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
                                                int128_t var_230;
                                                int128_t var_220;
                                                int32_t* rbx_3;
                                                
                                                if (var_478 != 0x15)
                                                {
                                                    var_220 = var_468_5;
                                                    var_230 = var_478;
                                                    rbx_3 = arg1;
                                                    label_55b5f6:
                                                    *var_468_5[4] = var_220;
                                                    var_478 = var_230;
                                                    int128_t zmm0_29 = var_458_23;
                                                    var_308 = zmm0_29;
                                                    var_3c8 = var_478;
                                                    int128_t var_3a8_1 = zmm0_29;
                                                    rbx_3[0xd] = *var_450_21[8];
                                                    zmm0_29 = var_3c8;
                                                    *(rbx_3 + 0x24) = var_3a8_1;
                                                    *(rbx_3 + 0x14) = var_468_5;
                                                    *(rbx_3 + 4) = zmm0_29;
                                                    *rbx_3 = 7;
                                                    core::ptr::drop_in_place$LT$vmm..vmm_config..instance_info..InstanceInfo$GT$::h8bafaefa3a8db683(&var_1c0);
                                                }
                                                else
                                                {
                                                    int64_t var_238;
                                                    firecracker::seccomp::get_filters::hd13d8ec80e3e2eb0(&var_238, *var_478[4], *var_478[8]);
                                                    rbx_3 = arg1;
                                                    
                                                    if (!var_238)
                                                        goto label_55b5f6;
                                                    
                                                    var_298 = var_238;
                                                    var_288_1 = var_230;
                                                    int128_t var_278_1 = var_220;
                                                    void* rax_56 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "config-filePath to a file that c…", 0xb);
                                                    char const (*** r14_1)[0x94] =
                                                        -0x8000000000000000;
                                                    int128_t var_248;
                                                    
                                                    if (rax_56)
                                                    {
                                                        std::fs::read_to_string::hda21ec86c0a6ebb0(
                                                            &var_478, rax_56);
                                                        int64_t rax_57 = var_478;
                                                        var_328 = var_478;
                                                        r14_1 = -0x8000000000000000;
                                                        
                                                        if (rax_57 != -0x7fffffffffffffff)
                                                        {
                                                            int64_t var_f8 = rax_57;
                                                            int128_t var_f0_1 = var_328;
                                                            core::result::Result$LT$T$C$E$GT$::expect::hee03fd7c598fd428(&var_478, &var_f8, 
                                                                "Unable to open or read from the …", 
                                                                0x32);
                                                            r14_1 = var_478;
                                                            var_248 = var_478;
                                                        }
                                                    }
                                                    
                                                    void* rax_58 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "metadataFileOpenSubleaf ENOTUNIQ…", 8);
                                                    int64_t rax_59;
                                                    
                                                    if (rax_58)
                                                    {
                                                        std::fs::read_to_string::hda21ec86c0a6ebb0(
                                                            &var_478, rax_58);
                                                        rax_59 = var_478;
                                                        var_328 = var_478;
                                                    }
                                                    
                                                    if (rax_58 && rax_59 != -0x7fffffffffffffff)
                                                    {
                                                        int64_t var_e0 = rax_59;
                                                        int128_t var_d8_1 = var_328;
                                                        core::result::Result$LT$T$C$E$GT$::expect::hee03fd7c598fd428(&var_378, &var_e0, 
                                                            "Unable to open or read from the …", 
                                                            0x31);
                                                    }
                                                    else
                                                        var_378 = -0x8000000000000000;
                                                    
                                                    var_388_1 = utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                                                        "boot-timerWhether or not to load…", 0xa);
                                                    char rax_66 = utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                                                        "enable-pciEnables PCIe support.F…", 0xa);
                                                    uint64_t r13_2 = utils::arg_parser::Arguments::flag_present::hcdc23bf30ac1487c(&var_358, 
                                                        "no-apiOptional parameter which a…", 6);
                                                    void* rax_68 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "http-api-max-payload-sizeHttp AP…", 0x19);
                                                    
                                                    if (!rax_68)
                                                    {
                                                        core::option::unwrap_failed::h893f57cb7db71cb7();
                                                        /* no return */
                                                    }
                                                    
                                                    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *(rax_68 + 8), *(rax_68 + 0x10));
                                                    char* rax_69 = core::result::Result$LT$T$C$E$GT$::expect::h7e2a11c0926c2669(&var_478, 
                                                        "'http-api-max-payload-size' para…", 0x45);
                                                    void* rax_70 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                        "mmds-size-limitenable-pciEnables…", 0xf);
                                                    char* r15_3 = rax_69;
                                                    
                                                    if (rax_70)
                                                    {
                                                        core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *(rax_70 + 8), *(rax_70 + 0x10));
                                                        r15_3 = core::result::Result$LT$T$C$E$GT$::expect::h7e2a11c0926c2669(&var_478, 
                                                            "'mmds-size-limit' parameter expe…", 
                                                            0x3b);
                                                    }
                                                    
                                                    int64_t var_368;
                                                    
                                                    if (!r13_2)
                                                    {
                                                        void* rax_74 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            &data_4310f8[0x28], 8);
                                                        int64_t rax_75;
                                                        
                                                        if (rax_74)
                                                        {
                                                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_478, *(rax_74 + 8), 
                                                                *(rax_74 + 0x10));
                                                            rax_75 = var_478;
                                                            var_328 = var_478;
                                                        }
                                                        
                                                        if (!rax_74
                                                            || rax_75 == -0x8000000000000000)
                                                        {
                                                            core::option::expect_failed::h3f620cfb8545dc61("Missing argument: api-sock/run/f…");
                                                            /* no return */
                                                        }
                                                        
                                                        int64_t var_110 = rax_75;
                                                        int128_t var_108_1 = var_328;
                                                        void* rax_76 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            "start-time-usProcess start time …", 
                                                            0xd);
                                                        int64_t var_390_1;
                                                        
                                                        if (!rax_76)
                                                            var_390_1 = 0;
                                                        else
                                                        {
                                                            r13_2 = &var_478;
                                                            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *(rax_76 + 8), 
                                                                *(rax_76 + 0x10));
                                                            var_360_1 = core::result::Result$LT$T$C$E$GT$::expect::he6dd91a8ad03e809(&var_478, 
                                                                "'start-time-us' parameter expect…", 
                                                                0x37);
                                                            var_390_1 = 1;
                                                        }
                                                        
                                                        void* rax_80 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            "start-time-cpu-usProcess start C…", 
                                                            0x11);
                                                        int64_t rbx_4;
                                                        
                                                        if (!rax_80)
                                                            rbx_4 = 0;
                                                        else
                                                        {
                                                            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *(rax_80 + 8), 
                                                                *(rax_80 + 0x10));
                                                            r13_2 = core::result::Result$LT$T$C$E$GT$::expect::he6dd91a8ad03e809(&var_478, 
                                                                "'start-time-cpu-us' parameter ex…", 
                                                                0x3b);
                                                            rbx_4 = 1;
                                                        }
                                                        
                                                        void* rax_82 = utils::arg_parser::Arguments::single_value::hfa922a008317d735(&var_358, 
                                                            "parent-cpu-time-usParent process…", 
                                                            0x12);
                                                        int64_t rcx_12;
                                                        
                                                        if (!rax_82)
                                                            rcx_12 = 0;
                                                        else
                                                        {
                                                            core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_478, *(rax_82 + 8), 
                                                                *(rax_82 + 0x10));
                                                            rax_82 = core::result::Result$LT$T$C$E$GT$::expect::he6dd91a8ad03e809(&var_478, 
                                                                "'parent-cpu-time-us' parameter e…", 
                                                                0x3c);
                                                            rcx_12 = 1;
                                                        }
                                                        
                                                        int64_t var_1f0 = var_390_1;
                                                        void* var_1e8_1 = var_360_1;
                                                        int64_t var_1e0_1 = rbx_4;
                                                        uint64_t var_1d8_1 = r13_2;
                                                        int64_t var_1d0_1 = rcx_12;
                                                        void* var_1c8_1 = rax_82;
                                                        var_478 = r14_1;
                                                        var_478 = var_248;
                                                        char* r10_2;
                                                        
                                                        if (var_378 == -0x8000000000000000)
                                                            r10_2 = nullptr;
                                                        else
                                                            r10_2 = rdx_41;
                                                        
                                                        char var_c8;
                                                        firecracker::api_server_adapter::run_with_api::h95de3867043d5470(&var_c8, &var_298, &var_478, &var_110, 
                                                            &var_1c0, &var_1f0, var_388_1, rax_66, 
                                                            rax_69, r15_3, r10_2, var_368);
                                                        int32_t rax_85 = 0xb;
                                                        
                                                        if (var_c8 != 0x20)
                                                        {
                                                            int128_t var_a8;
                                                            *var_458_23[4] = var_a8;
                                                            int128_t var_b8;
                                                            *var_468_5[4] = var_b8;
                                                            var_478 = var_c8;
                                                            arg1[0x11] = var_438_23;
                                                            int128_t var_98;
                                                            *(arg1 + 0x34) = var_98;
                                                            *(arg1 + 0x24) = var_458_23;
                                                            *(arg1 + 0x14) = var_468_5;
                                                            *(arg1 + 4) = var_478;
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
                                                        int128_t var_180;
                                                        var_438_23 = var_180;
                                                        var_450_21 = var_190;
                                                        int128_t var_1a0;
                                                        var_458_23 = var_1a0;
                                                        var_468_5 = var_1b0;
                                                        var_478 = var_1c0;
                                                        char* r10_1;
                                                        
                                                        if (var_378 == -0x8000000000000000)
                                                            r10_1 = nullptr;
                                                        else
                                                            r10_1 = rdx_41;
                                                        
                                                        char var_88;
                                                        firecracker::run_without_api::h14833a82da343b1a(&var_88, &var_328, &var_3c8, &var_478, 
                                                            var_388_1, rax_66, r15_3, r10_1, 
                                                            var_368);
                                                        int32_t rax_78 = 0xb;
                                                        
                                                        if (var_88 != 0x1d)
                                                        {
                                                            int128_t var_68;
                                                            *var_458_23[4] = var_68;
                                                            int128_t var_78;
                                                            *var_468_5[4] = var_78;
                                                            var_478 = var_88;
                                                            rbx_3[0x11] = var_438_23;
                                                            int128_t var_58;
                                                            *(rbx_3 + 0x34) = var_58;
                                                            *(rbx_3 + 0x24) = var_458_23;
                                                            *(rbx_3 + 0x14) = var_468_5;
                                                            *(rbx_3 + 4) = var_478;
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
                                    *(arg1 + 8) = rax_45;
                                }
                            }
                        }
                        else
                        {
                            *(rax_30 + 0x10);
                            firecracker::print_snapshot_data_format::hddac348824e0a41b(&var_478, 
                                *(rax_30 + 8));
                            int64_t rax_31 = var_478;
                            
                            if (rax_31 != 7)
                            {
                                *(arg1 + 0x30) = var_3e0;
                                int128_t zmm0_25 = var_478;
                                *(arg1 + 0x20) = var_3d0;
                                *(arg1 + 0x10) = zmm0_25;
                                *arg1 = 3;
                                *(arg1 + 8) = rax_31;
                            }
                            else
                                *arg1 = 0xb;
                        }
                    }
                    else
                    {
                        int128_t var_318_1 = data_4393f8;
                        var_328 = *data_4393e8;
                        int64_t var_308_1 = 0;
                        var_3c8 = &var_328;
                        uint64_t (* var_3c0_4)(int64_t arg1, int64_t* arg2) = semver::display::_$LT$impl$u20$core..fmt..Display$u20$for$u20$semver..Version$GT$::fmt::ha9f34b03bf53131a;
                        var_478 = &data_7a3ef0;
                        *var_478[8] = 2;
                        int64_t var_458_27 = 0;
                        char const (** const** var_468_4)[0x94] = &var_3c8;
                        int64_t var_460_25 = 1;
                        std::io::stdio::_print::h5e446ff973c02de6(&var_478);
                        core::ptr::drop_in_place$LT$semver..Version$GT$::h899d2d10dc06f6c7(
                            &var_328);
                        *arg1 = 0xb;
                    }
                }
                else
                {
                    var_328 = &data_7a3fa8;
                    int64_t (* var_320_2)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    var_478 = &data_7a3eb0;
                    *var_478[8] = 2;
                    int64_t var_458_26 = 0;
                    char const (** const* var_468_3)[0x94] = &var_328;
                    int64_t var_460_24 = 1;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_478);
                    *arg1 = 0xb;
                }
            }
            else
            {
                var_328 = &data_7a3fa8;
                int64_t (* var_320_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                var_478 = &data_7a3eb0;
                *var_478[8] = 2;
                int64_t var_458_24 = 0;
                char const (** const* var_468_1)[0x94] = &var_328;
                int64_t var_460_22 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_478);
                utils::arg_parser::ArgParser::formatted_help::h2dfefc7734439043(&var_328, &var_358);
                var_3c8 = &var_328;
                int64_t (* var_3c0_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_478 = &data_7a3ed0;
                *var_478[8] = 2;
                int64_t var_458_25 = 0;
                char const (** const** var_468_2)[0x94] = &var_3c8;
                int64_t var_460_23 = 1;
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
