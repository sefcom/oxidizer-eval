void _ZN3bat21set_terminal_title_to17h432aeef32092f2a4E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined **local_70;
  code *local_68;
  undefined8 local_60;
  code *local_58;
  undefined **local_50;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 **local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = &DAT_0018159c;
  local_88 = 4;
  local_80 = &DAT_00189078;
  local_78 = 1;
  local_70 = &local_90;
  local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf38b2ed4feebf29bE;
  local_58 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_50 = &local_80;
  local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf38b2ed4feebf29bE;
  local_40 = &DAT_00189048;
  local_38 = 3;
  local_20 = 0;
  local_30 = &local_70;
  local_28 = 3;
                    /* try { // try from 004af2ae to 004af2d6 has its CatchHandler @ 004af2ea */
  local_60 = param_1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_40);
  local_70 = (undefined **)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00807998)();
  uVar1 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_00807aa0
          )(&local_70);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h39cf630814389a44E(uVar1);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h9a1f4db89f5bf603E(param_1);
  return;
}