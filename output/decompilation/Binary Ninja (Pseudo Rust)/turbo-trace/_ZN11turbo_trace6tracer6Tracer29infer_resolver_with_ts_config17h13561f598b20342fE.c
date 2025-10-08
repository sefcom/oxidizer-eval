
  fn turbo_trace::tracer::Tracer::infer_resolver_with_ts_config::h13561f598b20342f(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut var_340: i64 = arg2;
    let var_338: i64 = arg3;
    let var_330: i64 = 1;
    let mut rax: i64;
    let mut rdx: u64;
    rax = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h9c53deefae5fceb3(&var_340);
    var_340 = arg2;
    let var_338_1: i64 = arg3;
    let var_330_1: i64 = 1;
    let mut rax_1: i64;
    let mut rdx_1: u64;
    rax_1 = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hd697ca68955bda25(&var_340);
    let result: i64 = rax | rax_1;
    
    if result == 0
    {
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_4c8: ();
    _$LT$oxc_resolver..options..ResolveOptions$u20$as$u20$core..clone..Clone$GT$::clone::h013b23858b0f51b6(&var_4c8, arg4);
    let mut var_4f8: i128;
    let mut var_1b8: ();
    
    if rax != 0
    {
        turbopath::absolute_system_path::AbsoluteSystemPath::join_component::hfbbfb208a663becd(
            &var_1b8, rax, rdx, "tsconfig.json/home/34r7hm4n/.car…");
        let var_1b0: i64;
        let var_1a8: u64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::haf8e89f95b98fa54(&var_340, var_1b0, var_1a8);
        var_4f8 = var_340;
        let mut var_378: i128;
        core::ptr::drop_in_place$LT$core..option..Option$LT$oxc_resolver..options..TsconfigOptions$GT$$GT$::h3a30df05dae62801(&var_378);
        let var_368_1: i64 = var_330_1;
        var_378 = var_4f8;
        let var_360_1: i64 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$turbopath..absolute_system_path_buf..AbsoluteSystemPathBuf$GT$::ha7d9f52c4329cdd7(&var_1b8);
    }
    
    if rax_1 != 0
    {
        memcpy(&var_340, &var_4c8, 0x188);
        turbopath::absolute_system_path::AbsoluteSystemPath::join_component::hfbbfb208a663becd(
            &var_4f8, rax_1, rdx_1, "node_modules,../package.jsondefa…");
        let mut var_4e0: ();
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hff486aca12fc4c5d(
            &var_4e0, &var_4f8);
        oxc_resolver::options::ResolveOptions::with_module::h3fbbf460763bb77e(&var_1b8, &var_340, 
            &var_4e0);
        memcpy(&var_4c8, &var_1b8, 0x188);
        core::ptr::drop_in_place$LT$turbopath..absolute_system_path_buf..AbsoluteSystemPathBuf$GT$::ha7d9f52c4329cdd7(&var_4f8);
    }
    
    memcpy(&var_340, &var_4c8, 0x188);
    oxc_resolver::ResolverGeneric$LT$C$GT$::clone_with_options::h7d4b9da875af48e3(arg1, 
        *arg4.byte_offset(0x188), &var_340)
}
