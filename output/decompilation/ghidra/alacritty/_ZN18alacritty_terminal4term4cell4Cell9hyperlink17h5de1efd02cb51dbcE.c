undefined8 _ZN18alacritty_terminal4term4cell4Cell9hyperlink17h5de1efd02cb51dbcE(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  
  if ((param_1 != 0) && (plVar2 = *(long **)(param_1 + 0x28), plVar2 != (long *)0x0)) {
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
      return *(undefined8 *)(param_1 + 0x28);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  return 0;
}