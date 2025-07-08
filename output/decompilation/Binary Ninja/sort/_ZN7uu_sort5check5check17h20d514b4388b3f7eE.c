
  int128_t* uu_sort::check::check::h20d514b4388b3f7e(int64_t arg1, uint64_t arg2, void* arg3)

{
    char r15 = 0 - *(arg3 + 0x84);
    uint64_t var_1d0;
    uu_sort::open::h7400e7736be99f1e(&var_1d0, arg1);
    int128_t* result_1;
    int128_t* result = result_1;
    
    if (!var_1d0)
    {
        void* rbx;
        rbx = 1;
        std::sync::mpmc::sync_channel::h0128f0d8709ae6c6(&var_1d0, 2);
        int128_t var_1f8 = var_1d0;
        uint64_t var_1c0;
        uint64_t var_100_1 = var_1c0;
        int64_t var_1b8;
        int64_t var_f8_1 = var_1b8;
        std::sync::mpmc::sync_channel::h3dc4982d6038534e(&var_1d0, 2);
        uint64_t r13_1 = var_1d0;
        uint64_t var_f0_1 = r13_1;
        int128_t* result_4 = result_1;
        uint64_t var_e0_1 = var_1c0;
        int64_t var_d8_1 = var_1b8;
        int64_t var_d0;
        _$LT$uu_sort..GlobalSettings$u20$as$u20$core..clone..Clone$GT$::clone::h4b1e280250293b78(
            &var_d0, arg3);
        int128_t* result_2 = result;
        uint64_t var_108_1 = var_1c0;
        var_1d0 = var_1c0;
        int64_t var_1c8 = var_1b8;
        int128_t* result_3 = result_1;
        uint64_t var_1b0;
        memcpy(&var_1b0, &var_d0, 0xa0);
        int64_t var_c0_1 = -0x8000000000000000;
        var_d0 = 0;
        int64_t rbx_1;
        rbx_1 = 1;
        int128_t var_248;
        std::thread::Builder::spawn_unchecked::h2ccfd943a76390cf(&var_248, &var_d0);
        core::result::Result$LT$T$C$E$GT$::expect::h2d31b0d7291505b3(&var_d0, &var_248);
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hd7c3b89971243bd4(&var_d0);
        int64_t rax_5 = *(arg3 + 0x68);
        int64_t r14_1 = 0x19000;
        
        if (rax_5 < 0x19000)
            r14_1 = rax_5;
        
        for (int32_t i = 0; i < 2; )
        {
            i = _$LT$i32$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::h712e9cb68f36e349(i);
            std::sync::mpmc::Sender$LT$T$GT$::send::hcf2a828def35f69d(&var_d0, &var_1f8, &var_1d0, 
                uu_sort::chunks::RecycledChunk::new::hf2a77065c2da2656(&var_1d0, r14_1));
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..RecycledChunk$GT$$GT$$GT$::h84f93410a09308e1(&var_d0);
        }
        
        int128_t* var_270 = nullptr;
        uint64_t var_1e8 = var_1c0;
        int64_t var_1e0_1 = var_1b8;
        int64_t r12_2 = 0;
        char const (** const var_258_2)[0xa4] = &data_600ea0;
        int64_t rbp_2 = arg1;
        label_54813f:
        int128_t* rax_11 = _$LT$std..sync..mpsc..IntoIter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc73efb6024e804c();
        
        if (!rax_11)
        {
            core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h92abcc67ee379694(&var_1e8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::ha6a3835cbbfd737c(&var_270);
            core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h3a7b5e4f6158b683(&var_1f8);
            return nullptr;
        }
        
        int128_t* var_260 = rax_11;
        r12_2 += 1;
        int128_t* rcx_3 = var_270;
        var_270 = nullptr;
        
        if (!rcx_3)
            goto label_5481f5;
        
        int128_t* var_228 = rcx_3;
        int64_t rdx_3 = *(rcx_3 + 0x28);
        
        if (!rdx_3)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if (!*(rax_11 + 0x28))
        {
            var_258_2 = &data_600eb8;
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int64_t* rbx_2 = rax_11[2];
        uint64_t var_1c0_1;
        
        if (uu_sort::compare_by::h54103d56e12edacd(rcx_3[2] + rdx_3 * 0x18 - 0x18, rbx_2, arg3, 
            &rcx_3[3], &rax_11[3]) > r15)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_1d0, rbp_2, arg2);
            var_248 = var_1d0;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &var_d0, *rbx_2, rbx_2[1]);
            int64_t var_198_2 = var_c0_1;
            int128_t var_1a8_2 = var_d0;
            char rax_26 = *(arg3 + 0x86);
            var_1b0 = r13_1;
            var_1c0_1 = var_248;
            int64_t var_1c8_2 = r12_2;
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
            label_5481f5:
            int64_t rcx_6 = rax_11[2];
            int64_t rax_12 = *(rax_11 + 0x28);
            var_d0 = rcx_6;
            int64_t var_c8_1 = rcx_6 + rax_12 * 0x18;
            var_c0_1 = 0;
            int64_t* rdx_7;
            char rax_16;
            
            do
            {
                int64_t* rax_15;
                rax_15 = _$LT$itertools..tuple_impl..TupleWindows$LT$I$C$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hba70f0f004cf2b2d(&var_d0);
                
                if (!rax_15)
                {
                    int128_t* rbx_3 = var_260;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::ha6a3835cbbfd737c(&var_270);
                    var_270 = rbx_3;
                    rbp_2 = arg1;
                    goto label_54813f;
                }
                
                rax_16 = uu_sort::compare_by::h54103d56e12edacd(rax_15, rdx_7, arg3, &var_260[3], 
                    &var_260[3]);
                r12_2 += 1;
            } while (rax_16 <= r15);
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_1d0, arg1, arg2);
            var_228 = var_1d0;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(
                &var_248, *rdx_7, rdx_7[1]);
            int64_t var_238;
            int64_t var_198_1 = var_238;
            int128_t var_1a8_1 = var_248;
            char rax_20 = *(arg3 + 0x86);
            var_1b0 = r13_1;
            var_1c0_1 = var_228;
            int64_t var_1c8_1 = r12_2;
            *var_1d0[1] = rax_20;
            var_1d0 = 0;
            result = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_1d0);
        }
        core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_260);
        core::ptr::drop_in_place$LT$std..sync..mpsc..IntoIter$LT$uu_sort..chunks..Chunk$GT$$GT$::h92abcc67ee379694(&var_1e8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..chunks..Chunk$GT$$GT$::ha6a3835cbbfd737c(&var_270);
        core::ptr::drop_in_place$LT$std..sync..mpsc..SyncSender$LT$uu_sort..chunks..RecycledChunk$GT$$GT$::h3a7b5e4f6158b683(&var_1f8);
    }
    
    return result;
}
