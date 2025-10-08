void _ZN18alacritty_terminal6thread11spawn_named17h24574652a96280a1E
               (undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60;
  undefined local_58 [24];
  undefined local_40 [48];
  
  local_78 = 0x8000000000000000;
  local_88 = 0;
  local_60 = 0;
                    /* try { // try from 004733b9 to 004733ce has its CatchHandler @ 00473428 */
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17h0234e4d8e087250eE
            (local_58,"socket listener",0xf);
                    /* try { // try from 004733cf to 004733e1 has its CatchHandler @ 00473423 */
  (*(code *)PTR__ZN3std6thread7Builder4name17h9a7df364061ccb51E_009de5b8)
            (local_40,&local_88,local_58);
  local_68 = param_2[4];
  local_88 = *param_2;
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_7c = *(undefined4 *)((long)param_2 + 0xc);
  local_78 = param_2[2];
  uStack_70 = *(undefined4 *)(param_2 + 3);
  uStack_6c = *(undefined4 *)((long)param_2 + 0x1c);
  _ZN3std6thread7Builder15spawn_unchecked17hfbb11b2c2c0a43ffE(local_58,local_40,&local_88);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17ha04fb372785aeabdE(param_1,local_58);
  return;
}