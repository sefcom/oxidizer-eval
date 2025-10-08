undefined8
_ZN8uu_split12custom_write17h0d0a2b12f451d71bE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_20;
  
  auVar3 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5write17hec7dc5b7edb0f9a4E
                     (param_3,param_1,param_2);
  local_20 = auVar3._8_8_;
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = _ZN8uu_split18ignorable_io_error17hdf5e1be4074d3926E(local_20,param_4);
    uVar2 = 1;
    if (cVar1 != '\0') {
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2c8dec07427c60f4E(&local_20);
      uVar2 = 0;
    }
  }
  return uVar2;
}