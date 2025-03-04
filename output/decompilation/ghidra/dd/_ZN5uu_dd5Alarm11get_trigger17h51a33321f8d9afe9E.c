undefined _ZN5uu_dd5Alarm11get_trigger17h51a33321f8d9afe9E(long *param_1)

{
  undefined uVar1;
  
  LOCK();
  uVar1 = *(undefined *)(*param_1 + 0x10);
  *(undefined *)(*param_1 + 0x10) = 0;
  UNLOCK();
  return uVar1;
}