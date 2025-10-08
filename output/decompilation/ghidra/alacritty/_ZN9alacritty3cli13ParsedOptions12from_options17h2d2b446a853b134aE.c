void _ZN9alacritty3cli13ParsedOptions12from_options17h2d2b446a853b134aE
               (undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *local_108;
  code *local_100;
  int *local_f8;
  undefined *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_158 = 0;
  local_150 = 8;
  local_148 = 0;
  local_140 = param_1;
  if (param_3 != 0) {
    lVar1 = param_2 + param_3 * 0x18;
    do {
      local_160 = param_2;
                    /* try { // try from 005342ea to 005342f1 has its CatchHandler @ 00534494 */
      _ZN4toml2de8from_str17hb249a18d92861147E
                (&local_88,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      if (local_88 == 2) {
        local_128 = (long **)CONCAT44(uStack_6c,uStack_70);
        uStack_120 = CONCAT44(uStack_64,uStack_68);
        local_138 = (undefined **)CONCAT44(uStack_7c,uStack_80);
        uStack_130 = CONCAT44(uStack_74,uStack_78);
                    /* try { // try from 00534316 to 0053431e has its CatchHandler @ 00534483 */
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_009de2a8
        )(&local_88,local_160);
        local_c0 = (undefined4)local_128;
        uStack_bc = local_128._4_4_;
        uStack_b8 = (undefined4)uStack_120;
        uStack_b4 = uStack_120._4_4_;
        uStack_d0 = local_138;
        uStack_c8 = uStack_130;
        local_e8 = local_88;
        uStack_e4 = uStack_84;
        uStack_e0 = uStack_80;
        uStack_dc = uStack_7c;
                    /* try { // try from 00534351 to 0053435d has its CatchHandler @ 00534492 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3daab237eee37720E(&local_158,&local_e8);
      }
      else {
        local_98 = local_38;
        local_a8 = local_48;
        uStack_a0 = uStack_40;
        uStack_b8 = local_58;
        uStack_b4 = uStack_54;
        uStack_b0 = uStack_50;
        uStack_ac = uStack_4c;
        uStack_c8 = CONCAT44(uStack_64,uStack_68);
        local_c0 = uStack_60;
        uStack_bc = uStack_5c;
        uStack_d0 = (undefined **)CONCAT44(uStack_6c,uStack_70);
        local_e8 = local_88;
        uStack_e4 = uStack_84;
        uStack_e0 = uStack_80;
        uStack_dc = uStack_7c;
        local_108 = &local_160;
        local_100 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h83f1bbefb10239b3E;
        local_f0 = 
        PTR__ZN61__LT_toml__de__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h5637888e57e7e273E_009dea90
        ;
        local_138 = &PTR_s_Ignoring_invalid_CLI_option_____00981658;
        uStack_130 = 3;
        local_118 = 0;
        local_128 = &local_108;
        uStack_120 = 2;
                    /* try { // try from 00534428 to 00534432 has its CatchHandler @ 00534471 */
        local_f8 = &local_e8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_138);
                    /* try { // try from 00534433 to 0053443a has its CatchHandler @ 00534494 */
        _ZN4core3ptr43drop_in_place_LT_toml__de__error__Error_GT_17h4158bf9df3d9fe37E(&local_e8);
      }
      param_2 = param_2 + 0x18;
    } while (param_2 != lVar1);
  }
  local_140[2] = local_148;
  *local_140 = local_158;
  local_140[1] = local_150;
  return;
}