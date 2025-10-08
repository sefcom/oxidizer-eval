undefined8
_ZN18alacritty_terminal10event_loop22EventLoop_LT_T_C_U_GT_18drain_recv_channel17h2d21a4de93332a53E
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  
  local_50 = param_2;
  _ZN18alacritty_terminal10event_loop25PeekableReceiver_LT_T_GT_4recv17h115ab21756fd4378E
            (&local_68,param_1 + 0x70);
  if (local_68 != 0x8000000000000003) {
    do {
      uVar1 = local_68 ^ 0x8000000000000000;
      if (1 < local_68 + 0x7fffffffffffffff) {
        uVar1 = 0;
      }
      if (uVar1 == 0) {
        local_40 = local_60;
        local_38 = local_58;
        _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h7c7713be3f82d0d2E
                  (local_50,local_48);
      }
      else {
        if (uVar1 != 2) {
          return 0;
        }
        (*(code *)
          PTR__ZN90__LT_alacritty_terminal__tty__unix__Pty_u20_as_u20_alacritty_terminal__event__OnResize_GT_9on_resize17h44ce8e7d6aa16083E_009de500
        )(param_1);
      }
      _ZN18alacritty_terminal10event_loop25PeekableReceiver_LT_T_GT_4recv17h115ab21756fd4378E
                (&local_68,param_1 + 0x70);
    } while (local_68 != 0x8000000000000003);
  }
  _ZN4core3ptr116drop_in_place_LT_core__result__Result_LT_alacritty_terminal__event_loop__Msg_C_std__sync__mpsc__TryRecvError_GT__GT_17h44d8e2a1ee460e32E
            (&local_68);
  return 1;
}