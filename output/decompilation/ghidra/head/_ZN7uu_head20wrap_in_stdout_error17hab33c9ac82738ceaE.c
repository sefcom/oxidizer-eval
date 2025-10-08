undefined8 _ZN7uu_head20wrap_in_stdout_error17hab33c9ac82738ceaE(undefined8 param_1)

{
  undefined uVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_20 [24];
  
  local_68 = param_1;
  uVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E();
  local_58 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_001fe718
  ;
  local_50 = &PTR_s_error_writing__standard_output___001f7cd8;
  local_48 = 1;
  local_30 = 0;
  local_40 = &local_60;
  local_38 = 1;
                    /* try { // try from 00167215 to 00167231 has its CatchHandler @ 00167246 */
  local_60 = (undefined *)&local_68;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h4698243df58dc779E(local_20,&local_50);
  uVar2 = (*(code *)PTR__ZN3std2io5error5Error3new17ha2b5f63706640a17E_001fe8d0)(uVar1,local_20);
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hcee48fbfcf3aefedE(&local_68);
  return uVar2;
}