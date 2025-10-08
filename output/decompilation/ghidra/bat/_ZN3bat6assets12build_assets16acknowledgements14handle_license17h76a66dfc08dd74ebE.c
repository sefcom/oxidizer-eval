void _ZN3bat6assets12build_assets16acknowledgements14handle_license17h76a66dfc08dd74ebE
               (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined7 uStack_88;
  undefined uStack_81;
  undefined7 local_80;
  undefined uStack_79;
  undefined8 local_78;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  code *local_38;
  undefined local_30 [8];
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_50 = param_2;
  local_48 = param_3;
  _ZN3std2fs14read_to_string17h512db2d9218e57c1E(&local_98);
  local_68 = CONCAT44(uStack_94,local_98);
  uVar1 = CONCAT44(uStack_8c,uStack_90);
  uVar2 = CONCAT17(uStack_81,uStack_88);
  uStack_60 = uVar1;
  local_58 = uVar2;
                    /* try { // try from 00533132 to 005331d4 has its CatchHandler @ 0053321d */
  cVar3 = _ZN3bat6assets12build_assets16acknowledgements34include_license_in_acknowledgments17h502a9fe06636a5abE
                    (uVar1,uVar2,extraout_RDX,-local_68);
  if (cVar3 == '\0') {
    cVar3 = _ZN3bat6assets12build_assets16acknowledgements38license_not_needed_in_acknowledgements17h305a91287eb31f3eE
                      (uVar1,uVar2);
    if (cVar3 == '\0') {
      local_40 = &local_50;
      local_38 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h658aa54aded8ca97E;
      local_98 = 0x7cdfa8;
      uStack_94 = 0;
      uStack_90 = 1;
      uStack_8c = 0;
      local_78 = 0;
      uStack_88 = SUB87(&local_40,0);
      uStack_81 = (undefined)((ulong)&local_40 >> 0x38);
      local_80 = 1;
      uStack_79 = 0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
                (local_30,0,extraout_RDX_00,&local_98);
      uStack_94._3_1_ = local_30[0];
      uStack_90 = local_30._1_4_;
      uStack_8c._0_3_ = local_30._5_3_;
      uStack_8c._3_1_ = (undefined)uStack_28;
      uStack_88 = (undefined7)((ulong)uStack_28 >> 8);
      uStack_81 = (undefined)local_20;
      local_80 = (undefined7)((ulong)local_20 >> 8);
      *param_1 = 0xb;
      *(undefined4 *)(param_1 + 1) = local_98;
      *(undefined4 *)(param_1 + 5) = uStack_94;
      *(undefined4 *)(param_1 + 9) = uStack_90;
      *(undefined4 *)(param_1 + 0xd) = uStack_8c;
      *(undefined8 *)(param_1 + 0x10) = uStack_28;
      *(undefined8 *)(param_1 + 0x18) = local_20;
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0x8000000000000000;
      *param_1 = 0xd;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_68);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = local_58;
    *(long *)(param_1 + 8) = local_68;
    *(undefined8 *)(param_1 + 0x10) = uStack_60;
    *param_1 = 0xd;
  }
  return;
}