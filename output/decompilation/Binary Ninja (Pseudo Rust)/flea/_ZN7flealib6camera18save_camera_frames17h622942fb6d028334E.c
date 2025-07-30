
  fn flealib::camera::save_camera_frames::h622942fb6d028334(arg1: *mut i64, arg2: i32, arg3: i64) -> *mut i64

{
    let mut var_180: i64 = arg3;
    let rcx: i64;
    let var_178: i64 = rcx;
    let mut fd: i32;
    std::fs::metadata::h198ddbb2419bae71(&fd, "/dev/video0failed to spawn threa…");
    let fd_2: i32 = fd;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h99319c8eae35268b(&fd);
    
    if fd_2 == 2
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h76be6af41d2a4859(arg1, 
            &data_44fd60, 0x10);
        return arg1;
    }
    
    std::sync::mpmc::channel::hdcba90f63f774f2f(&fd);
    let zmm0_1: i128 = fd;
    let mut var_160: i128;
    let mut var_1e8: i128 = var_160;
    let mut var_1c8_1: i32 = arg2;
    let mut var_1d8: i128 = zmm0_1;
    var_160 = -0x8000000000000000;
    fd = 0;
    let mut var_148_1: i8 = 0;
    let mut var_a8: *mut c_void;
    std::thread::Builder::spawn_unchecked::hb782258bc29e6dad(&var_a8, &fd, &var_1d8);
    core::result::Result$LT$T$C$E$GT$::expect::hba870ccf999f6cfd(&fd, &var_a8);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h3bc8a69c7987d810(&fd);
    let mut rbx_2: *mut i64;
    
    if arg2 == 0
    {
        'label_76b338:
        rbx_2 = arg1;
        *rbx_2 = -0x8000000000000000;
    }
    else
    {
        let mut rbx_1: i32 = 0;
        
        loop
        {
            let rax_2: i32 = _$LT$u32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::hca53ffd75a1457a6(rbx_1);
            let mut var_1f4: i32 = rbx_1;
            std::sync::mpmc::Receiver$LT$T$GT$::recv::h2758a6fd4ae371c3(&fd, &var_1e8);
            core::result::Result$LT$T$C$E$GT$::unwrap::h03fe74c997b8545f(&var_a8, &fd);
            fd = &var_180;
            let var_168_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
            var_160 = &data_b08488;
            *var_160[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
            let var_150_1: *mut i32 = &var_1f4;
            var_148_1 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h13990ee88b04ff68;
            var_1d8 = &data_b08418;
            *var_1d8[8] = 4;
            let var_1b8_1: i64 = 0;
            var_1c8_1 = &fd;
            let var_1c0_1: i64 = 3;
            let mut var_c0: i128;
            core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_c0, &var_1d8);
            let mut var_198: i128 = var_c0;
            let var_b0: i64;
            let var_188_1: i64 = var_b0;
            let mut var_1a8: i8;
            let rdx_2: i64 = std::fs::File::create::h69c4063e94a13663(&var_1a8, &var_198);
            
            if (var_1a8 & 1) != 0
            {
                let var_1a0: i64;
                var_1d8 = var_1a0;
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&fd, &var_1d8, rdx_2);
                rbx_2 = arg1;
                rbx_2[2] = var_160;
                *rbx_2 = fd;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_1d8);
                core::ptr::drop_in_place$LT$rscam..Frame$GT$::h66886392cc4eedf1(&var_a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_198);
                break;
            }
            
            let fd_1: i32;
            fd = fd_1;
            let var_3c: i32;
            core::result::Result$LT$T$C$E$GT$::unwrap::h9dcf40e224f0c1bc(
                std::io::Write::write_all::h066e478a0016aaba(&fd, *var_a8.byte_offset(0x10), 
                var_3c));
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
            core::ptr::drop_in_place$LT$rscam..Frame$GT$::h66886392cc4eedf1(&var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_198);
            rbx_1 = rax_2;
            
            if rax_2 >= arg2
            {
                goto 'label_76b338;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$rscam..Frame$GT$$GT$::h5671e8f5bb645d2b(&var_1e8);
    rbx_2
}
