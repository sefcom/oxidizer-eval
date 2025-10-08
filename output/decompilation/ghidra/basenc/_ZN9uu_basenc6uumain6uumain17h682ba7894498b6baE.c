undefined  [16]
_ZN9uu_basenc6uumain6uumain17h682ba7894498b6baE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_98 [16];
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  _ZN9uu_basenc14parse_cmd_args17h179f17a9a715c835E(&local_88,param_1,param_2);
  local_50 = CONCAT44(uStack_84,local_88);
  uStack_48 = CONCAT44(uStack_7c,uStack_80);
  uVar1 = CONCAT44(uStack_74,local_78);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = uStack_48;
  if (local_50 != 2) {
    uStack_28 = local_60;
    uStack_24 = uStack_5c;
    uStack_38 = uStack_70;
    uStack_34 = uStack_6c;
    uStack_30 = uStack_68;
    uStack_2c = uStack_64;
                    /* try { // try from 00166f1b to 00166f2a has its CatchHandler @ 00166fb8 */
    local_40 = uVar1;
    (*(code *)PTR__ZN9uu_base3211base_common9get_input17hb11f0dc280e05835E_00218c58)
              (&local_88,&local_50);
    auVar2._4_4_ = uStack_7c;
    auVar2._0_4_ = uStack_80;
    auVar2._12_4_ = uStack_74;
    auVar2._8_4_ = local_78;
    if (local_88 == 1) {
      _ZN4core3ptr51drop_in_place_LT_uu_base32__base_common__Config_GT_17h084e20302bc333b2E
                (uVar1,CONCAT44(uStack_34,uStack_38));
    }
    else {
      uStack_68 = uStack_30;
      uStack_64 = uStack_2c;
      local_60 = uStack_28;
      uStack_5c = uStack_24;
      local_78 = (undefined4)local_40;
      uStack_74 = local_40._4_4_;
      uStack_70 = uStack_38;
      uStack_6c = uStack_34;
      local_88 = (int)local_50;
      uStack_84 = local_50._4_4_;
      uStack_80 = (undefined4)uStack_48;
      uStack_7c = uStack_48._4_4_;
                    /* try { // try from 00166f75 to 00166f85 has its CatchHandler @ 00166fa5 */
      auVar2 = _ZN9uu_base3211base_common12handle_input17hbf931206a21706feE
                         (local_98,local_58,&local_88);
      _ZN4core3ptr86drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uu_base32__base_common__ReadSeek_GT__GT_17hbd9d2bace0cbdda3E
                (local_98);
    }
  }
  return auVar2;
}