
  fn just::justfile::Justfile::suggest_variable::h768f9f50c733e0a8(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let rax_1: i64 = *arg2.byte_offset(0x280);
    let r8: i64 = *arg2.byte_offset(0x288);
    let mut r10: i64 = rax_1;
    let mut r9: i64;
    r9 = rax_1 != 0;
    
    if rax_1 != 0
    {
        r10 = *arg2.byte_offset(0x290);
    }
    
    let mut var_48: i64 = r9;
    let var_40: i64 = 0;
    let var_38: i64 = rax_1;
    let var_30: i64 = r8;
    let var_28: i64 = r9;
    let var_20: i64 = 0;
    let var_18: i64 = rax_1;
    let var_10: i64 = r8;
    let var_8: i64 = r10;
    just::justfile::Justfile::find_suggestion::h616685109ae1a9e2(arg1, arg3, arg4, &var_48)
}
