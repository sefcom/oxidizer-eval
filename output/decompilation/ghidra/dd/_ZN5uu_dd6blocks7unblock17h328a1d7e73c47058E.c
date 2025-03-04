void _ZN5uu_dd6blocks7unblock17h328a1d7e73c47058E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  if (param_4 != 0) {
    local_48 = (undefined **)0x0;
    local_40 = 1;
    local_38 = 0;
    local_18 = param_2;
    local_10 = param_3;
    local_8 = param_4;
    _ZN4core4iter6traits8iterator8Iterator4fold17h2b84e305e1d72edfE(param_1,&local_18,&local_48);
    return;
  }
  local_48 = &PTR_s_chunk_size_must_be_non_zero_00261910;
  local_40 = 1;
  local_38 = 8;
  local_30 = 0;
  uStack_28 = 0;
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking9panic_fmt17he12d0d7468628bb4E
            (&local_48,&PTR_s_src_uu_dd_src_blocks_rs_00261920);
}