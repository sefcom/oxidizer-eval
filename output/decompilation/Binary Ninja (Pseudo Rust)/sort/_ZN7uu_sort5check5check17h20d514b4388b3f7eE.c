
  fn uu_sort::check::check::h20d514b4388b3f7e(arg1: i64, arg2: u64, arg3: *mut c_void) -> *mut i128

{
    let r15: i8 = 0 - *arg3.byte_offset(0x84);
    let mut var_1d0: u64;
    uu_sort::open::h7400e7736be99f1e(&var_1d0, arg1);
    let result_1: *mut i128;
    let mut result: *mut i128 = result_1;
    
    if var_1d0 == 0
    {
        let mut rbx: *mut c_void;
        rbx = 1;
        std::sync::mpmc::sync_channel::h0128f0d8709ae6c6(&var_1d0, 2);
        let mut var_1f8: i128 = var_1d0;
        let var_1c0: u64;
        let var_100_1: u64 = var_1c0;
        let var_1b8: i64;
        let var_f8_1: i64 = var_1b8;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1d0, 2);
        let r13_1: u64 = var_1d0;
        let var_f0_1: u64 = r13_1;
        let result_4: *mut i128 = result_1;
        let var_e0_1: u64 = var_1c0;
        let var_d8_1: i64 = var_1b8;
        let mut var_d0: i64;
        _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
            &var_d0, arg3);
        let result_2: *mut i128 = result;
        let var_108_1: u64 = var_1c0;
        var_1d0 = var_1c0;
        let var_1c8: i64 = var_1b8;
        let result_3: *mut i128 = result_1;
        let mut var_1b0: u64;
        memcpy(&var_1b0, &var_d0, 0xa0);
        let mut var_c0_1: i64 = -0x8000000000000000;
        var_d0 = 0;
        let mut rbx_1: i64;
        rbx_1 = 1;
        let mut var_248: i128;
        std::thread::Builder::spawn_unchecked::h2ccfd943a76390cf(&var_248, &var_d0);
        core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_d0, &var_248);
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hd7c3b89971243bd4(&var_d0);
        let rax_5: i64 = *arg3.byte_offset(0x68);
        let mut r14_1: i64 = 0x19000;
        
        if rax_5 < 0x19000
        {
            r14_1 = rax_5;
        }
        
        for let mut i: i32 = 0; i < 2; 
        {
            i = _$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(i);
            std::sync::mpmc::Sender$LT$T$GT$::send::hcf2a828def35f69d(&var_d0, &var_1f8, &var_1d0, 
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_1d0, r14_1));
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::h84f93410a09308e1(&var_d0);
        }
        
        let mut var_270: *mut i128 = nullptr;
        let mut var_1e8: u64 = var_1c0;
        let var_1e0_1: i64 = var_1b8;
        let mut r12_2: i64 = 0;
        let mut var_258_2: *mut *mut [i8; 0xa4] = &data_600ea0;
        let mut rbp_2: i64 = arg1;
        'label_54813f:
        let mut rax_11: *mut i128 = _$LT$std..sync..mpsc..IntoIter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc73efb6024e804c();
        
        if rax_11 == 0
        {
            core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h92abcc67ee379694(&var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::ha6a3835cbbfd737c(&var_270);
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h3a7b5e4f6158b683(&var_1f8);
            return nullptr;
        }
        
        let mut var_260: *mut i128 = rax_11;
        r12_2 += 1;
        let rcx_3: *mut i128 = var_270;
        var_270 = nullptr;
        
        if rcx_3 == 0
        {
            goto 'label_5481f5;
        }
        
        let mut var_228: *mut i128 = rcx_3;
        let rdx_3: i64 = *rcx_3.byte_offset(0x28);
        
        if rdx_3 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if *rax_11.byte_offset(0x28) == 0
        {
            var_258_2 = &data_600eb8;
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let rbx_2: *mut i64 = rax_11[2];
        let mut var_1c0_1: u64;
        
        if uu_sort::compare_by::h54103d56e12edacd((rcx_3[2] + rdx_3 * 0x18).byte_offset(-0x18), 
            rbx_2, arg3, &rcx_3[3], &rax_11[3]) > r15
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_1d0, rbp_2, arg2);
            var_248 = var_1d0;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &var_d0, *rbx_2, rbx_2[1]);
            let var_198_2: i64 = var_c0_1;
            let var_1a8_2: i128 = var_d0;
            let rax_26: i8 = *arg3.byte_offset(0x86);
            var_1b0 = r13_1;
            var_1c0_1 = var_248;
            let var_1c8_2: i64 = r12_2;
            *var_1d0[1] = rax_26;
            var_1d0 = 0;
            result = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_1d0);
            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_228);
        }
        else
        {
            std::sync::mpmc::Sender$LT$T$GT$::send::hcf2a828def35f69d(&var_d0, &var_1f8, &var_1d0, 
                uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(&var_1d0, var_228));
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::h84f93410a09308e1(&var_d0);
            rax_11 = var_260;
            'label_5481f5:
            let rcx_6: i64 = rax_11[2];
            let rax_12: i64 = *rax_11.byte_offset(0x28);
            var_d0 = rcx_6;
            let var_c8_1: i64 = rcx_6 + rax_12 * 0x18;
            var_c0_1 = 0;
            let mut rdx_7: *mut i64;
            let mut rax_16: i8;
            
            do
            {
                let mut rax_15: *mut i64;
                rax_15 = _$LT$itertools..tuple_impl..TupleWindows$LT$I$C$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba70f0f004cf2b2d(&var_d0);
                
                if rax_15 == 0
                {
                    let rbx_3: *mut i128 = var_260;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::ha6a3835cbbfd737c(&var_270);
                    var_270 = rbx_3;
                    rbp_2 = arg1;
                    goto 'label_54813f;
                }
                
                rax_16 = uu_sort::compare_by::h54103d56e12edacd(rax_15, rdx_7, arg3, &var_260[3], 
                    &var_260[3]);
                r12_2 += 1;
            } while rax_16 <= r15;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_1d0, arg1, arg2);
            var_228 = var_1d0;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &var_248, *rdx_7, rdx_7[1]);
            let var_238: i64;
            let var_198_1: i64 = var_238;
            let var_1a8_1: i128 = var_248;
            let rax_20: i8 = *arg3.byte_offset(0x86);
            var_1b0 = r13_1;
            var_1c0_1 = var_228;
            let var_1c8_1: i64 = r12_2;
            *var_1d0[1] = rax_20;
            var_1d0 = 0;
            result = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_1d0);
        }
        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_260);
        core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h92abcc67ee379694(&var_1e8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::ha6a3835cbbfd737c(&var_270);
        core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h3a7b5e4f6158b683(&var_1f8);
    }
    
    result
}
