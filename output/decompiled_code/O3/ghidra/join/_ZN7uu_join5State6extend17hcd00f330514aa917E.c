void __rustcall uu_join::State::extend(long *param_1,long param_2,long param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  next_line(&local_e8);
  lVar4 = CONCAT44(uStack_e4,local_e8);
  if (lVar4 != -0x7fffffffffffffff) {
    uVar1 = *(undefined *)(param_3 + 0x120);
    do {
      local_a8 = CONCAT44(uStack_cc,local_d0);
      local_b8 = CONCAT44(uStack_dc,uStack_e0);
      uStack_b0 = uStack_d8;
      uVar2 = uStack_b0;
      local_40 = CONCAT44(uStack_c4,local_c8);
      uStack_38 = CONCAT44(uStack_bc,uStack_c0);
      uStack_b0._0_4_ = (undefined4)uStack_d8;
      uStack_b0._4_4_ = (undefined4)((ulong)uStack_d8 >> 0x20);
      local_58 = uStack_e0;
      uStack_54 = uStack_dc;
      uStack_50 = (undefined4)uStack_b0;
      uStack_4c = uStack_b0._4_4_;
      uStack_b0 = uVar2;
      local_60 = lVar4;
      local_48 = local_a8;
      if (lVar4 == -0x8000000000000000) {
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(&local_60);
        *param_1 = -0x8000000000000000;
        return;
      }
      uStack_90 = CONCAT44(uStack_dc,uStack_e0);
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      local_88 = (undefined4)uStack_b0;
      uStack_84 = uStack_b0._4_4_;
      uStack_80 = local_d0;
      uStack_7c = uStack_cc;
      local_98 = lVar4;
                    /* try { // try from 00172a1b to 00172a4d has its CatchHandler @ 00172b4e */
      auVar5 = (*(code *)PTR_get_current_key_00239f48)(param_2);
      auVar6 = (*(code *)PTR_get_field_00239ee0)(&local_98,*(undefined8 *)(param_2 + 0x40));
      cVar3 = Input<Sep>::compare(uVar1,auVar5._0_8_,auVar5._8_8_,auVar6._0_8_,auVar6._8_8_);
      if (cVar3 != '\0') {
        param_1[4] = CONCAT44(uStack_74,local_78);
        param_1[5] = CONCAT44(uStack_6c,uStack_70);
        param_1[2] = CONCAT44(uStack_84,local_88);
        param_1[3] = CONCAT44(uStack_7c,uStack_80);
        *param_1 = local_98;
        param_1[1] = uStack_90;
        return;
      }
      local_c8 = local_78;
      uStack_c4 = uStack_74;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
      uStack_d8 = CONCAT44(uStack_84,local_88);
      local_d0 = uStack_80;
      uStack_cc = uStack_7c;
      local_e8 = (undefined4)local_98;
      uStack_e4 = local_98._4_4_;
      uStack_e0 = (undefined4)uStack_90;
      uStack_dc = uStack_90._4_4_;
      ::alloc::vec::Vec<T,A>::push(param_2,&local_e8);
      next_line(&local_e8,param_2,param_3);
      lVar4 = CONCAT44(uStack_e4,local_e8);
    } while (lVar4 != -0x7fffffffffffffff);
  }
  local_a8 = CONCAT44(uStack_cc,local_d0);
  local_b8 = CONCAT44(uStack_dc,uStack_e0);
  uStack_b0 = uStack_d8;
  local_e8 = uStack_e0;
  uStack_e4 = uStack_dc;
  uStack_e0 = (undefined4)uStack_d8;
  uStack_dc = uStack_d8._4_4_;
  uStack_d8 = local_a8;
  lVar4 = ::alloc::boxed::Box<T>::new(&local_e8);
  param_1[1] = lVar4;
  param_1[2] = (long)&PTR_drop_in_place<uu_join_JoinError>_00233258;
  *param_1 = -0x7fffffffffffffff;
  return;
}