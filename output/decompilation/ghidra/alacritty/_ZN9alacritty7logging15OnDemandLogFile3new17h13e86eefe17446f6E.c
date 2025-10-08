void _ZN9alacritty7logging15OnDemandLogFile3new17h13e86eefe17446f6E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  undefined4 *local_b0;
  undefined *local_a8;
  undefined local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined4 **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined local_30 [24];
  
  (*(code *)PTR__ZN3std3env8temp_dir17h4c6b7a08795666f1E_009dff48)(&local_78);
                    /* try { // try from 0055dd5d to 0055ddee has its CatchHandler @ 0055de8d */
  local_98 = (*(code *)PTR__ZN3std7process2id17hbddb6ac2895e6a42E_009dff20)();
  local_b0 = &local_98;
  local_a8 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_009deb88
  ;
  local_60 = &PTR_s_Alacritty__009831c0;
  uStack_58 = 2;
  local_40 = 0;
  local_50 = &local_b0;
  uStack_48 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h50b4264313244ea1E
            (local_30,0,extraout_RDX,&local_60);
  _ZN3std4path7PathBuf4push17h342a82019f63c584E(&local_78,local_30);
  _ZN3std3env7set_var17hd696746618852d1eE
            ("ALACRITTY_LOG",0xd,CONCAT44(uStack_6c,uStack_70),local_68);
  local_88 = local_68;
  local_98 = local_78;
  uStack_94 = uStack_74;
  uStack_90 = uStack_70;
  uStack_8c = uStack_6c;
  local_60 = (undefined **)0x8000000000000000;
  local_b0 = (undefined4 *)0x1;
  local_a8 = (undefined *)0x1;
  local_a0 = 0;
                    /* try { // try from 0055de29 to 0055de32 has its CatchHandler @ 0055de67 */
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h067cbba7e84e9e92E(&local_b0);
  param_1[5] = local_50;
  param_1[6] = uStack_48;
  param_1[3] = local_60;
  param_1[4] = uStack_58;
  param_1[7] = uVar1;
  *param_1 = CONCAT44(uStack_94,local_98);
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  param_1[2] = local_88;
  return;
}