undefined8
_ZN5uu_du11StatPrinter10print_stat17h55862af7f00f1efdE(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_f0;
  code *pcStack_e8;
  undefined8 *local_e0;
  code *pcStack_d8;
  undefined local_d0;
  undefined8 **local_c8;
  code *local_c0;
  undefined8 **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 **local_70;
  code *local_68;
  undefined8 *local_58 [3];
  undefined local_40 [16];
  
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    _ZN5uu_du11StatPrinter12convert_size17hd9a65cfff278d727E(&local_f0,param_1);
    local_68 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_c8 = (undefined8 **)&DAT_00245e90;
    local_c0 = (code *)0x2;
    local_a8 = 0;
    local_b8 = &local_70;
    uStack_b0 = 1;
                    /* try { // try from 0019807a to 00198084 has its CatchHandler @ 00198298 */
    local_70 = &local_f0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024e908)(&local_c8);
    pppuVar2 = &local_f0;
  }
  else {
    _ZN5uu_du13get_time_secs17h49debf4b9f55f9aaE(&local_f0,*(char *)(param_1 + 0x4c),param_2);
    if (local_f0 != (undefined8 **)&DAT_00000005) {
      local_c8 = local_f0;
      local_c0 = pcStack_e8;
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8a707cc2bcbdfcb0E(&local_c8);
      return uVar1;
    }
    uVar1 = (*(code *)
              PTR__ZN91__LT_std__time__SystemTime_u20_as_u20_core__ops__arith__Add_LT_core__time__Duration_GT__GT_3add17ha7d73b33c4ccffebE_0024ebd8
            )(0,0,pcStack_e8,0);
    (*(code *)
      PTR__ZN131__LT_chrono__datetime__DateTime_LT_chrono__offset__local__Local_GT__u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h7e660df65a8958b4E_0024ebe0
    )(local_40,uVar1);
    local_f0 = *(undefined8 ***)(param_1 + 0x38);
    pcStack_e8 = *(code **)(param_1 + 0x40);
    local_e0 = (undefined8 *)0x8;
    pcStack_d8 = (code *)0x0;
    local_d0 = 0;
    _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17ha2a2de2446b63721E
              (&local_c8,local_40,&local_f0);
                    /* try { // try from 0019810e to 00198120 has its CatchHandler @ 00198283 */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h1aa12dd3d2a22d67E
              (local_58,&local_c8);
    _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h21a470369439eb5eE
              (&local_c8);
                    /* try { // try from 0019812b to 00198140 has its CatchHandler @ 0019826b */
    _ZN5uu_du11StatPrinter12convert_size17hd9a65cfff278d727E(&local_70,param_1,param_3);
    pcStack_e8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    pcStack_d8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_c8 = (undefined8 **)&DAT_00245e60;
    local_c0 = (code *)0x3;
    local_a8 = 0;
    uStack_b0 = 2;
                    /* try { // try from 00198188 to 00198192 has its CatchHandler @ 00198246 */
    local_f0 = &local_70;
    local_e0 = local_58;
    local_b8 = &local_f0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024e908)(&local_c8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E(&local_70);
    pppuVar2 = (undefined8 ***)local_58;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4aad5465963d35b9E(pppuVar2);
  uVar1 = _ZN6uucore4mods7display14print_verbatim17h2c436cba54ab5682E(param_2 + 0x40);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h15000bb1c5a0492fE(uVar1);
  local_f0 = (undefined8 **)(param_1 + 0x4d);
  pcStack_e8 = (code *)
               PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_0024ebb0
  ;
  local_c8 = (undefined8 **)&DAT_0011d7a0;
  local_c0 = (code *)0x1;
  local_a8 = 0;
  local_b8 = &local_f0;
  uStack_b0 = 1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0024e908)(&local_c8);
  return 0;
}