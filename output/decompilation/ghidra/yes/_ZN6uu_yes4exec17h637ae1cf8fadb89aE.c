ulong _ZN6uu_yes4exec17h637ae1cf8fadb89aE(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  uVar2 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_28);
  local_38 = uVar2;
                    /* try { // try from 001a6a3e to 001a6a62 has its CatchHandler @ 001a6ab9 */
  uVar1 = _ZN6uucore8features7signals18enable_pipe_errors17hea9713d91b5b8a8cE();
  if (uVar1 == 0x86) {
    local_2c = 1;
    uVar3 = _ZN6uu_yes6splice11splice_data17h72ae45c2ba61e376E(param_1,param_2,&local_2c);
    while (uVar3 == 0) {
                    /* try { // try from 001a6a80 to 001a6a8b has its CatchHandler @ 001a6abe */
      uVar3 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                        (&local_38,param_1,param_2);
      uVar2 = local_38;
    }
  }
  else {
    uVar3 = (ulong)uVar1 << 0x20 | 2;
  }
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h4e60d91f978d58ffE(uVar2);
  return uVar3;
}