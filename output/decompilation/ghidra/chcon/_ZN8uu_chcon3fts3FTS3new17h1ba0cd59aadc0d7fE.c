void _ZN8uu_chcon3fts3FTS3new17h1ba0cd59aadc0d7fE
               (int *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint *puVar4;
  undefined auVar5 [16];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  auVar5 = _ZN4core4iter6traits8iterator8Iterator3map17h25589f7664dffb69E(param_2,param_3);
  uVar2 = _ZN4core4iter6traits8iterator8Iterator3map17h25589f7664dffb69E(auVar5._0_8_,auVar5._8_8_);
  _ZN4core4iter6traits8iterator8Iterator7collect17hbb008879b6ab862cE(&local_60,uVar2);
  if (local_60 == 0x12) {
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
    local_68 = local_48;
    if (local_48 == 0) {
      *param_1 = 0x10;
      *(char **)(param_1 + 2) = "FTS::new()";
      param_1[4] = 10;
      param_1[5] = 0;
      param_1[6] = 3;
      param_1[7] = 0x14;
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator5chain17h75d240e117d26bc3E
                (&local_60,CONCAT44(uStack_4c,uStack_50),
                 local_48 * 0x10 + CONCAT44(uStack_4c,uStack_50));
                    /* try { // try from 00163252 to 0016325c has its CatchHandler @ 0016334a */
      _ZN4core4iter6traits8iterator8Iterator7collect17hf56f411ed6263585E(&local_98,&local_60);
      lVar3 = (*(code *)PTR_fts_open_001f7068)(CONCAT44(uStack_8c,uStack_90),param_4,0);
      if (lVar3 == 0) {
        puVar4 = (uint *)(*(code *)PTR___errno_location_001f6e90)();
        uVar1 = *puVar4;
        *param_1 = 0x10;
        *(char **)(param_1 + 2) = "fts_open()";
        param_1[4] = 10;
        param_1[5] = 0;
        *(ulong *)(param_1 + 6) = (ulong)uVar1 << 0x20 | 2;
      }
      else {
        *(long *)(param_1 + 2) = lVar3;
        param_1[4] = 0;
        param_1[5] = 0;
        *param_1 = 0x12;
      }
      _ZN4core3ptr60drop_in_place_LT_alloc__vec__Vec_LT__BP_const_u20_i8_GT__GT_17h8450a7eb13650f71E
                (local_98,CONCAT44(uStack_8c,uStack_90));
    }
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_alloc__ffi__c_str__CString_GT__GT_17h9525a83a75566948E
              (&local_78);
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = local_20;
    *(undefined8 *)(param_1 + 0xc) = local_30;
    *(undefined8 *)(param_1 + 0xe) = uStack_28;
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 10) = uStack_38;
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_4c,uStack_50);
    *(long *)(param_1 + 6) = local_48;
    *(ulong *)(param_1 + 1) = CONCAT44(local_58,uStack_5c);
    *(ulong *)(param_1 + 3) = CONCAT44(uStack_50,uStack_54);
    *param_1 = local_60;
  }
  return;
}