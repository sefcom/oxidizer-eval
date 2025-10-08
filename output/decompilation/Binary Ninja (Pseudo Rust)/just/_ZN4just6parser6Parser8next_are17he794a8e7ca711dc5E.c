
  fn just::parser::Parser::next_are::he794a8e7ca711dc5(arg1: *mut c_void, arg2: *mut i8, arg3: i64) -> i64

{
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5a58b559c63dc861(
        arg1.byte_offset(0x38), *arg2);
    let mut rax: i64;
    let mut rdx: i64;
    rax = just::parser::Parser::rest::h006cb6290a6cc038(arg1);
    let mut var_80: i64 = rax;
    let var_78: i64 = rdx;
    let mut result: i64 = 0;
    let mut result_1: i64;
    let i: i8;
    
    do
    {
        result_1 = result;
        
        if arg3 == result
        {
            break;
        }
        
        let mut var_70: ();
        core::iter::traits::iterator::Iterator::try_fold::hc0d12f79d33f0a11(&var_70, &var_80);
        
        if i == 0x25
        {
            break;
        }
        
        result = result_1 + 1;
    } while i == arg2[result_1];
    result = arg3 == result_1;
    result
}
