undefined8 *
_ZN3bat5input5Input11from_reader17h5c93c8a2e0344023E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_88 = 0x8000000000000001;
                    /* try { // try from 00539996 to 005399a2 has its CatchHandler @ 00539a06 */
  uStack_80 = param_2;
  local_78 = param_3;
  _ZN3bat5input9InputKind11description17hc1a183838fcaf6dcE(&local_70,&local_88);
  param_1[0x13] = local_78;
  param_1[0x11] = local_88;
  param_1[0x12] = uStack_80;
  *param_1 = 0;
  param_1[2] = 0x8000000000000000;
  param_1[5] = local_70;
  param_1[6] = uStack_68;
  param_1[7] = local_60;
  param_1[8] = uStack_58;
  param_1[9] = local_50;
  param_1[10] = uStack_48;
  param_1[0xb] = local_40;
  param_1[0xc] = uStack_38;
  param_1[0xd] = local_30;
  param_1[0xe] = uStack_28;
  param_1[0xf] = local_20;
  param_1[0x10] = uStack_18;
  return param_1;
}