
  fn zoxide::util::rename::hf35ce6b72c32e43b(arg1: *mut c_void, arg2: i64) -> u64

{
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h08b3da5308d0badb(arg1);
    let mut rax_1: i64;
    let mut rdx_2: i64;
    rax_1 =
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h4cd980ea14f59bb6(arg2);
    let mut rax_2: i64;
    let mut rdx_4: u64;
    rax_2 = std::fs::rename::ha1c7642cfecfcafe(rax, rdx_1, rax_1);
    let mut var_48: i64;
    let mut r13_1: i64;
    
    if rax_2 == 0
    {
        r13_1 = 0;
    }
    else
    {
        r13_1 = rax_2;
        
        if std::io::error::Error::kind::h135fe00c4e7365f3(rax_2) == 1
        {
            var_48 = r13_1;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&var_48);
            let mut rax_4: i64;
            rax_4 = std::fs::rename::ha1c7642cfecfcafe(rax, rdx_1, rax_1);
            
            if rax_4 == 0
            {
                r13_1 = 0;
            }
            else
            {
                r13_1 = rax_4;
                std::io::error::Error::kind::h135fe00c4e7365f3(rax_4);
            }
        }
    }
    
    var_48 = rax;
    let var_40: i64 = rdx_1;
    let var_38: i64 = rax_1;
    let var_30: i64 = rdx_2;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::h6779511d8a431032(r13_1, &var_48, rdx_4)
}
