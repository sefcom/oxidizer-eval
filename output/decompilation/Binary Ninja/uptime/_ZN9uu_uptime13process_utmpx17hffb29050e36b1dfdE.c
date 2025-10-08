
  int64_t* uu_uptime::process_utmpx::hffb29050e36b1dfd(int64_t* arg1, void* arg2)

{
    int64_t rax;
    char rdx;
    
    if (!arg2)
        rax = uucore::features::utmpx::Utmpx::iter_all_records::hde307d126e33fb30();
    else
        rax = uucore::features::utmpx::Utmpx::iter_all_records_from::h2ad49eb0c3165b20(arg2);
    
    int64_t var_368 = rax;
    char var_360 = rdx & 1;
    int64_t var_378 = 0;
    int64_t var_370 = 0;
    int64_t var_358;
    
    while (true)
    {
        int32_t var_334;
        _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_334);
        
        if (var_334 != 1)
            break;
        
        void var_330;
        int16_t var_1b0;
        memcpy(&var_1b0, &var_330, 0x180);
        uint32_t rax_1 = var_1b0;
        
        if (rax_1 == 2)
        {
            void var_344;
            uucore::features::utmpx::Utmpx::login_time::h4f8d8ed757c914d5(&var_344, &var_1b0);
            
            if (time::offset_date_time::OffsetDateTime::unix_timestamp::hee8a350a5255bcc0(&var_344)
                > 0)
            {
                var_358 = time::offset_date_time::OffsetDateTime::unix_timestamp::hee8a350a5255bcc0(
                    &var_344);
                var_378 = 1;
            }
        }
        else if (rax_1 == 7)
            var_370 += 1;
    }
    
    core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::he10a6e3f3c7cf278(&var_368);
    *arg1 = var_378;
    arg1[1] = var_358;
    arg1[2] = var_370;
    return arg1;
}
