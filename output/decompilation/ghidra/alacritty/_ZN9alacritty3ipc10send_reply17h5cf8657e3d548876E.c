void _ZN9alacritty3ipc10send_reply17h5cf8657e3d548876E(void)

{
  long lVar1;
  long local_80;
  long local_78;
  long *local_70;
  undefined *local_68;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_80 = _ZN9alacritty3ipc19send_reply_fallible17h775e89a0afb08361E();
  local_78 = local_80;
  if (local_80 != 0) {
                    /* try { // try from 0055c400 to 0055c4a6 has its CatchHandler @ 0055c4cd */
    lVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (lVar1 != 0) {
      local_70 = &local_80;
      local_68 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_009de518
      ;
      local_38 = &PTR_s_Failed_to_send_IPC_reply__00982f70;
      local_30 = 1;
      local_18 = 0;
      local_28 = &local_70;
      local_20 = 1;
      local_40 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s_alacritty_src_ipc_rs_00982f80);
      local_60 = "alacritty::ipc";
      local_58 = 0xe;
      local_50 = "alacritty::ipc";
      local_48 = 0xe;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_38,1,&local_60);
    }
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3428ae91bc3bac8aE(&local_80);
    return;
  }
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17h1de10a50e8d7f33dE
            (&local_78);
  return;
}