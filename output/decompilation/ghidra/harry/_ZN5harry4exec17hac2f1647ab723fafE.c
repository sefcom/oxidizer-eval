void _ZN5harry4exec17hac2f1647ab723fafE(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *local_1f8;
  char *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  code *local_1a0;
  undefined *local_198;
  code *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  
                    /* try { // try from 0010c570 to 0010c5aa has its CatchHandler @ 0010c8ce */
  puVar2 = (undefined8 *)_ZN5alloc5alloc15exchange_malloc17h96f28a35c9335228E();
  uVar3 = *param_2;
  uVar1 = param_2[2];
  *puVar2 = "-c";
  puVar2[1] = 2;
  puVar2[2] = uVar3;
  puVar2[3] = uVar1;
  _ZN5alloc5slice4hack8into_vec17h83fe17ba49f2f4c7E(&local_e0,puVar2,2);
  local_178 = local_d0;
  local_188 = local_e0;
  uStack_184 = uStack_dc;
  uStack_180 = uStack_d8;
  uStack_17c = uStack_d4;
  local_1f0 = "shFailed to run command \'\': ";
  local_1e8 = 2;
  local_1e0 = &local_1f0;
  uStack_1d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h55d6a8b466f9fb98E;
                    /* try { // try from 0010c5f3 to 0010c63b has its CatchHandler @ 0010c8d3 */
  _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
            (&local_e0,&PTR_s_Running_00174108,2,&local_1e0,1);
  (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e0);
  _ZN3std7process7Command3new17h3573804b8150258fE(&local_e0,local_1f0,local_1e8);
                    /* try { // try from 0010c63c to 0010c65b has its CatchHandler @ 0010c879 */
  uVar3 = _ZN3std7process7Command4args17hc6e9244e072c6ef6E(&local_e0,&local_188);
  (*(code *)PTR__ZN3std7process7Command6output17h0b316890cd6c897bE_001776e8)(&local_1e0,uVar3);
  if (local_1e0 == (char **)0x0) {
    local_1f8 = uStack_1d8;
    local_1a0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h4a7c468ff387aa2cE;
    local_190 = 
    _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha06740198faf5823E;
                    /* try { // try from 0010c7da to 0010c812 has its CatchHandler @ 0010c86c */
    local_1a8 = param_2;
    local_198 = (undefined *)&local_1f8;
    _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E(&local_168,&DAT_00174158,2,&local_1a8,2);
    _ZN5alloc3fmt6format17hc41d8db97b3bb714E(&local_f8,&local_168);
    *(undefined8 *)(param_1 + 4) = local_e8;
    *param_1 = local_f8;
    param_1[1] = uStack_f4;
    param_1[2] = uStack_f0;
    param_1[3] = uStack_ec;
                    /* try { // try from 0010c82b to 0010c832 has its CatchHandler @ 0010c879 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17ha602bf7ed800fc68E(&local_1f8);
                    /* try { // try from 0010c833 to 0010c83f has its CatchHandler @ 0010c8d3 */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h471dcd8ff33a6397E(&local_e0);
                    /* try { // try from 0010c840 to 0010c849 has its CatchHandler @ 0010c8ce */
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h0da5646a342a4732E
              (&local_188);
  }
  else {
    local_108 = local_1b0;
    local_118 = local_1c0;
    uStack_114 = uStack_1bc;
    uStack_110 = uStack_1b8;
    uStack_10c = uStack_1b4;
    local_128 = local_1d0;
    uStack_124 = uStack_1cc;
    uStack_120 = uStack_1c8;
    uStack_11c = uStack_1c4;
    local_138 = (undefined4)local_1e0;
    uStack_134 = local_1e0._4_4_;
    uStack_130 = (undefined4)uStack_1d8;
    uStack_12c = uStack_1d8._4_4_;
                    /* try { // try from 0010c69c to 0010c6a8 has its CatchHandler @ 0010c867 */
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h471dcd8ff33a6397E(&local_e0);
    local_168 = 1;
    uStack_160 = 0;
    uStack_158 = 0;
                    /* try { // try from 0010c6d0 to 0010c6de has its CatchHandler @ 0010c862 */
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h05daa31551103c74E
              (&local_1e0,0x2000,CONCAT44(uStack_134,local_138),CONCAT44(uStack_124,local_128));
                    /* try { // try from 0010c6ef to 0010c700 has its CatchHandler @ 0010c85d */
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h05daa31551103c74E
              (&local_e0,0x2000,CONCAT44(uStack_11c,uStack_120),CONCAT44(uStack_10c,uStack_110));
                    /* try { // try from 0010c701 to 0010c753 has its CatchHandler @ 0010c88b */
    _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_14read_to_string17hd0bc8abda03c3068E
              (&local_1a8,&local_1e0,&local_168);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h16826addb7ab2ba3E
              (&local_1a8,&PTR_s_src_main_rs_00174128);
    _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_14read_to_string17hd0bc8abda03c3068E
              (&local_1a8,&local_e0,&local_168);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h16826addb7ab2ba3E
              (&local_1a8,&PTR_s_src_main_rs_00174140);
    *(undefined8 *)(param_1 + 4) = uStack_158;
    *param_1 = (undefined4)local_168;
    param_1[1] = local_168._4_4_;
    param_1[2] = (undefined4)uStack_160;
    param_1[3] = uStack_160._4_4_;
    _ZN4core3ptr84drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF__u5b_u8_u5d__GT__GT_17hc3fc27d3d4938943E
              (CONCAT44(uStack_dc,local_e0),CONCAT44(uStack_d4,uStack_d8));
    _ZN4core3ptr84drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF__u5b_u8_u5d__GT__GT_17hc3fc27d3d4938943E
              (local_1e0,uStack_1d8);
                    /* try { // try from 0010c790 to 0010c79c has its CatchHandler @ 0010c8d3 */
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17h9b9c5803ce695ef8E(&local_138);
                    /* try { // try from 0010c79d to 0010c7a6 has its CatchHandler @ 0010c8ce */
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h0da5646a342a4732E
              (&local_188);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82ac9a33f2cb35fcE(param_2);
  return;
}