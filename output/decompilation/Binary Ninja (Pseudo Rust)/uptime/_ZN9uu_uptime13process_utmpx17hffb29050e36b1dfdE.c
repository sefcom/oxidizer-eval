
  fn uu_uptime::process_utmpx::hffb29050e36b1dfd(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut rax: i64;
    let mut rdx: i8;
    
    if arg2 == 0
    {
        rax = uucore::features::utmpx::Utmpx::iter_all_records::hde307d126e33fb30();
    }
    else
    {
        rax = uucore::features::utmpx::Utmpx::iter_all_records_from::h2ad49eb0c3165b20(arg2);
    }
    
    let mut var_368: i64 = rax;
    let var_360: i8 = rdx & 1;
    let mut var_378: i64 = 0;
    let mut var_370: i64 = 0;
    let mut var_358: i64;
    
    loop
    {
        let mut var_334: i32;
        _$LT$uucore..features..utmpx..UtmpxIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0874e3c7200a2ada(&var_334);
        
        if var_334 != 1
        {
            break;
        }
        
        let mut var_330: ();
        let mut var_1b0: i16;
        memcpy(&var_1b0, &var_330, 0x180);
        let rax_1: u32 = var_1b0;
        
        if rax_1 == 2
        {
            let mut var_344: ();
            uucore::features::utmpx::Utmpx::login_time::h4f8d8ed757c914d5(&var_344, &var_1b0);
            
            if time::offset_date_time::OffsetDateTime::unix_timestamp::hee8a350a5255bcc0(&var_344)
                > 0
            {
                var_358 = time::offset_date_time::OffsetDateTime::unix_timestamp::hee8a350a5255bcc0(
                    &var_344);
                var_378 = 1;
            }
        }
        else if rax_1 == 7
        {
            var_370 += 1;
        }
    }
    
    core::ptr::drop_in_place$LT$uucore..features..utmpx..UtmpxIter$GT$::he10a6e3f3c7cf278(&var_368);
    *arg1 = var_378;
    arg1[1] = var_358;
    arg1[2] = var_370;
    arg1
}
