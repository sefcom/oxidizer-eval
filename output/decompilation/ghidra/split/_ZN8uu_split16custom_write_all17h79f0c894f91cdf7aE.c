void _ZN8uu_split16custom_write_all17h79f0c894f91cdf7aE
               (undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  long lVar2;
  
  lVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h332cdf99430ef3b7E
                    (param_4);
  if (lVar2 == 0) {
    *param_1 = 0x100;
  }
  else {
    cVar1 = _ZN8uu_split18ignorable_io_error17h1fd98bb79e2f8f89E(lVar2,param_5);
    if (cVar1 != '\0') {
      *param_1 = 0;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h5f2d172bb60d7e56E(lVar2);
      return;
    }
    *(long *)(param_1 + 4) = lVar2;
    *(undefined *)param_1 = 1;
  }
  return;
}