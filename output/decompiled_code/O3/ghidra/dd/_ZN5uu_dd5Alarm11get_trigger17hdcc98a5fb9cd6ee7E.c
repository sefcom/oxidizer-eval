undefined __rustcall uu_dd::Alarm::get_trigger(long *param_1)

{
  undefined uVar1;
  
  LOCK();
  uVar1 = *(undefined *)(*param_1 + 0x10);
  *(undefined *)(*param_1 + 0x10) = 0;
  UNLOCK();
  return uVar1;
}