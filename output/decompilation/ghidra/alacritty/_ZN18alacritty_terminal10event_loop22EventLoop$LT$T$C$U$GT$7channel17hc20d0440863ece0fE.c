void _ZN18alacritty_terminal10event_loop22EventLoop_LT_T_C_U_GT_7channel17hc20d0440863ece0fE
               (undefined (*param_1) [16],long param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined auVar4 [16];
  
  auVar4 = _ZN71__LT_std__sync__mpmc__Sender_LT_T_GT__u20_as_u20_core__clone__Clone_GT_5clone17h054a57b759326448E
                     (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
  plVar2 = *(long **)(param_2 + 0x60);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    *param_1 = auVar4;
    *(long **)param_1[1] = plVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}