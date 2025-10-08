undefined8 _ZN2fd4exec14CommandBuilder6finish17hfc49bcefb3885af8E(long param_1)

{
  long lVar1;
  undefined auVar2 [16];
  int local_1e0;
  int iStack_1dc;
  undefined8 local_1d8;
  undefined local_1d0 [216];
  undefined local_f8 [216];
  
  if (*(long *)(param_1 + 0x138) != 0) {
    lVar1 = param_1 + 0x50;
    auVar2 = _ZN6argmax7Command8try_args17hece235fc07ad1533E
                       (lVar1,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      return auVar2._8_8_;
    }
    (*(code *)PTR__ZN6argmax7Command6status17h7e65af637f3ed111E_005408f0)(&local_1e0,lVar1);
    if (local_1e0 == 1) {
      return local_1d8;
    }
    if (iStack_1dc != 0) {
      *(undefined *)(param_1 + 0x148) = 4;
    }
    _ZN2fd4exec14CommandBuilder11new_command17hd2fd042878a0df86E
              (&local_1e0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR_memcpy_0053fd28)(local_f8,local_1d0,0xd8,-CONCAT44(iStack_1dc,local_1e0));
                    /* try { // try from 002f39ef to 002f39f6 has its CatchHandler @ 002f3a32 */
    _ZN4core3ptr36drop_in_place_LT_argmax__Command_GT_17hca65ebb0b5b23438E(lVar1);
    *(long *)(param_1 + 0x50) = CONCAT44(iStack_1dc,local_1e0);
    *(undefined8 *)(param_1 + 0x58) = local_1d8;
    (*(code *)PTR_memcpy_0053fd28)(param_1 + 0x60,local_f8,0xd8);
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  return 0;
}