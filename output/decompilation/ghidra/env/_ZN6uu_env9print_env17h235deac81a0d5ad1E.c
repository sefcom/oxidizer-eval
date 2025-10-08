void _ZN6uu_env9print_env17h235deac81a0d5ad1E(undefined param_1)

{
  undefined8 uVar1;
  undefined local_159;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e0;
  code *local_d8;
  undefined4 *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_159 = param_1;
  local_150 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00219278)();
  local_158 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00219528)(&local_150);
                    /* try { // try from 00172021 to 0017202e has its CatchHandler @ 0017218b */
  (*(code *)PTR__ZN3std3env4vars17h43d0a176db605fd6E_00219530)(&local_50);
  local_f8 = local_40;
  uStack_f0 = uStack_38;
  local_108 = local_50;
  uStack_104 = uStack_4c;
  uStack_100 = uStack_48;
  uStack_fc = uStack_44;
  do {
                    /* try { // try from 00172070 to 00172082 has its CatchHandler @ 00172190 */
    (*(code *)
      PTR__ZN73__LT_std__env__Vars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h404dd3a585398847E_00219538
    )(&local_80,&local_108);
    local_138 = local_70;
    local_148 = local_80;
    uStack_140 = uStack_78;
    local_118 = local_58;
    local_128 = local_68;
    uStack_124 = uStack_64;
    uStack_120 = uStack_60;
    uStack_11c = uStack_5c;
    local_d8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_c8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_c0 = &local_159;
    local_b8 = 
    PTR__ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17hd41883bc456718a9E_00219540
    ;
    local_b0 = &DAT_00210768;
    local_a8 = 3;
    local_90 = 0;
    local_a0 = &local_e0;
    local_98 = 3;
    local_e0 = &local_148;
    local_d0 = &local_128;
                    /* try { // try from 0017213d to 0017214f has its CatchHandler @ 00172195 */
    uVar1 = _ZN3std2io5Write9write_fmt17hace443ec7af5d171E(&local_158,&local_b0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he8d54822fdfe3dbdE(uVar1);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0f81e6c32c02414aE(&local_128);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0f81e6c32c02414aE(&local_148);
  } while( true );
}