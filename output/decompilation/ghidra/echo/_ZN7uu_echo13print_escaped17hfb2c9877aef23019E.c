void _ZN7uu_echo13print_escaped17hfb2c9877aef23019E
               (undefined2 *param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  code *pcVar2;
  byte bVar3;
  byte *in_RAX;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  byte extraout_DL;
  byte extraout_DL_00;
  byte extraout_DL_01;
  byte *pbVar9;
  undefined8 uVar10;
  bool bVar11;
  byte local_5b;
  byte local_5a;
  byte local_59;
  undefined2 *local_58;
  long local_50;
  byte *local_48;
  long local_40;
  long local_38;
  
  local_38 = param_3 + param_2;
  lVar8 = 0;
  local_58 = param_1;
  local_40 = param_2;
  do {
    while( true ) {
      local_50 = 0;
      if (lVar8 == 0) {
        in_RAX = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h67bb1ffa54fe1617E
                                   (&local_40);
      }
      if (in_RAX == (byte *)0x0) {
        *local_58 = 0;
        return;
      }
      pbVar7 = &local_5a;
      bVar3 = *in_RAX;
      if (*in_RAX == 0x5c) break;
LAB_001a476f:
      local_5a = bVar3;
      lVar6 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (param_4,pbVar7,1);
      in_RAX = local_48;
      lVar8 = local_50;
      if (lVar6 != 0) {
        *(long *)(local_58 + 4) = lVar6;
        *(undefined *)local_58 = 1;
        return;
      }
    }
    puVar4 = (undefined8 *)
             _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hedc8c424b7d46203E
                       (&local_50,&local_40);
    if (((char *)*puVar4 != (char *)0x0) && (cVar1 = *(char *)*puVar4, (byte)(cVar1 - 0x31U) < 7)) {
      uVar5 = _ZN7uu_echo22parse_backslash_number17he56ed8545e2dc3bcE(&local_50,0,cVar1);
      bVar3 = extraout_DL;
      if ((uVar5 & 1) == 0) {
        _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002060f0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_001a476f;
    }
    bVar11 = local_50 == 0;
    local_50 = 0;
    pbVar7 = local_48;
    if (bVar11) {
      pbVar7 = (byte *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h67bb1ffa54fe1617E
                                 (&local_40);
    }
    if (pbVar7 == (byte *)0x0) {
      pbVar7 = &DAT_0011b41b;
      bVar3 = local_5a;
      goto LAB_001a476f;
    }
    uVar10 = 1;
    switch(*pbVar7) {
    case 0x30:
      uVar5 = _ZN7uu_echo22parse_backslash_number17he56ed8545e2dc3bcE(&local_50,1);
      if ((uVar5 & 1) == 0) {
        pbVar9 = &DAT_0011b426;
      }
      else {
        pbVar9 = &local_5b;
        local_5b = extraout_DL_00;
      }
      break;
    default:
      local_5a = 0x5c;
      uVar10 = 2;
      pbVar9 = &local_5a;
      local_59 = *pbVar7;
      break;
    case 0x5c:
      pbVar9 = &DAT_0011b41b;
      break;
    case 0x61:
      pbVar9 = &DAT_0011b41c;
      break;
    case 0x62:
      pbVar9 = &DAT_0011b41d;
      break;
    case 99:
      *(undefined *)((long)local_58 + 1) = 1;
      *(undefined *)local_58 = 0;
      return;
    case 0x65:
      pbVar9 = &DAT_0011b41e;
      break;
    case 0x66:
      pbVar9 = &DAT_0011b41f;
      break;
    case 0x6e:
      pbVar9 = &DAT_0011b420;
      break;
    case 0x72:
      pbVar9 = &DAT_0011b421;
      break;
    case 0x74:
      pbVar9 = &DAT_0011b422;
      break;
    case 0x76:
      pbVar9 = &DAT_0011b423;
      break;
    case 0x78:
      uVar5 = _ZN7uu_echo22parse_backslash_number17he56ed8545e2dc3bcE(&local_50,2);
      uVar10 = 2;
      pbVar9 = &DAT_0011b424;
      if ((uVar5 & 1) != 0) {
        pbVar9 = &local_5b;
        uVar10 = 1;
        local_5b = extraout_DL_01;
      }
    }
    lVar6 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                      (param_4,pbVar9,uVar10);
    in_RAX = local_48;
    lVar8 = local_50;
    if (lVar6 != 0) {
      *(long *)(local_58 + 4) = lVar6;
      *(undefined *)local_58 = 1;
      return;
    }
  } while( true );
}