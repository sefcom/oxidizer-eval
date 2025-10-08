void _ZN2fd15set_working_dir17h861a2d37c6d30c19E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined *local_88;
  code *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_48 [24];
  undefined local_30 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  uVar2 = *(undefined8 *)(param_1 + 400);
  cVar3 = _ZN2fd10filesystem21is_existing_directory17h6c4a6eed8c6886fcE(uVar1,uVar2);
  if (cVar3 == '\0') {
    (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0053ff38)
              (local_48,uVar1,uVar2);
    local_80 = 
    _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h339b4df17109b8deE;
    local_78 = &PTR_s_The____base_directory__path___00502828;
    local_70 = 2;
    local_58 = 0;
    local_60 = 1;
                    /* try { // try from 002fa8c7 to 002fa8d7 has its CatchHandler @ 002fa8f1 */
    local_88 = local_48;
    local_68 = (undefined *)&local_88;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
              (local_30,0,extraout_RDX,&local_78);
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h20faf5157999b1c6E(local_48);
    _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h06348eb8850c741dE(local_30);
    return;
  }
  uVar4 = _ZN3std3env15set_current_dir17hdd64ecf3ba7d462dE(param_1 + 0x180);
  _ZN6anyhow7context92__LT_impl_u20_anyhow__Context_LT_T_C_E_GT__u20_for_u20_core__result__Result_LT_T_C_E_GT__GT_12with_context17hdf0967c826a78696E
            (uVar4,uVar1,uVar2);
  return;
}