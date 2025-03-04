undefined8
_ZN8uu_split12custom_write17he4121ae57a3a57a0E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  auVar3 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5write17hb07c88488005409aE
                     (param_3,param_1,param_2);
  if (auVar3._0_8_ == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = _ZN8uu_split18ignorable_io_error17h1fd98bb79e2f8f89E(auVar3._8_8_,param_4);
    uVar2 = 1;
    if (cVar1 != '\0') {
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5f2d172bb60d7e56E(auVar3._8_8_);
      uVar2 = 0;
    }
  }
  return uVar2;
}