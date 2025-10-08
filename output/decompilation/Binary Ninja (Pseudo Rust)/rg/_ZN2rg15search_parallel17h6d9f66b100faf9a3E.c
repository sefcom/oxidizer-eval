
  fn rg::search_parallel::h6d9f66b100faf9a3(arg1: *mut i8, arg2: *mut i32, arg3: i8) -> i64

{
    let mut var_8d8: *mut i32 = arg2;
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::Instant::now::h767314cc8c6c5886();
    let mut var_8dd: i8 = arg2[0x5a];
    let mut var_808: ();
    rg::flags::hiargs::HiArgs::buffer_writer::hca11ab9044d40209(&var_808, arg2);
    let rax_2: i32 = arg2[0xc0];
    let mut var_8c0: i32;
    let mut var_690: i128;
    let mut var_68d: i128;
    let mut rax_3: i64;
    
    if rax_2 != 0x3b9aca00
    {
        let rcx_1: i32 = arg2[0xc1];
        let zmm1_1: i128 = *arg2.byte_offset(0x2d8);
        let zmm2_1: i128 = *arg2.byte_offset(0x2e8);
        var_68d = *arg2.byte_offset(0x2c8);
        let rdx_1: i64 = *arg2.byte_offset(0x2f8);
        var_8c0 = 0;
        let var_8bc_1: i8 = 0;
        let var_8bb_1: i128 = var_690;
        let var_8ab_1: i128 = var_68d;
        let mut var_89b_1: i128 = zmm1_1;
        *var_89b_1[0xb] = *zmm2_1[8];
        let var_888_1: i64 = rdx_1;
        let var_880_1: i32 = rax_2;
        let var_87c_1: i32 = rcx_1;
        rax_3 = 1;
    }
    else
    {
        rax_3 = 0;
    }
    
    let mut var_8c8: i64 = rax_3;
    let mut var_8df: i8 = 0;
    let mut var_8de: i8 = 0;
    let mut var_360: *mut c_void;
    rg::flags::hiargs::HiArgs::matcher::h70802ff5d1125361(&var_360, arg2);
    let rcx_2: *mut c_void = var_360;
    let var_2fd: i8;
    
    if var_2fd != 2
    {
        let var_30d: i128;
        let var_825_1: i128 = var_30d;
        let var_318: i128;
        let var_830_1: i128 = var_318;
        let var_328: i128;
        let var_840_1: i128 = var_328;
        let var_338: i128;
        let var_850_1: i128 = var_338;
        let var_348: i128;
        let var_860_1: i128 = var_348;
        let mut var_358: i128;
        let var_870_1: i128 = var_358;
        let mut var_878: *mut c_void = rcx_2;
        let var_815_1: i8 = var_2fd;
        let var_2fc: i32;
        let var_814_1: i32 = var_2fc;
        rg::flags::hiargs::HiArgs::searcher::h183c926e645b97ae(&var_360, arg2);
        let r14_1: *mut c_void = var_360;
        let r13_1: i64 = var_358;
        
        if r14_1 != 2
        {
            let mut var_788: ();
            memcpy(&var_788, &*var_358[8], 0xf8);
            let mut var_798: *mut c_void = r14_1;
            let var_790_1: i64 = r13_1;
            let mut var_7b8: ();
            termcolor::BufferWriter::buffer::h6c7892da0470d0b5(&var_7b8, &var_808);
            rg::flags::hiargs::HiArgs::printer::hcdd6b50cc9b3a11e(&var_360, arg2, arg3, &var_7b8);
            rg::flags::hiargs::HiArgs::search_worker::hf358c6f28cd28c0f(&var_690, arg2, &var_878, 
                &var_798, &var_360);
            let r14_3: *mut c_void = var_690;
            let r15_1: i64 = *var_68d[5];
            
            if r14_3 != 2
            {
                memcpy(&*var_358[8], &*var_68d[0xd], 0x320);
                var_360 = r14_3;
                var_358 = r15_1;
                rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(&var_690, arg2);
                let r14_4: *mut c_void = var_690;
                let r15_2: i64 = *var_68d[5];
                
                if r14_4 != 2
                {
                    memcpy(&var_788, &*var_68d[0xd], 0xc8);
                    var_798 = r14_4;
                    let var_790_2: i64 = r15_2;
                    ignore::walk::WalkBuilder::build_parallel::h8650197b25876e16(&var_878, 
                        &var_798);
                    var_690 = &var_808;
                    *var_68d[5] = &var_8c8;
                    *var_68d[0xd] = &var_8df;
                    let mut var_67d: i128;
                    *var_67d[5] = &var_8de;
                    *var_67d[0xd] = &var_8dd;
                    let mut var_66d: i128;
                    *var_66d[5] = &var_360;
                    *var_66d[0xd] = &var_8d8;
                    ignore::walk::WalkParallel::run::hdf34baa356e910f5(&var_878, &var_690);
                    core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::h38295eb0d419261c(
                        &var_798);
                    
                    if var_8d8[0x5a] != 0
                        && core::sync::atomic::atomic_load::h529993013ff7d57c(&var_8de, 4) == 0
                    {
                        rg::eprint_nothing_searched::hf00b8c23f740cffe();
                    }
                    
                    if (var_8c8 & 1) != 0
                    {
                        std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h022e5b604783a172(&var_690, 
                            &var_8c0);
                        let mut rax_7: *mut i32;
                        let mut rdx_7: i8;
                        rax_7 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::hbd16d7866b454152(&var_690);
                        let mut rcx_5: i32 = 0;
                        let var_258: i64;
                        
                        if var_258 >= 1
                        {
                            rcx_5 = var_258 - 1;
                        }
                        
                        var_798 = (&var_360).byte_offset(*(&data_4887b0).byte_offset(rcx_5 << 3));
                        var_690 =
                            rg::print_stats::h392dcabb3d8d88a4(arg3, &rax_7[2], rax, rdx, &var_798);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_690);
                        var_690 =
                            termcolor::BufferWriter::print::hca5ecc8128e985e1(&var_808, var_798);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_690);
                        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..StdinRaw$GT$$GT$$GT$::h667fd8cef91aec57(rax_7, rdx_7 & 1);
                    }
                    
                    arg1[1] = core::sync::atomic::atomic_load::h529993013ff7d57c(&var_8df, 4) != 0;
                    *arg1 = 0;
                }
                else
                {
                    *arg1.byte_offset(8) = r15_2;
                    *arg1 = 1;
                }
                
                core::ptr::drop_in_place$LT$rg..search..SearchWorker$LT$termcolor..Buffer$GT$$GT$::hc50dd47afd20e3ee(&var_360);
            }
            else
            {
                *arg1.byte_offset(8) = r15_1;
                *arg1 = 1;
            }
        }
        else
        {
            *arg1.byte_offset(8) = r13_1;
            *arg1 = 1;
            core::ptr::drop_in_place$LT$rg..search..PatternMatcher$GT$::h6514a31a5032fe4e(&var_878);
        }
    }
    else
    {
        *arg1.byte_offset(8) = rcx_2;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$termcolor..BufferWriter$GT$::haa2046c50cd86953(&var_808)
}
