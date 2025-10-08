
  fn uu_numfmt::handle_args::h88f782532eeab52a(arg1: *mut i128, arg2: *mut i8) -> *mut i128

{
    let var_38: i128 = arg1[3];
    let var_48: i128 = arg1[2];
    let var_58: i128 = arg1[1];
    let mut var_68: i128 = *arg1;
    let mut i: *mut i128;
    
    do
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h92623d70016f3062(&var_68);
        
        if rax_1 == 0
        {
            return nullptr;
        }
        
        i = uu_numfmt::format_and_handle_validation::hcfab93a3f32ae107(rax_1, rdx_1, arg2);
    } while i == 0;
    
    i
}
