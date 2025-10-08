void _ZN8uu_split16custom_write_all17h5ae19a5a4a9a7063E
               (undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  long local_20;
  
  local_20 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h54a0679222e27226E
                       (param_4);
  if (local_20 == 0) {
    *param_1 = 0x100;
  }
  else {
    cVar1 = _ZN8uu_split18ignorable_io_error17hdf5e1be4074d3926E(local_20,param_5);
    if (cVar1 == '\0') {
      *(long *)(param_1 + 4) = local_20;
      *(undefined *)param_1 = 1;
    }
    else {
      *param_1 = 0;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2c8dec07427c60f4E(&local_20);
    }
  }
  return;
}