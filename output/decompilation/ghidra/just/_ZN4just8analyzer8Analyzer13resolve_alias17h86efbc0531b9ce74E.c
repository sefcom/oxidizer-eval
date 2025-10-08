void _ZN4just8analyzer8Analyzer13resolve_alias17h86efbc0531b9ce74E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined local_68 [16];
  
                    /* try { // try from 00355f44 to 00355f48 has its CatchHandler @ 00356000 */
  lVar1 = _ZN4just8analyzer8Analyzer14resolve_recipe17he99a001ae8837bfeE
                    (*(undefined8 *)(param_4 + 2),*(undefined8 *)(param_4 + 4),param_2,param_3);
  if (lVar1 != 0) {
    _ZN4just5alias37Alias_LT_just__namepath__Namepath_GT_7resolve17h619856284a1e2d72E
              (param_1,param_4,lVar1);
    return;
  }
                    /* try { // try from 00355f6d to 00355fb1 has its CatchHandler @ 00356000 */
  local_68 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(param_4 + 6);
  local_80 = *param_4;
  uStack_7c = param_4[1];
  uStack_78 = param_4[2];
  uStack_74 = param_4[3];
  local_70 = *(undefined8 *)(param_4 + 4);
  local_88 = 0x800000000000003f;
  _ZN4just5token5Token5error17h986494da066a4455E(&local_d8,param_4 + 6,&local_88);
  *(undefined8 *)(param_1 + 0x10) = local_98;
  *(undefined8 *)(param_1 + 0x12) = uStack_90;
  param_1[0xc] = local_a8;
  param_1[0xd] = uStack_a4;
  param_1[0xe] = uStack_a0;
  param_1[0xf] = uStack_9c;
  param_1[8] = local_b8;
  param_1[9] = uStack_b4;
  param_1[10] = uStack_b0;
  param_1[0xb] = uStack_ac;
  param_1[4] = local_c8;
  param_1[5] = uStack_c4;
  param_1[6] = uStack_c0;
  param_1[7] = uStack_bc;
  *param_1 = local_d8;
  param_1[1] = uStack_d4;
  param_1[2] = uStack_d0;
  param_1[3] = uStack_cc;
  *(undefined *)(param_1 + 0x18) = 0x25;
  _ZN4core3ptr54drop_in_place_LT_just__attribute_set__AttributeSet_GT_17he9a7d0819ed0965dE
            (param_4 + 0x18);
  return;
}