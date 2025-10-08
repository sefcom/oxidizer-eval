void _ZN3bat7vscreen10Attributes19update_with_charset17h05c800051a699d8fE
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_RDX;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined *local_90;
  undefined *local_88;
  code *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined4 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined local_30 [24];
  
  local_9c = param_2;
  _ZN4core4iter6traits8iterator8Iterator4take17heb50f55f44e46178E(&local_78,param_3,param_4);
  _ZN4core4iter6traits8iterator8Iterator7collect17hf2327cdb95cc4d00E(local_30,&local_78);
  local_98 = &local_9c;
  local_90 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00808038;
  local_80 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_78 = &PTR_DAT_007ced50;
  local_70 = 2;
  local_58 = 0;
  local_68 = &local_98;
  local_60 = 2;
                    /* try { // try from 00544fee to 00544ffe has its CatchHandler @ 00545031 */
  local_88 = local_30;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
            (&local_48,0,extraout_RDX,&local_78);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(local_30);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = local_38;
  *(undefined8 *)(param_1 + 0x48) = local_48;
  *(undefined8 *)(param_1 + 0x50) = uStack_40;
  return;
}