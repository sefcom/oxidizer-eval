undefined8 __rustcall uu_dd::flush_caches_full_length(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 2);
  if (*(char *)(lVar1 + 0x45) != '\0') {
    auVar2 = Source::len();
    if (auVar2._0_8_ != 0) {
      return auVar2._8_8_;
    }
    Input::discard_cache(*param_1,param_1[1],0);
  }
  if (*(char *)(lVar1 + 0x9c) != '\0') {
    auVar2 = Dest::len(param_2);
    if (auVar2._0_8_ != 0) {
      return auVar2._8_8_;
    }
    Output::discard_cache(param_2,0,auVar2._8_8_);
  }
  return 0;
}