void _ZN4just6search6Search23search_parent_directory17h53a5a1157ef24091E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined auVar1 [16];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  auVar1 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_2,param_3);
  if (auVar1._0_8_ != 0) {
    auVar1 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)
                       (auVar1._0_8_,auVar1._8_8_);
    if (auVar1._0_8_ != 0) {
      _ZN4just6search6Search17find_in_directory17h02746fb8a7674a3dE
                (param_1,param_4,param_5,auVar1._0_8_,auVar1._8_8_);
      return;
    }
  }
  _ZN101__LT_just__module_path__ModulePath_u20_as_u20_core__convert__TryFrom_LT__RF__u5b__RF_str_u5d__GT__GT_8try_from28__u7b__u7b_closure_u7d__u7d_17ha7dde365619bc2c0E
            (&local_40,param_2,param_3);
  param_1[1] = 0x8000000000000003;
  param_1[2] = local_40;
  param_1[3] = local_38;
  param_1[4] = uStack_30;
  *param_1 = 0x8000000000000000;
  return;
}