long * _ZN18alacritty_terminal10event_loop15EventLoopSender4send17haeef4044a20286f0E
                 (long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long local_30;
  long local_28;
  long lStack_20;
  
  _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h12a80bae5fcd4320E(&local_30,*param_2,param_2[1],param_3)
  ;
  if (local_30 == -0x7ffffffffffffffd) {
    lVar1 = (*(code *)PTR__ZN7polling6Poller6notify17h604973b6b86d6531E_009e1428)(param_2[2] + 0x10)
    ;
    if (lVar1 == 0) {
      *param_1 = -0x7ffffffffffffffc;
    }
    else {
      *param_1 = -0x7ffffffffffffffd;
      param_1[1] = lVar1;
    }
  }
  else {
    param_1[1] = local_28;
    param_1[2] = lStack_20;
    *param_1 = local_30;
  }
  return param_1;
}