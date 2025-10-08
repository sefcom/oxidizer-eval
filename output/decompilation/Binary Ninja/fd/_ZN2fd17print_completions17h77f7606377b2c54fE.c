
  int64_t fd::print_completions::h77f7606377b2c54f(int16_t* arg1, char arg2)

{
    char var_2e8;
    std::env::args::h3c7cd0de4b395b7d(&var_2e8);
    int64_t var_308;
    _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0d29c3efeb1bccd1(&var_308, &var_2e8);
    core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$std..env..ArgsOs$C$$LT$clap_lex..RawArgs$u20$as$u20$core..convert..From$LT$std..env..ArgsOs$GT$$GT$..from..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$::h2eb5350fc587bf98(&var_2e8);
    char const* const r15 = "fdignorefailed to spawn thread/r…";
    uint64_t r14 = 2;
    
    if (!(0 + -(var_308)))
    {
        int64_t var_300;
        int64_t var_2f8;
        int16_t* rax_1;
        int64_t rdx_1;
        rax_1 = std::path::Path::file_stem::hc69c2d2c61933548(var_300, var_2f8);
        
        if (rax_1)
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_2e8, rax_1, rdx_1);
            char temp1_1 = var_2e8;
            r14 = 2;
            uint64_t var_2d8;
            
            if (!temp1_1)
                r14 = var_2d8;
            r15 = "fdignorefailed to spawn thread/r…";
            char* var_2e0;
            
            if (!temp1_1)
                r15 = var_2e0;
        }
    }
    
    _$LT$fd..cli..Opts$u20$as$u20$clap_builder..derive..CommandFactory$GT$::command::h4a26f65572a5aceb(&var_2e8);
    clap_builder::builder::command::Command::build::h6e34fc47b5b0ef38(&var_2e8);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_2f0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    clap_complete::aot::generator::generate::h7d3091434203a28e(arg2, &var_2e8, r15, r14);
    *arg1 = 0x200;
    core::ptr::drop_in_place$LT$clap_builder..builder..command..Command$GT$::h9ab718a9282ab7e1(
        &var_2e8);
    return core::ptr::drop_in_place$LT$regex..error..Error$GT$::h23361293c27a3604(&var_308);
}
