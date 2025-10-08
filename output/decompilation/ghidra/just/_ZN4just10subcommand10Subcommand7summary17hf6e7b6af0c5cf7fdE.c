void _ZN4just10subcommand10Subcommand7summary17hf6e7b6af0c5cf7fdE
               (undefined8 param_1,char param_2,undefined8 param_3)

{
  long local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_40 = 0;
  local_38 = (undefined **)0x0;
  local_30 = 8;
  local_28 = 0;
                    /* try { // try from 00390fce to 00390fdc has its CatchHandler @ 00391066 */
  _ZN4just10subcommand10Subcommand17summary_recursive17hc0eddb790c4e97dcE
            (param_1,&local_38,&local_40,param_3);
  _ZN4core3ptr141drop_in_place_LT_alloc__vec__Vec_LT_similar__algorithms__utils__UniqueItem_LT_similar__algorithms__utils__OffsetLookup_LT_u32_GT__GT__GT__GT_17h4d36ad61a40c2c34E
            (local_38,local_30);
  local_38 = &PTR_DAT_0052dbf8;
  local_30 = 1;
  local_28 = 8;
  local_20 = 0;
  uStack_18 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_38);
  if (param_2 != '\0' && local_40 == 0) {
    local_38 = &PTR_DAT_00531490;
    local_30 = 1;
    local_28 = 8;
    local_20 = 0;
    uStack_18 = 0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_38);
  }
  return;
}