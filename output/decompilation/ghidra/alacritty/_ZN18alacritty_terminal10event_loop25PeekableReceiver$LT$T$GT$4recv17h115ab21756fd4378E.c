void _ZN18alacritty_terminal10event_loop25PeekableReceiver_LT_T_GT_4recv17h115ab21756fd4378E
               (long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long local_58;
  char cStack_50;
  undefined7 uStack_4f;
  long local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_2[2] != -0x7ffffffffffffffd) {
    param_1[2] = param_2[4];
    lVar2 = param_2[3];
    *param_1 = param_2[2];
    param_1[1] = lVar2;
    param_2[2] = -0x7ffffffffffffffd;
    return;
  }
  _ZN3std4sync4mpmc17Receiver_LT_T_GT_8try_recv17haa6718ece8b77ad0E(&local_58,*param_2,param_2[1]);
  if ((local_58 == -0x7ffffffffffffffd) && (cStack_50 != '\0')) {
    local_40 = &PTR_s_event_loop_channel_closed_00977268;
    local_38 = 1;
    local_30 = 8;
    local_28 = 0;
    uStack_20 = 0;
                    /* try { // try from 0046c6cd to 0046c6de has its CatchHandler @ 0046c6e1 */
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_009de0e0)
              (&local_40,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977278);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (local_58 == -0x7ffffffffffffffd) {
    *param_1 = -0x7ffffffffffffffd;
    _ZN4core3ptr116drop_in_place_LT_core__result__Result_LT_alacritty_terminal__event_loop__Msg_C_std__sync__mpsc__TryRecvError_GT__GT_17h44d8e2a1ee460e32E
              (&local_58);
    return;
  }
  param_1[2] = local_48;
  *param_1 = local_58;
  param_1[1] = CONCAT71(uStack_4f,cStack_50);
  return;
}