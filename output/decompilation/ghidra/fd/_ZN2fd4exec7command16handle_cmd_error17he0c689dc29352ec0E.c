void _ZN2fd4exec7command16handle_cmd_error17he0c689dc29352ec0E
               (long param_1,undefined8 ***param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 ***pppuVar3;
  undefined8 **local_a0;
  code *local_98;
  undefined8 **local_90;
  undefined8 **local_88;
  undefined *local_80;
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  undefined local_28 [24];
  
  if (param_1 != 0) {
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(param_2);
    param_3 = extraout_RDX;
    if (cVar1 == '\0') {
      local_90 = param_2;
                    /* try { // try from 002f277d to 002f2796 has its CatchHandler @ 002f2822 */
      uVar2 = (*(code *)PTR__ZN3std7process7Command11get_program17h41efdce1cd7a1359E_005408e8)
                        (param_1);
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0053ff38)
                (&local_88,uVar2);
      local_98 = 
      _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h339b4df17109b8deE
      ;
      local_70 = &PTR_s_Command_not_found__00502190;
      local_68 = 1;
      local_50 = 0;
      local_60 = &local_a0;
      local_58 = 1;
                    /* try { // try from 002f27d9 to 002f27e9 has its CatchHandler @ 002f2813 */
      local_a0 = &local_88;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
                (local_40,0,extraout_RDX_00,&local_70);
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h20faf5157999b1c6E
                (&local_88);
                    /* try { // try from 002f27f4 to 002f27fd has its CatchHandler @ 002f2822 */
      _ZN2fd5error11print_error17h653511955bf98e50E(local_40);
      pppuVar3 = &local_90;
      goto LAB_002f2803;
    }
  }
  local_88 = &local_a0;
  local_80 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_005408e0
  ;
  local_70 = &PTR_s_Problem_while_executing_command__005021a0;
  local_68 = 1;
  local_50 = 0;
  local_60 = &local_88;
  local_58 = 1;
                    /* try { // try from 002f274d to 002f276d has its CatchHandler @ 002f2831 */
  local_a0 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E(local_28,0,param_3,&local_70);
  _ZN2fd5error11print_error17h653511955bf98e50E(local_28);
  pppuVar3 = &local_a0;
LAB_002f2803:
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h70c4621fa5d008f5E(pppuVar3);
  return;
}