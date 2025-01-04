void __rustcall
uu_dd::read_helper(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  ::alloc::vec::Vec<T,A>::resize(param_3,param_4,0xdd);
  if (*(char *)(*(long *)(param_2 + 8) + 0x68) == '\0') {
    Input::fill_consecutive(&local_60,param_2,param_3);
  }
  else {
    Input::fill_blocks(&local_60,param_2,param_3,*(undefined *)(*(long *)(param_2 + 8) + 0x69));
  }
  if (local_60 == 0) {
    uStack_68 = local_40;
    uStack_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_80 = local_58;
    if ((local_58 == 0) && (CONCAT44(uStack_4c,local_50) == 0)) {
      param_1[3] = CONCAT44(uStack_44,uStack_48);
      param_1[4] = local_40;
      param_1[1] = 0;
      param_1[2] = CONCAT44(uStack_4c,local_50);
      *param_1 = 0;
    }
    else {
      lVar1 = *(long *)(param_2 + 8);
      if (*(char *)(lVar1 + 0x6a) != '\0') {
        read_helper::perform_swab(param_3[1],param_3[2]);
        lVar1 = *(long *)(param_2 + 8);
      }
      if (*(char *)(lVar1 + 0x50) != '\a') {
        _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_60,param_3);
        blocks::conv_block_unblock_helper(&local_38,&local_60,lVar1 + 0x50,&local_80);
                    /* try { // try from 001d8c32 to 001d8c39 has its CatchHandler @ 001d8c71 */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(param_3);
        param_3[2] = local_28;
        *param_3 = local_38;
        param_3[1] = uStack_30;
      }
      param_1[3] = CONCAT44(uStack_6c,uStack_70);
      param_1[4] = uStack_68;
      param_1[1] = local_80;
      param_1[2] = CONCAT44(uStack_74,uStack_78);
      *param_1 = 0;
    }
  }
  else {
    param_1[1] = local_58;
    *param_1 = 1;
  }
  return;
}