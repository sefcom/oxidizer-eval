undefined8 *
_ZN18alacritty_terminal10event_loop25PeekableReceiver_LT_T_GT_4peek17h98818be9381ae152E
          (undefined8 *param_1)

{
  undefined8 *puVar1;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar1 = param_1 + 2;
  if (param_1[2] == -0x7ffffffffffffffd) {
    _ZN3std4sync4mpmc17Receiver_LT_T_GT_8try_recv17haa6718ece8b77ad0E(&local_50,*param_1,param_1[1])
    ;
    if (local_50 == -0x7ffffffffffffffd) {
      _ZN4core3ptr116drop_in_place_LT_core__result__Result_LT_alacritty_terminal__event_loop__Msg_C_std__sync__mpsc__TryRecvError_GT__GT_17h44d8e2a1ee460e32E
                (&local_50);
    }
    else {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
    }
    _ZN4core3ptr116drop_in_place_LT_core__result__Result_LT_alacritty_terminal__event_loop__Msg_C_std__sync__mpsc__TryRecvError_GT__GT_17h44d8e2a1ee460e32E
              (puVar1);
    param_1[2] = local_50;
    param_1[3] = CONCAT44(uStack_34,local_38);
    param_1[4] = CONCAT44(uStack_2c,uStack_30);
    if (local_50 == -0x7ffffffffffffffd) {
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}