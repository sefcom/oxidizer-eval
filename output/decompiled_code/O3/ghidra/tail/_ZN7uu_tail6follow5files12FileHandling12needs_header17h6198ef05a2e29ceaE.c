ulong __rustcall
uu_tail::follow::files::FileHandling::needs_header
          (long *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
          undefined8 param_6)

{
  ulong uVar1;
  
  if (param_4 != 0) {
    uVar1 = 1;
    if (*param_1 != -0x8000000000000000) {
      uVar1 = _<std::path::PathBuf_as_core::cmp::PartialEq<&std::path::Path>>::eq
                        (param_1[1],param_1[2],param_2,param_3,param_3,param_6,1);
      uVar1 = uVar1 ^ 1;
    }
    return uVar1;
  }
  return 0;
}