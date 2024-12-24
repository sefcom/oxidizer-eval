void __rustcall
uu_csplit::InputSplitter<I>::add_line_to_buffer
          (undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_58 = param_3;
  if (*(char *)(param_2 + 0x58) == '\0') {
    if (*(ulong *)(param_2 + 0x50) <= *(ulong *)(param_2 + 0x10)) {
                    /* try { // try from 00260496 to 002604a9 has its CatchHandler @ 00260515 */
      ::alloc::vec::Vec<T,A>::remove
                (&local_58,param_2,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003df828);
      local_28 = local_40;
      uStack_30 = uStack_48;
      local_40 = *(undefined8 *)(param_4 + 4);
      uStack_50 = *param_4;
      uStack_4c = param_4[1];
      uStack_48 = *(undefined8 *)(param_4 + 2);
                    /* try { // try from 002604d4 to 002604de has its CatchHandler @ 00260506 */
      ::alloc::vec::Vec<T,A>::push(param_2,&local_58);
      uStack_48 = local_28;
      uStack_50 = (undefined4)uStack_30;
      uStack_4c = uStack_30._4_4_;
      core::result::Result<T,E>::unwrap
                (param_1,&local_58,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_003df840);
      return;
    }
    local_40 = *(undefined8 *)(param_4 + 4);
    uStack_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = *(undefined8 *)(param_4 + 2);
    ::alloc::vec::Vec<T,A>::push(param_2,&local_58);
  }
  else {
    local_40 = *(undefined8 *)(param_4 + 4);
    uStack_50 = *param_4;
    uStack_4c = param_4[1];
    uStack_48 = *(undefined8 *)(param_4 + 2);
    ::alloc::vec::Vec<T,A>::insert(param_2,0,&local_58);
  }
  *param_1 = 0x8000000000000000;
  return;
}