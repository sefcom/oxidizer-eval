undefined4 *
_ZN7flealib9systemcmd9SystemCmd20execute_bash_command17h10459d7455dc0e1eE
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 **local_308;
  code *local_300;
  undefined4 *local_2f8;
  code *local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 **local_2d8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined *local_288;
  code *pcStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined8 local_240;
  undefined4 *local_238;
  code *pcStack_230;
  undefined8 local_228;
  undefined local_220 [16];
  ulong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 *local_1f0;
  code *local_1e8;
  undefined *local_1e0;
  code *pcStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined local_a8 [104];
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  
  local_2c8 = param_3;
  local_2c0 = param_4;
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E();
  if (3 < uVar1) {
    local_318 = (undefined **)&local_2c8;
    pcStack_1d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h12cd30248a4f3866E;
    local_178 = &PTR_s_Executing_bash_command__00808f50;
    uStack_170 = 1;
    local_158 = 0;
    local_168 = &local_1e0;
    local_160 = 1;
    local_1e0 = (undefined *)&local_318;
    local_268 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                          (&PTR_DAT_00808fb0);
    local_288 = &DAT_0016a878;
    pcStack_280 = (code *)0x12;
    local_278 = &DAT_0016a878;
    uStack_270 = 0x12;
    _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_178,4,&local_288);
    param_4 = local_2c0;
    param_3 = local_2c8;
  }
  (*(code *)PTR__ZN4core3str7pattern11StrSearcher3new17haa0b969b3b6bc6faE_008266f0)
            (local_a8,param_3,param_4,"cd ",3);
  local_40 = 0;
  local_30 = 1;
  local_38 = param_4;
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17hf1f22c0a078c0456E
            (local_220,local_a8,&PTR_DAT_00808fc8);
  if (local_210 < 2) {
                    /* try { // try from 00473220 to 0047322c has its CatchHandler @ 004736b7 */
    _ZN3std7process7Command3new17h9aa1e52e6d375bdaE(&local_178,local_2c8,local_2c0);
                    /* try { // try from 0047322d to 00473242 has its CatchHandler @ 00473698 */
    (*(code *)PTR__ZN3std7process7Command6output17h4740011ae85f8c25E_00828360)
              (&local_1e0,&local_178);
    local_258 = local_1b0;
    local_268 = CONCAT44(uStack_1bc,local_1c0);
    uStack_260 = uStack_1b8;
    uStack_25c = uStack_1b4;
    local_278 = (undefined *)CONCAT44(uStack_1cc,local_1d0);
    local_288 = local_1e0;
    pcStack_280 = pcStack_1d8;
    local_2b8 = &local_258;
    local_2b0 = 
    PTR__ZN63__LT_std__process__ExitStatus_u20_as_u20_core__fmt__Display_GT_3fmt17h67b55ee36be5463bE_00828368
    ;
    local_318 = &PTR_DAT_00808f60;
    uStack_310 = (code *)0x2;
    local_2f8 = (undefined4 *)0x0;
    local_308 = &local_2b8;
    local_300 = (code *)0x1;
                    /* try { // try from 00473305 to 00473314 has its CatchHandler @ 00473667 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_1a8,&local_318);
    local_208 = local_1a8;
    uStack_204 = uStack_1a4;
    uStack_200 = uStack_1a0;
    uStack_1fc = uStack_19c;
    local_1f8 = local_198;
                    /* try { // try from 00473345 to 0047334f has its CatchHandler @ 0047366c */
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h44ed577670f061c9E_00826d80)
              (&local_2b8,local_268,CONCAT44(uStack_25c,uStack_260));
                    /* try { // try from 0047335a to 00473361 has its CatchHandler @ 0047362f */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_318,local_2b0,local_2a8);
    local_2d8 = local_308;
    local_2e8 = (undefined4)local_318;
    uStack_2e4 = local_318._4_4_;
    uStack_2e0 = (undefined4)uStack_310;
    uStack_2dc = uStack_310._4_4_;
    local_238 = &local_2e8;
    pcStack_230 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_318 = &PTR_s_stderr__00808f80;
    uStack_310 = (code *)0x2;
    local_2f8 = (undefined4 *)0x0;
    local_300 = (code *)0x1;
                    /* try { // try from 004733c4 to 004733d3 has its CatchHandler @ 00473620 */
    local_308 = (undefined8 **)&local_238;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_250,&local_318);
                    /* try { // try from 004733d4 to 004733e0 has its CatchHandler @ 00473604 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_2e8);
                    /* try { // try from 004733e1 to 004733ea has its CatchHandler @ 004735ff */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb29927c53dd8f325E(&local_2b8)
    ;
    local_228 = local_240;
                    /* try { // try from 0047341b to 00473425 has its CatchHandler @ 00473650 */
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h44ed577670f061c9E_00826d80)
              (&local_2b8,pcStack_280,local_278);
                    /* try { // try from 00473430 to 00473437 has its CatchHandler @ 004735f0 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_318,local_2b0,local_2a8);
    local_2d8 = local_308;
    local_2e8 = (undefined4)local_318;
    uStack_2e4 = local_318._4_4_;
    uStack_2e0 = (undefined4)uStack_310;
    uStack_2dc = uStack_310._4_4_;
    local_1e8 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_318 = &PTR_DAT_00808fa0;
    uStack_310 = (code *)0x1;
    local_2f8 = (undefined4 *)0x0;
    local_308 = (undefined8 **)&local_1f0;
    local_300 = (code *)0x1;
                    /* try { // try from 0047348e to 004734a0 has its CatchHandler @ 004735e1 */
    local_1f0 = &local_2e8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_250,&local_318);
                    /* try { // try from 004734a1 to 004734ad has its CatchHandler @ 004735c5 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_2e8);
                    /* try { // try from 004734ae to 004734b7 has its CatchHandler @ 004735c0 */
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb29927c53dd8f325E(&local_2b8)
    ;
    local_2e8 = local_250;
    uStack_2e4 = uStack_24c;
    uStack_2e0 = uStack_248;
    uStack_2dc = uStack_244;
    local_2d8 = (undefined8 **)local_240;
    local_318 = (undefined **)&local_208;
    uStack_310 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_300 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_2f0 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_2b8 = (undefined8 *)&DAT_0016a830;
    local_2b0 = (undefined *)0x3;
    local_298 = 0;
    local_2a0 = 3;
                    /* try { // try from 00473526 to 00473537 has its CatchHandler @ 004735ae */
    local_308 = (undefined8 **)&local_238;
    local_2f8 = &local_2e8;
    local_2a8 = (undefined *)&local_318;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_190,&local_2b8);
    *(undefined8 *)(param_1 + 4) = local_180;
    *param_1 = local_190;
    param_1[1] = uStack_18c;
    param_1[2] = uStack_188;
    param_1[3] = uStack_184;
                    /* try { // try from 0047354f to 00473558 has its CatchHandler @ 00473650 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_2e8);
                    /* try { // try from 00473559 to 00473565 has its CatchHandler @ 0047366c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_238);
                    /* try { // try from 00473566 to 00473572 has its CatchHandler @ 00473667 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_208);
                    /* try { // try from 00473573 to 0047357f has its CatchHandler @ 00473662 */
    _ZN4core3ptr41drop_in_place_LT_std__process__Output_GT_17hfbac92b66ab59709E(&local_288);
                    /* try { // try from 00473580 to 0047358c has its CatchHandler @ 0047364b */
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hb30d824733ae43beE(local_220)
    ;
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h9f27e060e11473c7E(&local_178);
  }
  else {
                    /* try { // try from 004731d4 to 004731ec has its CatchHandler @ 004736b7 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_178,"Use \'cd\' command to change a directory",0x26);
    *(undefined ***)(param_1 + 4) = local_168;
    *param_1 = (undefined4)local_178;
    param_1[1] = local_178._4_4_;
    param_1[2] = (undefined4)uStack_170;
    param_1[3] = uStack_170._4_4_;
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hb30d824733ae43beE(local_220)
    ;
  }
  return param_1;
}