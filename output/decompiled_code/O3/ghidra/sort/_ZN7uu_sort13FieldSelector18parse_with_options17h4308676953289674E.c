void __rustcall
uu_sort::FieldSelector::parse_with_options(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_f0;
  undefined3 local_e8;
  undefined uStack_e5;
  undefined3 uStack_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined2 uStack_da;
  undefined3 local_d8;
  undefined uStack_d5;
  undefined3 uStack_d4;
  undefined uStack_d1;
  long local_d0;
  undefined uStack_c8;
  undefined7 uStack_c7;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_78;
  long lStack_70;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  local_60 = param_3;
  _<uu_sort::KeySettings_as_core::default::Default>::default();
  local_dc = 0x600;
  local_e0 = 0;
  parse_with_options::parse_key_settings(&local_d0,uVar3,uVar4,&local_e0);
  if (local_d0 == -0x8000000000000000) {
    KeyPosition::new(&local_b8,uVar1,uVar2,1,uStack_c8);
    local_88 = CONCAT44(uStack_9c,local_a0);
    local_98 = CONCAT44(uStack_ac,uStack_b0);
    uStack_90 = CONCAT44(uStack_a4,uStack_a8);
    if (CONCAT44(uStack_b4,local_b8) == 0) {
      lVar5 = *local_60;
      if (lVar5 == 0) {
        local_a0._0_1_ = 2;
LAB_0022080b:
        local_b8 = (undefined4)local_58;
        uStack_b4 = local_58._4_4_;
        uStack_b0 = (undefined4)uStack_50;
        uStack_ac = uStack_50._4_4_;
        uStack_a4 = CONCAT31(uStack_d4,uStack_d5);
        uStack_a8 = CONCAT31((int3)_local_d8,(undefined)local_a0);
        new(param_1,&local_98,&local_b8,CONCAT26(uStack_da,CONCAT24(local_dc,local_e0)));
        return;
      }
      lVar6 = local_60[1];
      parse_with_options::parse_key_settings(&local_d0,local_60[2],local_60[3],&local_e0);
      if (local_d0 == -0x8000000000000000) {
        KeyPosition::new(&local_b8,lVar5,lVar6,0,uStack_c8);
        local_78 = CONCAT44(uStack_ac,uStack_b0);
        lStack_70 = CONCAT44(uStack_a4,uStack_a8);
        local_e8 = (undefined3)((uint)local_a0 >> 8);
        uStack_e5 = (undefined)uStack_9c;
        uStack_e4 = (undefined3)((uint)uStack_9c >> 8);
        local_f0 = CONCAT13(uStack_e5,local_e8);
        if (CONCAT44(uStack_b4,local_b8) == 0) {
          _local_d8 = CONCAT13(uStack_e5,local_e8);
          _uStack_d4 = CONCAT13(uStack_d1,uStack_e4);
          local_58 = local_78;
          uStack_50 = lStack_70;
          goto LAB_0022080b;
        }
      }
      else {
        lStack_70 = CONCAT71(uStack_c7,uStack_c8);
        local_e8 = (undefined3)((uint)local_c0 >> 8);
        uStack_e5 = (undefined)uStack_bc;
        uStack_e4 = (undefined3)((uint)uStack_bc >> 8);
        local_78 = local_d0;
        local_f0 = CONCAT13(uStack_e5,local_e8);
        local_a0._0_1_ = (undefined)local_c0;
      }
      *param_1 = local_78;
      param_1[1] = lStack_70;
      *(undefined4 *)((long)param_1 + 0x11) = local_f0;
      *(uint *)((long)param_1 + 0x14) = CONCAT31(uStack_e4,local_f0._3_1_);
      *(undefined *)(param_1 + 2) = (undefined)local_a0;
      goto LAB_002207f3;
    }
  }
  else {
    local_88 = CONCAT44(uStack_bc,local_c0);
    uStack_90 = CONCAT71(uStack_c7,uStack_c8);
    local_98 = local_d0;
  }
  param_1[2] = local_88;
  *param_1 = local_98;
  param_1[1] = uStack_90;
LAB_002207f3:
  *(undefined *)((long)param_1 + 0x37) = 2;
  return;
}