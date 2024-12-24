void __rustcall
uu_ln::simple_backup_path
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_50);
  if (CONCAT44(uStack_4c,local_50) == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_50,CONCAT44(uStack_44,uStack_48),local_40)
    ;
    local_28 = local_40;
    local_38 = local_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uVar1 = core::slice::iter::Iter<T>::make_slice(param_4,param_5 + param_4);
                    /* try { // try from 001babcb to 001babd7 has its CatchHandler @ 001bac00 */
    ::alloc::vec::Vec<T,A>::append_elements(&local_38,uVar1);
    param_1[2] = local_28;
    *param_1 = CONCAT44(uStack_34,local_38);
    param_1[1] = CONCAT44(uStack_2c,uStack_30);
    return;
  }
  uVar1 = core::option::unwrap_failed(&PTR_s_src_uu_ln_src_ln_rs_0022d800);
                    /* catch() { ... } // from try @ 001babcb with catch @ 001bac00 */
                    /* try { // try from 001bac03 to 001bac0c has its CatchHandler @ 001bac15 */
  core::ptr::drop_in_place<alloc::string::String>(&local_38);
  _Unwind_Resume(uVar1);
  return;
}