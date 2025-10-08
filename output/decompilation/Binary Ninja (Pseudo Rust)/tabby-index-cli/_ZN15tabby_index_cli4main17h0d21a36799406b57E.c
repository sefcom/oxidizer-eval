
  fn tabby_index_cli::main::h0d21a36799406b57() -> u64

{
    let mut var_98: i64;
    clap_builder::derive::Parser::parse::he3b59a741ba83229(&var_98);
    let mut var_d8: i128;
    tabby_common::path::index_dir::he3992c1c322ffd91(&var_d8);
    let mut var_f8: i128;
    let mut var_e8: i64;
    let mut var_c8: i64;
    let var_70: i64;
    let mut r15: i64;
    
    if -(var_70) == -0x8000000000000000
    {
        var_e8 = var_c8;
        var_f8 = var_d8;
        r15 = var_98;
        
        if r15 == 0
        {
            goto 'label_674ce1;
        }
        
        goto 'label_674c61;
    }
    
    let var_60: i64;
    var_e8 = var_60;
    var_f8 = var_70;
    core::mem::drop::h9b3c690aea6436ea(&var_d8);
    r15 = var_98;
    let mut result: u64;
    let mut var_58: i32;
    let var_48: i128;
    
    if r15 != 0
    {
        'label_674c61:
        let mut var_90: ();
        
        if r15 != 1
        {
            result = tabby_index_cli::commands::head::run_head_cli::h5b6ca3e30a296988(*var_f8[8], 
                var_e8, &var_90);
            core::ptr::drop_in_place$LT$tabby_index_cli..commands..head..HeadArgs$GT$::hbb26def184db11dd(&var_90);
        }
        else
        {
            tabby_index_cli::commands::bench::run_bench_cli::hcf903498da3f6e9d(&var_58, *var_f8[8], 
                var_e8, &var_90);
            
            if var_58 != -0x8000000000000000
            {
                let var_c8_1: i64 = var_48;
                var_d8 = var_58;
                result =
                    tabby_index_cli::main::_$u7b$$u7b$closure$u7d$$u7d$::h17eec3a34d3b36d3(&var_d8);
                core::ptr::drop_in_place$LT$tabby_index_cli..commands..bench..BenchArgs$GT$::hd7445ae24e69f1cd(&var_90);
            }
            else
            {
                core::ptr::drop_in_place$LT$tabby_index_cli..commands..bench..BenchArgs$GT$::hd7445ae24e69f1cd(&var_90);
                result = 0;
            }
        }
    }
    else
    {
        'label_674ce1:
        tabby_index_cli::commands::inspect::run_inspect_cli::h0366ea9782c6f029(&var_58, *var_f8[8]);
        
        if var_58 != 0x12
        {
            let var_28: i64;
            let var_a8_1: i64 = var_28;
            let var_38: i128;
            let var_b8_1: i128 = var_38;
            var_c8 = var_48;
            var_d8 = var_58;
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hdc065b01342578bc(&var_d8);
        }
        else
        {
            result = 0;
        }
    }
    core::mem::drop::h9b3c690aea6436ea(&var_f8);
    result
}
