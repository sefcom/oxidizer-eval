
  fn rg::files_parallel::h3684f7287384284e(arg1: *mut i8, arg2: *mut c_void) -> u64

{
    let mut var_328: *mut c_void = arg2;
    let mut var_339: i8 = *arg2.byte_offset(0x168);
    let mut var_308: i128;
    rg::flags::hiargs::HiArgs::path_printer_builder::h89f24a04c32e915a(&var_308, arg2);
    let mut var_228: i64;
    rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(&var_228, arg2);
    let mut var_e0: ();
    grep_printer::path::PathPrinterBuilder::build::he67013d7ee9839ab(&var_e0, &var_308, &var_228);
    core::ptr::drop_in_place$LT$grep_printer..path..PathPrinterBuilder$GT$::h1ff9a380ad59c6f7(
        &var_308);
    let mut var_33a: i8 = 0;
    std::sync::mpmc::channel::h2b71f353b763d9a3(&var_308);
    let mut var_2f8: i128;
    let zmm1: i128 = var_2f8;
    let mut var_338: i128 = var_308;
    let var_248: i128 = zmm1;
    memcpy(&var_308, &var_e0, 0xc0);
    let mut var_218: i64 = -0x8000000000000000;
    var_228 = 0;
    let var_200: i8 = 0;
    let mut var_150: i64;
    std::thread::Builder::spawn_unchecked::hb6bf3905158c1bc1(&var_150, &var_228, &var_308);
    let mut var_320: i128;
    core::result::Result$LT$T$C$E$GT$::expect::he09aaada8765e00b(&var_320, &var_150);
    let mut rbp: i64;
    rbp = 1;
    rg::flags::hiargs::HiArgs::walk_builder::h93d7dc6144a9675f(&var_308, arg2);
    let r15: i64 = var_308;
    let r14_1: i64 = *var_308[8];
    
    if r15 == 2
    {
        *arg1.byte_offset(8) = r14_1;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$$GT$::hd818caf9cbfdf193(&var_320);
        return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$rg..haystack..Haystack$GT$$GT$::h9a3ab15574c99b0a(&var_338);
    }
    
    memcpy(&var_218, &var_2f8, 0xc8);
    var_228 = r15;
    ignore::walk::WalkBuilder::build_parallel::h8650197b25876e16(&var_150, &var_228);
    var_308 = &var_339;
    *var_308[8] = &var_33a;
    var_2f8 = &var_338;
    *var_2f8[8] = &var_328;
    ignore::walk::WalkParallel::run::he7776bff972269b8(&var_150, &var_308);
    core::ptr::drop_in_place$LT$ignore..walk..WalkBuilder$GT$::h38295eb0d419261c(&var_228);
    var_308 = var_338;
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$rg..haystack..Haystack$GT$$GT$::h9a3ab15574c99b0a(&var_308);
    let var_310: i64;
    var_2f8 = var_310;
    var_308 = var_320;
    std::thread::JoinInner$LT$T$GT$::join::h744b44382a866568(&var_228, &var_308);
    core::result::Result$LT$T$C$E$GT$::unwrap::h487008bcb0c7d249(var_228, r14_1);
    var_150 = r14_1;
    let mut result: u64;
    
    if r14_1 == 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h328fe786a92b7324(&var_150);
        'label_65bc2c:
        result = core::sync::atomic::atomic_load::h529993013ff7d57c(&var_33a, 4);
        arg1[1] = result != 0;
        *arg1 = 0;
    }
    else
    {
        var_308 = r14_1;
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(r14_1) == 0xb
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_308);
            goto 'label_65bc2c;
        }
        
        result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(r14_1);
        *arg1.byte_offset(8) = result;
        *arg1 = 1;
    }
    
    result
}
