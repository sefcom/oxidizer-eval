undefined1 * _ZN4just9constants9constants17h3594f93ebbf36f97E(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)_ZN3std4sync9once_lock17OnceLock_LT_T_GT_3get17h411f69f7d1dd6796E();
  if (puVar1 != (undefined1 *)0x0) {
    return puVar1;
  }
  _ZN3std4sync9once_lock17OnceLock_LT_T_GT_10initialize17he8ce6fb6b3881daeE();
  return _ZN4just9constants9constants3MAP17hebc87ddaee515c1dE;
}