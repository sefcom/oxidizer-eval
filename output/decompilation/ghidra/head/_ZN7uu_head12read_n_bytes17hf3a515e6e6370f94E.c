undefined8 _ZN7uu_head12read_n_bytes17hf3a515e6e6370f94E(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18 [16];
  
  local_18 = _ZN3std2io4Read4take17hdf7cdaeb19ce7142E();
  local_20 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  local_28 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&local_20);
                    /* try { // try from 001b93ae to 001b93ba has its CatchHandler @ 001b93e2 */
  auVar2 = _ZN116__LT_std__sys__pal__unix__kernel_copy__Copier_LT_R_C_W_GT__u20_as_u20_std__sys__pal__unix__kernel_copy__SpecCopy_GT_4copy17h70b043946c32882eE
                     (local_18,&local_28);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h2105b16ee338ea42E(local_28);
    uVar1 = 0;
  }
  else {
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h2105b16ee338ea42E(local_28);
  }
  return uVar1;
}