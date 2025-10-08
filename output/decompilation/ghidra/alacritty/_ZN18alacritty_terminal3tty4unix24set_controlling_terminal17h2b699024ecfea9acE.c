void _ZN18alacritty_terminal3tty4unix24set_controlling_terminal17h2b699024ecfea9acE
               (undefined8 param_1)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong local_78;
  undefined *local_70;
  undefined *local_68;
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  iVar1 = (*(code *)PTR_ioctl_009e0978)(param_1,0x540e,0);
  if (-1 < iVar1) {
    return;
  }
  lVar2 = _ZN4core4sync6atomic11atomic_load17h6d761ceb83d12973E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (lVar2 == 0) {
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_009de2d0)(1);
  }
  puVar3 = (uint *)(*(code *)PTR___errno_location_009de6e0)();
  local_78 = (ulong)*puVar3 << 0x20 | 2;
  local_68 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_009de518
  ;
  local_38 = &PTR_s_ioctl_TIOCSCTTY_failed__00997258;
  local_30 = 1;
  local_18 = 0;
  local_28 = &local_70;
  local_20 = 1;
  local_70 = (undefined *)&local_78;
                    /* try { // try from 006beb35 to 006beb78 has its CatchHandler @ 006beb8d */
  local_40 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                       (&PTR_s_alacritty_terminal_src_tty_unix__00997268);
  local_60 = "alacritty_terminal::tty::unix";
  local_58 = 0x1d;
  local_50 = "alacritty_terminal::tty::unix";
  local_48 = 0x1d;
  _ZN3log13__private_api3log17h93cd9fe3a2fa9a8fE(&local_38,&local_60);
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h86469fc896c1a0d5E(local_78);
  uVar4 = (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_009de2d0)(1);
                    /* catch() { ... } // from try @ 006beb35 with catch @ 006beb8d */
                    /* try { // try from 006beb94 to 006beb98 has its CatchHandler @ 006beba1 */
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h86469fc896c1a0d5E(local_78);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar4);
}