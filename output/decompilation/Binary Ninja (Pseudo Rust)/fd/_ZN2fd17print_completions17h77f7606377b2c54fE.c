
  fn fd::print_completions::h77f7606377b2c54f(arg1: *mut i16, arg2: i8) -> i64

{
    let mut var_2e8: i8;
    std::env::args::h3c7cd0de4b395b7d(&var_2e8);
    let mut var_308: i64;
    _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0d29c3efeb1bccd1(&var_308, &var_2e8);
    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$std..env..ArgsOs$C$$LT$clap_lex..RawArgs$u20$as$u20$core..convert..From$LT$std..env..ArgsOs$GT$$GT$..from..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h2eb5350fc587bf98(&var_2e8);
    let mut r15: *const i8 = "fdignorefailed to spawn thread/r…";
    let mut r14: u64 = 2;
    
    if !(0 + -(var_308))
    {
        let var_300: i64;
        let var_2f8: i64;
        let mut rax_1: *mut i16;
        let mut rdx_1: i64;
        rax_1 = std::path::Path::file_stem::hc69c2d2c61933548(var_300, var_2f8);
        
        if rax_1 != 0
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_2e8, rax_1, rdx_1);
            let temp1_1: i8 = var_2e8;
            r14 = 2;
            let var_2d8: u64;
            
            if temp1_1 == 0
            {
                r14 = var_2d8;
            }
            r15 = "fdignorefailed to spawn thread/r…";
            let var_2e0: *mut i8;
            
            if temp1_1 == 0
            {
                r15 = var_2e0;
            }
        }
    }
    
    _$LT$fd..cli..Opts$u20$as$u20$clap_builder..derive..CommandFactory$GT$::command::h4a26f65572a5aceb(&var_2e8);
    clap_builder::builder::command::Command::build::h6e34fc47b5b0ef38(&var_2e8);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let var_2f0: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    clap_complete::aot::generator::generate::h7d3091434203a28e(arg2, &var_2e8, r15, r14);
    *arg1 = 0x200;
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h9ab718a9282ab7e1(
        &var_2e8);
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h23361293c27a3604(&var_308)
}
