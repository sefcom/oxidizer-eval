undefined  [16]
_ZN9uu_base646uumain6uumain17h6c6308a3430c0a47E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_88 [16];
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN9uu_base3211base_common19parse_base_cmd_args17hffbaf3b1c4a659f4E(&local_78,param_1,param_2);
  local_48 = CONCAT44(uStack_74,local_78);
  uStack_40 = CONCAT44(uStack_6c,uStack_70);
  uVar1 = CONCAT44(uStack_64,local_68);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = uStack_40;
  if (local_48 != 2) {
    uStack_20 = local_50;
    uStack_1c = uStack_4c;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    uStack_28 = uStack_58;
    uStack_24 = uStack_54;
                    /* try { // try from 00163dd5 to 00163de4 has its CatchHandler @ 00163e6d */
    local_38 = uVar1;
    (*(code *)PTR__ZN9uu_base3211base_common9get_input17hb11f0dc280e05835E_00215288)
              (&local_78,&local_48);
    auVar2._4_4_ = uStack_6c;
    auVar2._0_4_ = uStack_70;
    auVar2._12_4_ = uStack_64;
    auVar2._8_4_ = local_68;
    if (local_78 == 1) {
      _ZN4core3ptr51drop_in_place_LT_uu_base32__base_common__Config_GT_17hdba3db2b40d88a37E
                (uVar1,CONCAT44(uStack_2c,uStack_30));
    }
    else {
      uStack_58 = uStack_28;
      uStack_54 = uStack_24;
      local_50 = uStack_20;
      uStack_4c = uStack_1c;
      local_68 = (undefined4)local_38;
      uStack_64 = local_38._4_4_;
      uStack_60 = uStack_30;
      uStack_5c = uStack_2c;
      local_78 = (int)local_48;
      uStack_74 = local_48._4_4_;
      uStack_70 = (undefined4)uStack_40;
      uStack_6c = uStack_40._4_4_;
                    /* try { // try from 00163e2f to 00163e3b has its CatchHandler @ 00163e5a */
      auVar2 = _ZN9uu_base3211base_common12handle_input17h611ac760698ac76bE(local_88,&local_78);
      _ZN4core3ptr86drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uu_base32__base_common__ReadSeek_GT__GT_17hd3cbcf321e9f7917E
                (local_88);
    }
  }
  return auVar2;
}