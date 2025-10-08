void _ZN6uu_who8platform4unix3Who15print_initspawn17h93d956fb414ae39cE
               (undefined8 param_1,long param_2)

{
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined local_90 [8];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 **ppuStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx15terminal_suffix17h90f3d33375c1dd6bE_00205fc8)
            (local_90);
  pcStack_70 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_58 = &PTR_s_id__001fef78;
  local_50 = 1;
  local_38 = 0;
  ppuStack_48 = (undefined4 **)&local_78;
  local_40 = 1;
                    /* try { // try from 0016843e to 00168452 has its CatchHandler @ 0016862f */
  local_78 = local_90;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha4af03a514854fedE(&local_a8,&local_58);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_90);
  pcStack_70 = (code *)uStack_a0;
  local_68 = local_98;
  local_ac = *(undefined4 *)(param_2 + 4);
  local_a8 = &local_ac;
  uStack_a0 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_00205fd0
  ;
  local_58 = (undefined **)&DAT_00118a60;
  local_50 = 1;
  local_38 = 0;
  local_40 = 1;
                    /* try { // try from 001684d0 to 001684e1 has its CatchHandler @ 0016861c */
  ppuStack_48 = &local_a8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha4af03a514854fedE(local_90,&local_58);
  uStack_a0 = (undefined *)CONCAT44(uStack_84,uStack_88);
  local_98 = local_80;
                    /* try { // try from 001684f9 to 00168506 has its CatchHandler @ 001685ff */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10tty_device17h164f6e4ca04cfddcE_00205fa8)
            (local_90,param_2);
                    /* try { // try from 00168517 to 00168526 has its CatchHandler @ 001685f0 */
  _ZN6uu_who8platform4unix11time_string17hf7b3fb93d48ce0b2E(&local_58,param_2);
                    /* try { // try from 00168549 to 0016859e has its CatchHandler @ 001685de */
  _ZN6uu_who8platform4unix3Who10print_line17h48873e2090b4b940E
            (param_1,1,0,0x20,CONCAT44(uStack_84,uStack_88),local_80,(undefined4)local_50,
             ppuStack_48._0_4_,1,0,uStack_a0,local_98,pcStack_70,local_68,1,0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_58);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_90);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_a8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_78);
  return;
}