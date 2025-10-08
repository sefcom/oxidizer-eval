
  fn rg::generate::ha8541e15fb044551(arg1: *mut i8, arg2: i8) -> i64

{
    let mut var_78: ();
    
    match arg2
    {
        0 =>
        {
            rg::flags::doc::man::generate::h4d97e8b2ccfffee2(&var_78);
        }
        1 =>
        {
            rg::flags::complete::bash::generate::h0c2749dd62c68378(&var_78);
        }
        2 =>
        {
            rg::flags::complete::zsh::generate::h88f53c6def813290(&var_78);
        }
        3 =>
        {
            rg::flags::complete::fish::generate::heb884ffa6677645b(&var_78);
        }
        4 =>
        {
            rg::flags::complete::powershell::generate::h627f818806070f85(&var_78);
        }
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_60: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let var_70: i64;
    let var_68: i64;
    let mut rax_3: i64;
    let mut rdx: i64;
    rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(var_70, var_68);
    let mut var_48: i64 = rax_3;
    let var_40: i64 = rdx;
    let mut var_58: *mut i64 = &var_48;
    let var_50: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    let mut var_38: *mut c_void = &data_7ea800;
    let var_30: i64 = 2;
    let var_18: i64 = 0;
    let var_28: *mut *mut i64 = &var_58;
    let var_20: i64 = 1;
    let rax_4: *mut c_void =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        &var_60, &var_38);
    
    if rax_4 == 0
    {
        *arg1 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rax_4);
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_78)
}
