undefined8 _ZN17fuel_core_version24verify_version_from_file17h505193d9cfd87079E(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 *local_38;
  undefined *local_30;
  undefined local_28 [24];
  
  local_98 = (undefined8 **)_DAT_00117400;
  uStack_90 = _UNK_00117408;
  local_a8 = (undefined **)CONCAT44(_UNK_001173f4,_DAT_001173f0);
  uStack_a0 = CONCAT44(_UNK_001173fc,_UNK_001173f8);
  local_88 = 0;
                    /* try { // try from 00170ffd to 00171004 has its CatchHandler @ 0017112b */
  cVar1 = _ZN56__LT_semver__Version_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd1b3480e92056b54E
                    (param_1,&local_a8);
  if (cVar1 == '\0') {
    _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h33470c6ef43969d7E(&local_a8);
    local_68 = _DAT_00117400;
    uStack_60 = _UNK_00117408;
    local_78 = (undefined8 *)CONCAT44(_UNK_001173f4,_DAT_001173f0);
    uStack_70 = (undefined *)CONCAT44(_UNK_001173fc,_UNK_001173f8);
    local_58 = 0;
    local_48 = &local_78;
    local_40 = 
    PTR__ZN6semver7display64__LT_impl_u20_core__fmt__Display_u20_for_u20_semver__Version_GT_3fmt17haa28aa2a22053214E_00237780
    ;
    local_30 = 
    PTR__ZN6semver7display64__LT_impl_u20_core__fmt__Display_u20_for_u20_semver__Version_GT_3fmt17haa28aa2a22053214E_00237780
    ;
    local_a8 = &PTR_DAT_0022fbd8;
    uStack_a0 = 3;
    local_88 = 0;
    local_98 = &local_48;
    uStack_90 = 2;
                    /* try { // try from 001710dc to 001710eb has its CatchHandler @ 0017111c */
    local_38 = param_1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h36fb9c365ec81203E(local_28,&local_a8);
                    /* try { // try from 001710ec to 00171102 has its CatchHandler @ 00171138 */
    _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h33470c6ef43969d7E(&local_78);
    uVar2 = _ZN4eyre5error30__LT_impl_u20_eyre__Report_GT_10from_adhoc17ha8aeb145c9259867E(local_28)
    ;
  }
  else {
                    /* try { // try from 00171009 to 0017106a has its CatchHandler @ 00171138 */
    _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h33470c6ef43969d7E(&local_a8);
    uStack_70 = 
    PTR__ZN6semver7display64__LT_impl_u20_core__fmt__Display_u20_for_u20_semver__Version_GT_3fmt17haa28aa2a22053214E_00237780
    ;
    local_a8 = &PTR_DAT_0022fc08;
    uStack_a0 = 2;
    local_88 = 0;
    local_98 = (undefined8 **)&local_78;
    uStack_90 = 1;
    local_78 = param_1;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00237788)(&local_a8);
    uVar2 = 0;
  }
  _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17h33470c6ef43969d7E(param_1);
  return uVar2;
}