
  fn zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query::hb4cde70ad6f18db1(arg1: *mut c_void, arg2: *mut c_void) -> u64

{
    let mut rax: i8;
    let mut rdx: u64;
    rax = zoxide::util::current_time::hc177626caa3eacce();
    
    if (rax & 1) != 0
    {
        return rdx;
    }
    
    let mut var_90: i64;
    zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::get_stream::h9fa08a87e4cae412(
        &var_90, arg1, arg2, rdx);
    let rax_1: i64 = var_90;
    let var_88: u64;
    let mut r15_1: u64 = var_88;
    
    if -(rax_1) != -0x8000000000000000
    {
        let var_20: i64;
        let var_98_1: i64 = var_20;
        let var_30: i128;
        let var_a8_1: i128 = var_30;
        let var_40: i128;
        let var_b8_1: i128 = var_40;
        let var_50: i128;
        let var_c8_1: i128 = var_50;
        let var_60: i128;
        let var_d8_1: i128 = var_60;
        let var_70: i128;
        let var_e8_1: i128 = var_70;
        let var_80: i128;
        let var_f8_1: i128 = var_80;
        let mut var_108: i64 = rax_1;
        let var_100_1: u64 = r15_1;
        let mut rax_2: u64;
        
        if *arg1.byte_offset(0x49) != 0
        {
            rax_2 = zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_interactive::hb59cdf2fd68d3de0(arg1, &var_108, rdx);
        }
        else if *arg1.byte_offset(0x4a) == 0
        {
            rax_2 = zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_first::h2951b26d66defb32(arg1, &var_108);
        }
        else
        {
            rax_2 = zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_list::h1793189bc91b0810(arg1, &var_108);
        }
        
        r15_1 = rax_2;
        core::ptr::drop_in_place$LT$zoxide..db..stream..Stream$GT$::h136fa476fd0ea1b1(&var_108);
    }
    
    r15_1
}
