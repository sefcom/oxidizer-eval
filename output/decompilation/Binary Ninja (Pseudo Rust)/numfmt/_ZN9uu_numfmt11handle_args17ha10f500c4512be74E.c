
  fn uu_numfmt::handle_args::ha10f500c4512be74(arg1: *mut i128, arg2: *mut i64) -> *mut i128

{
    let var_28: i128 = arg1[3];
    let var_38: i128 = arg1[2];
    let var_48: i128 = arg1[1];
    let mut var_58: i128 = *arg1;
    let mut i: *mut i128;
    
    do
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h16d90f60093eeb35(&var_58);
        
        if rax_1 == 0
        {
            return nullptr;
        }
        
        i = uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(rax_1, rdx_1, arg2);
    } while i == 0;
    
    i
}
