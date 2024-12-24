undefined8 __rustcall
uu_dd::Source::discard_cache(int param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    return 0x1d;
  }
  uVar1 = nix::fcntl::posix_fadvise::posix_fadvise(param_2,param_3,param_4,4);
  return uVar1;
}