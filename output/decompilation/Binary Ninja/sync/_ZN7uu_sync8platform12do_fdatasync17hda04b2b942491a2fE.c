
  int64_t uu_sync::platform::do_fdatasync::hda04b2b942491a2f(int64_t* arg1)

{
    void var_60;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h7f031b6be7709277(&var_60, arg1);
    int64_t i;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1e492218392007ae(&i, &var_60);
    
    if (!(0 + -(i)))
    {
        do
        {
            void var_40;
            std::fs::File::open::h65cf7029ede7a4f2(&var_40, &i);
            int32_t fd = core::result::Result$LT$T$C$E$GT$::unwrap::hff6beaa294ea25b7(&var_40);
            syscall(0x4b, fd);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::h67fe92f6732d82e7(fd);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1e492218392007ae(&i, &var_60);
        } while (i != -0x8000000000000000);
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::he1c25d7a7b7d72de(&var_60);
}
