
  int64_t uu_sort::merge::FileMerger::write_all_to::h15031ed892ab18f7(int64_t* arg1, int64_t arg2)

{
    int64_t result;
    
    while (true)
    {
        int128_t var_68;
        uu_sort::merge::FileMerger::write_next::h518a8e2b8ce07954(&var_68, arg1, arg2);
        int64_t result_1;
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1c6299f5896d249c(&result_1, &var_68);
        result = result_1;
        
        if (result)
        {
            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hca51d1930952c542(arg1);
            break;
        }
        
        int64_t var_40;
        
        if (!var_40)
        {
            var_68 = *arg1;
            int64_t* rbp;
            rbp = 1;
            core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$::hc042c6d348025020(&var_68);
            int64_t var_58_1 = arg1[8];
            var_68 = *(arg1 + 0x30);
            std::thread::JoinInner$LT$T$GT$::join::hb9eba1a0bcb320b0(&result_1, &var_68);
            int64_t result_2;
            int64_t rdx_2;
            result_2 = core::result::Result$LT$T$C$E$GT$::unwrap::h38d955150ee3e803(&result_1);
            result = result_2;
            core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..BinaryHeap$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::h98adace6ce6b086a(&arg1[2]);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..PreviousLine$GT$$GT$::h58bd2c79d674c36d(&arg1[9]);
            break;
        }
    }
    
    return result;
}
