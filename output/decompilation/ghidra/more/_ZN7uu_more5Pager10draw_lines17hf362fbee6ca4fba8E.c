long _ZN7uu_more5Pager10draw_lines17hf362fbee6ca4fba8E(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_90;
  undefined local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  long *local_70;
  code *local_68;
  undefined **local_60;
  undefined8 local_58;
  long **local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar2 = _ZN9crossterm7command18write_command_ansi17h092cdb5fcd9c0436E(param_2);
  if ((lVar2 == 0) &&
     (lVar2 = (*(code *)
                PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
              )(param_2), lVar2 == 0)) {
    lVar2 = _ZN7uu_more5Pager18load_visible_lines17hab6b7f963f4c8df4E(param_1);
    puVar1 = 
    PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_9write_all17hda8b04bbc47966cdE_0022d218
    ;
    if (lVar2 == 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        lVar2 = 0;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x18);
        lVar4 = *(long *)(param_1 + 0x20) * 0x18;
        do {
          local_70 = &local_90;
          local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb390d762ea379179E;
          local_60 = &PTR_s__00225308;
          local_58 = 1;
          local_40 = 0;
          local_50 = &local_70;
          local_48 = 1;
          local_90 = lVar3;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1ec3d5ca74f474dE(local_88,&local_60);
                    /* try { // try from 0017b311 to 0017b315 has its CatchHandler @ 0017b368 */
          lVar2 = (*(code *)puVar1)(param_2,local_80,local_78);
          if (lVar2 != 0) {
                    /* try { // try from 0017b342 to 0017b34a has its CatchHandler @ 0017b366 */
            lVar2 = (*(code *)
                      PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
                    )(lVar2);
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(local_88);
            return lVar2;
          }
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17habcac018958bfd8aE(local_88);
          lVar3 = lVar3 + 0x18;
          lVar4 = lVar4 + -0x18;
          lVar2 = 0;
        } while (lVar4 != 0);
      }
    }
  }
  else {
    lVar2 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0022d2f8
            )(lVar2);
  }
  return lVar2;
}