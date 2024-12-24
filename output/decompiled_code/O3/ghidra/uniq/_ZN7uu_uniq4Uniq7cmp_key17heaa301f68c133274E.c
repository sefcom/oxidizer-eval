undefined4 __rustcall
uu_uniq::Uniq::cmp_key(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined local_28 [8];
  long local_20;
  long local_18;
  
  skip_fields(local_28,*param_1,param_1[1],param_2,param_3);
  lVar2 = local_18;
  if (param_1[2] == 0) {
    if (param_1[4] == 0) {
      if (local_18 != 0) {
        if (*(char *)((long)param_1 + 0x34) == '\0') {
LAB_001bd132:
          local_40 = local_18 + local_20;
          local_48 = local_20;
          uVar1 = cmp_keys::___closure__(param_4,&local_48,&DAT_00230ee8);
          goto LAB_001bd186;
        }
        lVar3 = 0;
        goto LAB_001bd096;
      }
    }
    else if (local_18 != 0) {
      lVar2 = param_1[5];
      if (*(char *)((long)param_1 + 0x34) == '\0') goto LAB_001bd12d;
      lVar3 = 0;
      goto LAB_001bd091;
    }
  }
  else {
    if (param_1[4] != 0) {
      lVar2 = param_1[5];
    }
    if (local_18 != 0) {
      lVar3 = param_1[3];
      if (*(char *)((long)param_1 + 0x34) == '\0') {
        if (lVar3 == 0) {
LAB_001bd12d:
          if (lVar2 == local_18) goto LAB_001bd132;
          lVar3 = 0;
        }
        local_40 = local_18 + local_20;
        local_48 = local_20;
        local_38 = lVar3;
        local_30 = lVar2;
        uVar1 = cmp_keys::___closure__(param_4,&local_48,&DAT_00230f20);
        goto LAB_001bd186;
      }
LAB_001bd091:
      if (lVar3 == 0) {
LAB_001bd096:
        if (lVar2 == local_18) {
          local_40 = local_18 + local_20;
          local_48 = local_20;
                    /* try { // try from 001bd0ac to 001bd185 has its CatchHandler @ 001bd19c */
          uVar1 = cmp_keys::___closure__(param_4,&local_48,&DAT_00230fc8);
          goto LAB_001bd186;
        }
      }
      local_40 = local_18 + local_20;
      local_48 = local_20;
      local_38 = lVar3;
      local_30 = lVar2;
      uVar1 = cmp_keys::___closure__(param_4,&local_48,&DAT_00231000);
      goto LAB_001bd186;
    }
  }
  local_40 = local_18 + local_20;
  local_48 = local_20;
  uVar1 = cmp_keys::___closure__(param_4,&local_48,&DAT_00230ee8);
LAB_001bd186:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(local_28);
  return uVar1;
}