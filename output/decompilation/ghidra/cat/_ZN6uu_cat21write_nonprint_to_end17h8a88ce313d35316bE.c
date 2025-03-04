long _ZN6uu_cat21write_nonprint_to_end17h8a88ce313d35316bE
               (long param_1,long param_2,undefined8 param_3,ushort *param_4,undefined8 param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  ushort *puVar4;
  long lVar5;
  ushort local_4c;
  byte local_4a;
  char local_49;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_38 = param_2 + param_1;
  local_48 = param_5;
  local_40 = param_1;
  pbVar2 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9b5a5efb688e09cfE
                             (&local_40);
  lVar5 = 0;
  if (pbVar2 != (byte *)0x0) {
    do {
      bVar1 = *pbVar2;
      uVar3 = local_48;
      puVar4 = param_4;
      if (bVar1 != 9) {
        if (bVar1 == 0x7f) {
          uVar3 = 2;
          puVar4 = (ushort *)"^?";
        }
        else {
          if (bVar1 == 10) {
            return lVar5;
          }
          if (bVar1 < 0x20) {
            local_4c = CONCAT11(bVar1,0x5e) | 0x4000;
            uVar3 = 2;
          }
          else if ((byte)(bVar1 - 0x20) < 0x5f) {
            local_4c = CONCAT11(local_4c._1_1_,bVar1);
            uVar3 = 1;
          }
          else if ((char)bVar1 < -0x60) {
            local_49 = bVar1 - 0x40;
            local_4c = 0x2d4d;
            local_4a = 0x5e;
            uVar3 = 4;
          }
          else {
            if (0x5e < (byte)(bVar1 + 0x60)) {
              uVar3 = 4;
              puVar4 = (ushort *)&DAT_00113f58;
              goto LAB_001b0e4f;
            }
            local_4a = bVar1 & 0x7f;
            local_4c = 0x2d4d;
            uVar3 = 3;
          }
          puVar4 = &local_4c;
        }
      }
LAB_001b0e4f:
      uVar3 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (param_3,puVar4,uVar3);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0fc6b3beec18547fE
                (uVar3,&PTR_s_src_uu_cat_src_cat_rs_00218838);
      lVar5 = lVar5 + 1;
      pbVar2 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9b5a5efb688e09cfE
                                 (&local_40);
    } while (pbVar2 != (byte *)0x0);
  }
  return lVar5;
}